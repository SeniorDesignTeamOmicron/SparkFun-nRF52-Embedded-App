
#include "nrf_drv_rtc.h"
#include "logi_timer.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"

/*

    //The RTC ticks 32768 times per second, prescaler can be set from 0 to 4095 (2^12)
    rtc_config
      .prescaler          = RTC_FREQ_TO_PRESCALER(NRFX_RTC_DEFAULT_CONFIG_FREQUENCY), 
      .interrupt_priority = NRFX_RTC_DEFAULT_CONFIG_IRQ_PRIORITY,                     
      .reliable           = NRFX_RTC_DEFAULT_CONFIG_RELIABLE,                         
      .tick_latency       = NRFX_RTC_US_TO_TICKS(NRFX_RTC_MAXIMUM_LATENCY_US,         
                                                 NRFX_RTC_DEFAULT_CONFIG_FREQUENCY)

         
//max prescaler at 4095 means the rtc interrupt fires every 0.125ms or 8 times per second
#define rtc_prescaler 4095   //Value to set prescaler to, determines frequency of rtc
#define rtc_cc        8      //Get compare event after this many cycles of the rtc count

*/
void call_once_ms( uint16_t pre ) { //nrfx_rtc_handler_t handler, uint32_t miliseconds) {

    //initialize clock rtc uses
    nrf_drv_clock_init();
    nrf_drv_clock_lfclk_request(NULL);

    //disable and uninitialize current rtc
    nrf_drv_rtc_disable(&m_rtc);
    nrf_drv_rtc_tick_disable(&m_rtc);
    nrfx_rtc_counter_clear(&m_rtc);
    nrfx_rtc_uninit(&m_rtc);

    //configure new rtc
    nrf_drv_rtc_config_t rtc_config = NRF_DRV_RTC_DEFAULT_CONFIG;
    rtc_config.prescaler = pre;
    nrf_drv_rtc_init(&m_rtc, &rtc_config, test);



    //Power on RTC instance and enable
    nrf_drv_rtc_tick_enable(&m_rtc, true);
    nrf_drv_rtc_enable(&m_rtc);
}


void test(nrf_drv_rtc_int_type_t int_type) {


    //disable current timer and clear count

    //nrf_gpio_pin_toggle(7);

    rtc_pre = rtc_pre - 100;

    if( rtc_pre < 200 ) {
      rtc_pre = 4095;
    }

    call_once_ms( rtc_pre );

}





void init_voltage_monitor() {

  //initialize input capacitor voltage monitor

  //initialize sensor voltage monitors


}

void monitor_input_cap_voltage() {

  //read input capacitor voltage value

  //if power < operationing_threshold
    //state = power_on
  //else 
    //determine time to next input check
    //determine 
  

}


void handle_fsr_sensors() {

  //turn on gpio for fsrs

  //read fsr sensors

  //turn off gpios

  //send values

  //read input capcitor voltage
  
  //set up future sample time based on current voltage on input capacitor

}