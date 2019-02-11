#include "our_saadc.h"

//TESTING INCLUDE
#include "nrf_gpio.h"

#define SAMPLES_IN_BUFFER 1

//The RTC ticks 32768 times per second, prescaler can be set from 0 to 4095 (2^12)
//max prescaler at 4095 means the rtc interrupt fires every 0.125ms or 8 times per second
#define rtc_prescaler 4095   //Value to set prescaler to, determines frequency of rtc
#define rtc_cc        8      //Get compare event after this many cycles of the rtc count


static const nrf_drv_rtc_t   m_rtc = NRF_DRV_RTC_INSTANCE(2);  // RTC to be used with saadc
static nrf_saadc_value_t     m_buffer_pool[2][SAMPLES_IN_BUFFER]; // saadc value buffer
static nrf_ppi_channel_t     m_ppi_channel;                       // saadc channel to use

//BLE service, global var
extern ble_os_t m_our_service;



/**@brief Initializes the saadc peripheral
 *
 * @details Initializes the saadc peripheral to analog input 0(pin 2), with all default configurations so:
 *          gain = 1/6, reference = internal, acq time = 10us, single ended, no burst.
 *          sdk defines: resolution = 10-bits, no oversample.
 */
void saadc_init(void) {
    ret_code_t err_code;
    nrf_saadc_channel_config_t channel_config =
    NRF_DRV_SAADC_DEFAULT_CHANNEL_CONFIG_SE(NRF_SAADC_INPUT_AIN0);

    err_code = nrf_drv_saadc_init(NULL, saadc_event);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_drv_saadc_channel_init(0, &channel_config);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_drv_saadc_buffer_convert(m_buffer_pool[0], SAMPLES_IN_BUFFER);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_drv_saadc_buffer_convert(m_buffer_pool[1], SAMPLES_IN_BUFFER);
    APP_ERROR_CHECK(err_code);

}


/**@brief Currently just empty event handler that is needed for rtc init, even though this handler is not used.     
 */
void rtc_handler(nrf_drv_rtc_int_type_t int_type) {

}


/**@brief Initializes the saadc sampling event.
 */
void saadc_sampling_event_init(void) {
    ret_code_t err_code;
    
    //err_code = nrf_drv_clock_init();
    //APP_ERROR_CHECK(err_code);
    //nrf_drv_clock_lfclk_request(NULL);

    //Init ppi
    err_code = nrf_drv_ppi_init();
    APP_ERROR_CHECK(err_code);

    //Init rtc
    nrf_drv_rtc_config_t rtc_config = NRF_DRV_RTC_DEFAULT_CONFIG;
    rtc_config.prescaler = rtc_prescaler;
    err_code = nrf_drv_rtc_init(&m_rtc, &rtc_config, rtc_handler);
    APP_ERROR_CHECK(err_code);

    //Set compare channel 2 to trigger 
    err_code = nrf_drv_rtc_cc_set(&m_rtc,2, rtc_cc,false);
    APP_ERROR_CHECK(err_code);

    //nrf_drv_rtc_tick_enable(&m_rtc, true);
    //Power on RTC instance
    nrf_drv_rtc_enable(&m_rtc);

    uint32_t rtc_compare_event_addr = nrf_drv_rtc_event_address_get(&m_rtc, NRF_RTC_EVENT_COMPARE_2);
    uint32_t rtc_clear_task_addr = nrf_drv_rtc_task_address_get(&m_rtc, NRF_RTC_TASK_CLEAR);
    uint32_t saadc_sample_event_addr = nrf_drv_saadc_sample_task_get();

    /* setup ppi channel so that timer compare event is triggering sample task in SAADC */
    err_code = nrf_drv_ppi_channel_alloc(&m_ppi_channel);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_drv_ppi_channel_assign(m_ppi_channel, rtc_compare_event_addr, saadc_sample_event_addr);
    APP_ERROR_CHECK(err_code);
    err_code = nrf_drv_ppi_channel_fork_assign(m_ppi_channel, rtc_clear_task_addr);
    APP_ERROR_CHECK(err_code);
}


/**@brief Enables the sampling event      
 */
void saadc_sampling_event_enable(void) {
    ret_code_t err_code = nrf_drv_ppi_channel_enable(m_ppi_channel);

    APP_ERROR_CHECK(err_code);
}

int thing = 0;

/**@brief The saadc event handler
 *
 * @details If an saadc sample event has finished, it updates the ble characteristics
 *
 * @param p_event   The saadc event that has taken place
 */
void saadc_event(nrf_drv_saadc_evt_t const* p_event) {
     NRF_LOG_INFO("in saadc event");
    if (p_event->type == NRF_DRV_SAADC_EVT_DONE) {
        ret_code_t err_code;

        err_code = nrf_drv_saadc_buffer_convert(p_event->data.done.p_buffer, SAMPLES_IN_BUFFER);
        APP_ERROR_CHECK(err_code);

        int i;

        for (i = 0; i < SAMPLES_IN_BUFFER; i++) {
            // saadc converted data is 16 bits
            int16_t data = p_event->data.done.p_buffer[i];
            NRF_LOG_INFO("%d", data);
            // update ble characteristics
            our_characteristic_update(&m_our_service, 2, &data, m_our_service.data_handle);
            thing++;
            our_characteristic_update(&m_our_service, 4, &thing, m_our_service.time_handle);
            
            //TESTING
            //if(thing == 20) {
              //ret_code_t err_code = nrf_drv_ppi_channel_disable(m_ppi_channel);
              //APP_ERROR_CHECK(err_code);
              //nrf_drv_rtc_disable(&m_rtc);
            //}
        }
    }
}