

#include "nrf_drv_saadc.h"
#include "nrf_drv_ppi.h"
#include "nrf_drv_rtc.h"
#include "adc_handler.h"

#include "nrf_gpio.h"
#include "nrf_drv_clock.h"

#include "ble_handler.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>


extern ble_os_t m_our_service;


uint8_t sample_index = 0;
uint8_t front_buffer[15] = { 0x00 };
uint8_t back_buffer[15] = { 0x00 };


void adc_rtc_config() {

  //initialize clock rtc uses
  nrf_drv_clock_init();
  nrf_drv_clock_lfclk_request(NULL);

  //define configuration for saadc channel 0
  channel_0_config.resistor_p = NRF_SAADC_RESISTOR_DISABLED;
  channel_0_config.resistor_n = NRF_SAADC_RESISTOR_DISABLED;
  channel_0_config.gain       = NRF_SAADC_GAIN1_6;
  channel_0_config.reference  = NRF_SAADC_REFERENCE_INTERNAL;
  channel_0_config.acq_time   = NRF_SAADC_ACQTIME_20US;
  channel_0_config.mode       = NRF_SAADC_MODE_SINGLE_ENDED;
  channel_0_config.pin_p      = (nrf_saadc_input_t)(NRF_SAADC_INPUT_AIN1);
  channel_0_config.pin_n      = NRF_SAADC_INPUT_DISABLED;
          
  //define configuration for saadc channel 1
  channel_1_config.resistor_p = NRF_SAADC_RESISTOR_DISABLED;
  channel_1_config.resistor_n = NRF_SAADC_RESISTOR_DISABLED;
  channel_1_config.gain       = NRF_SAADC_GAIN1_6;
  channel_1_config.reference  = NRF_SAADC_REFERENCE_INTERNAL;
  channel_1_config.acq_time   = NRF_SAADC_ACQTIME_20US;
  channel_1_config.mode       = NRF_SAADC_MODE_SINGLE_ENDED;
  channel_1_config.pin_p      = (nrf_saadc_input_t)(NRF_SAADC_INPUT_AIN2);
  channel_1_config.pin_n      = NRF_SAADC_INPUT_DISABLED;


  //configure gpio pins for output, used to power fsrs
  nrf_gpio_cfg_output(25);
  nrf_gpio_pin_toggle(25);
  nrf_gpio_cfg_output(26);
  nrf_gpio_pin_toggle(26);

}

void init_rtc() {

  //get default rtc_config and change prescalar to rtc_prescalar
  nrf_drv_rtc_config_t rtc_config = NRF_DRV_RTC_DEFAULT_CONFIG;
  rtc_config.prescaler = rtc_prescaler;

  //initialize rtcs
  nrf_drv_rtc_init(&rtc_2, &rtc_config, rtc_callback);

  //set rtc compare value
  nrf_drv_rtc_cc_set(&rtc_2,2,rtc_cc,true);
  
  //enable rtc
  nrf_drv_rtc_enable(&rtc_2);
}


void saadc_init() {

  //initialize rtc
  nrf_drv_saadc_init(NULL, fsr_sample_isr);

  //set channels, setting multiple enables compare mode
  nrf_drv_saadc_channel_init(1, &channel_0_config);
  nrf_drv_saadc_channel_init(2, &channel_1_config);

  //set up buffer for DMA
  nrf_drv_saadc_buffer_convert(adc_buffer_pool[0], saadc_channels);
}


void rtc_callback(nrf_drv_rtc_int_type_t int_type) {

    //if rtc compare value reached
    if (int_type == NRF_DRV_RTC_INT_COMPARE2) {

        fsr_power_on();
                    
        //initialize the saadc and start the scan sample
        saadc_init();
        nrf_drv_saadc_sample();
    
        //clear rtc counter and start over
        nrf_drv_rtc_cc_set(&rtc_2,2,rtc_cc,true);
        nrf_drv_rtc_counter_clear(&rtc_2);
    }
}


void fsr_sample_isr(nrf_drv_saadc_evt_t const* p_event) {

  if (p_event->type == NRF_DRV_SAADC_EVT_DONE) {
    
    //turn off fsr power
    fsr_power_off();

    //convert saadc buffer values
    nrf_drv_saadc_buffer_convert(p_event->data.done.p_buffer, saadc_channels);
  
    //uninitialize the adc to turn off DMA to conserve power
    nrf_drv_saadc_uninit();

    //save adc valies
    uint8_t fsr1Int = (uint8_t)p_event->data.done.p_buffer[0];
    uint8_t fsr2Int = (uint8_t)p_event->data.done.p_buffer[1];
    
    //ensure fsr values cant be slightly negative
    if( fsr1Int > 255 ) fsr1Int = 0;  
    if( fsr2Int > 255 ) fsr2Int = 0;

    //recalculate sample rate based on fsr values
    set_sample_rate_constant_curve( fsr1Int, fsr2Int );

    //save and get ready to send data
    handle_fsr_data( fsr1Int, fsr2Int );

  }
}


#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
void set_sample_rate_constant_curve( uint8_t fsr1Int, uint8_t fsr2Int ) {

  //convert fsr values to floats
  float fsr1 = (float)(fsr1Int) / 255.0 * 3.6 ;
  float fsr2 = (float)(fsr2Int) / 255.0 * 3.6 ;

  //TESTING CODE SAVE THE VALUES
  printf("ADC: %d, %d\n",fsr1Int,fsr2Int);
  //printf("ADC: %f, %f\n",fsr1,fsr2);

  //if one of the fsrs is above the treshold, start taking samples more often
  if( max( fsr1, fsr2 ) > step_voltage_threshold ) {
    rtc_cc = 1;
  } else { 
    //otherwise drop back down to minimum sample rate
    rtc_cc = max_sample_freq_hz / min_sample_freq_hz;
  }
}


void handle_fsr_data( uint8_t front_val, uint8_t back_val ) {

  //save fsr values, if sample rate is low, copy them so buffer is full before ble transmit
  for( int i = 0; i < rtc_cc; i++ ) {
    front_buffer[(sample_index + i) % 15] = front_val;
    back_buffer[(sample_index + i) % 15]  = back_val;
  }

  //calcula sample index based on sampling frequency, at max rtc_cc = 1, at min rtc_cc = min/max
  sample_index = sample_index + rtc_cc;

  //if the sample index has past its max, the buffer is full, update characteristics, and reset sample index and buffers
  if( sample_index >= 15 ) {
      our_characteristic_update(&m_our_service, 15, &front_buffer[0], m_our_service.front_handle);
      our_characteristic_update(&m_our_service, 15, &back_buffer[0], m_our_service.back_handle);
      sample_index %= 15;
      memset(front_buffer, 0, 15);
      memset(back_buffer, 0, 15);
  }

}


void startADC() {
    adc_rtc_config(); //configure values, only needs to be done once
    init_rtc();       //start rtc, technically starts adc too
}

void stopADC() {
  nrf_drv_rtc_disable(&rtc_2);  //disable rtc
  nrf_drv_saadc_uninit(); //diable adc
}

void fsr_power_on() {
  nrf_gpio_pin_set(25);  //supply voltage to fsr1 (D25/P2)
  nrf_gpio_pin_set(26);  //supply voltage to fsr2 (D26/P3)
} 

void fsr_power_off() {
  nrf_gpio_pin_clear(25);  //zero voltage to fsr1
  nrf_gpio_pin_clear(26);  //zero voltage to fsr2
}

