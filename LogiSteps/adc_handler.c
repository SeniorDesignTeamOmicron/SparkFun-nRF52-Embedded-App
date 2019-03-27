

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

  //define configuration for saadc channel 2
  channel_2_config.resistor_p = NRF_SAADC_RESISTOR_DISABLED;
  channel_2_config.resistor_n = NRF_SAADC_RESISTOR_DISABLED;
  channel_2_config.gain       = NRF_SAADC_GAIN1_6;
  channel_2_config.reference  = NRF_SAADC_REFERENCE_INTERNAL;
  channel_2_config.acq_time   = NRF_SAADC_ACQTIME_20US;
  channel_2_config.mode       = NRF_SAADC_MODE_SINGLE_ENDED;
  channel_2_config.pin_p      = (nrf_saadc_input_t)(NRF_SAADC_INPUT_AIN3);
  channel_2_config.pin_n      = NRF_SAADC_INPUT_DISABLED;

  nrf_gpio_cfg_output(25);
  nrf_gpio_pin_toggle(25);
  nrf_gpio_cfg_output(26);
  nrf_gpio_pin_toggle(26);
  nrf_gpio_cfg_output(27);
  nrf_gpio_pin_toggle(27);

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
  nrf_drv_saadc_channel_init(3, &channel_2_config);

  //set up buffer for DMA
  nrf_drv_saadc_buffer_convert(adc_buffer_pool[0], saadc_channels);
}

void rtc_callback(nrf_drv_rtc_int_type_t int_type) {

    //if rtc compare value reached
    if (int_type == NRF_DRV_RTC_INT_COMPARE2) {

        fsr_inCap_power_on();
                    
        //initialize the saadc and start the scan sample
        saadc_init();
        nrf_drv_saadc_sample();
    
        //clear rtc counter and start over
        nrf_drv_rtc_cc_set(&rtc_2,2,rtc_cc,true);
        nrf_drv_rtc_counter_clear(&rtc_2);
    }
}

extern float temp0 = 0;
extern float temp1 = 0;
extern float temp2 = 0;
extern float temp3 = 0;
extern float temp4 = 0;

void fsr_sample_isr(nrf_drv_saadc_evt_t const* p_event) {

  //nrf_gpio_pin_toggle(7);

  if (p_event->type == NRF_DRV_SAADC_EVT_DONE) {
    
    //turn off fsr power
    fsr_inCap_power_off();

    //convert saadc buffer values
    nrf_drv_saadc_buffer_convert(p_event->data.done.p_buffer, saadc_channels);
  
    //TESTING CODE SAVE THE VALUES
    temp0 = (float)(p_event->data.done.p_buffer[0]) / 255.0 * 3.6 ;
    temp1 = (float)(p_event->data.done.p_buffer[1]) / 255.0 * 3.6 ;
    temp2 = (float)(p_event->data.done.p_buffer[2]) / 255.0 * 3.6 ;

    //uninitialize the adc to turn off DMA to conserve power
    nrf_drv_saadc_uninit();

    set_sample_rate_constant_curve( temp0, temp1, temp2 );
    //set_sample_rate_exp_decay( temp0, temp1, temp2 );

    int16_t data = p_event->data.done.p_buffer[0];
    our_characteristic_update(&m_our_service, 2, &data, m_our_service.data_handle);

    printf("ADC: %f, %f, %f\n",temp0,temp1,temp2);

    if (temp2 > 2.5 ) {

      //test();
    }
  }
}


void fsr_inCap_power_on() {
  nrf_gpio_pin_set(25);  //supply voltage to fsr1                      (D25/P2)
  nrf_gpio_pin_set(26);  //supply voltage to fsr2                      (D26/P3)
  nrf_gpio_pin_set(27);  //power on mosfet to measure input capacitor  (D27/P4)
} 

void fsr_inCap_power_off() {
  nrf_gpio_pin_clear(25);  //zero voltage to fsr1
  //nrf_gpio_pin_clear(26);  //zero voltage to fsr2
  nrf_gpio_pin_clear(27);  //power off mosfet to measure input capacitor
}




#define max( a, b ) ( ((a) > (b)) ? (a) : (b) )
#define min( a, b ) ( ((a) > (b)) ? (b) : (a) )


extern float temp5 = 0;

void set_sample_rate_constant_curve( float fsr1, float fsr2, float in_cap ) {

  float fsr = max( temp0, temp1 );

  rtc_cc = (int)( max_sample_freq_hz / ( min_sample_freq_hz + fsr_voltage_multiplier \
                  * (max(fsr,step_voltage_threshold) - step_voltage_threshold ) ) );

  temp5 = rtc_cc;
  
  if( rtc_cc < 1 ) {
    rtc_cc = 1;
  }

}


extern float temp6 = 0;
extern float temp7 = 0;
extern float temp8 = 0;

void set_sample_rate_exp_decay( float fsr1, float fsr2, float in_cap ) {

  float fsr = max( max( temp0, temp1 ) - step_voltage_threshold, 0.0 );

  fsr_avg = fsr_avg * alpha + fsr * (1.0 - alpha);

  float mult = fabs(fsr_avg - fsr) / (fsr_max_voltage-step_voltage_threshold);

  float fsr_diff = min_sample_freq_hz + (max_sample_freq_hz - min_sample_freq_hz) * mult;

  rtc_cc = (int)( max_sample_freq_hz / fsr_diff );

  temp5 = rtc_cc;

  
  if( rtc_cc < 1 ) {
    rtc_cc = 1;
  }

}