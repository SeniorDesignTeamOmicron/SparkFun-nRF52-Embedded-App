#include "our_saadc.h"

#define SAMPLES_IN_BUFFER 1
volatile uint8_t state = 1;


static const nrf_drv_timer_t m_timer = NRF_DRV_TIMER_INSTANCE(1); // Timer to be used with saadc
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


/**@brief Initializes the saadc sampling event.
 *
 * @details Sets sampling event with timer1(defined in m_timer init above), sets events to occur every 1000ms        
 */
void saadc_sampling_event_init(void) {
    ret_code_t err_code;

    err_code = nrf_drv_ppi_init();
    APP_ERROR_CHECK(err_code);

    nrf_drv_timer_config_t timer_cfg = NRF_DRV_TIMER_DEFAULT_CONFIG;
    timer_cfg.bit_width = NRF_TIMER_BIT_WIDTH_32;
    err_code = nrf_drv_timer_init(&m_timer, &timer_cfg, timer_handler);
    APP_ERROR_CHECK(err_code);

    /* setup m_timer for compare event every 1000ms */
    uint32_t ticks = nrf_drv_timer_ms_to_ticks(&m_timer, 1000);
    nrf_drv_timer_extended_compare(&m_timer,
                                   NRF_TIMER_CC_CHANNEL0,
                                   ticks,
                                   NRF_TIMER_SHORT_COMPARE0_CLEAR_MASK,
                                   false);
    nrf_drv_timer_enable(&m_timer);

    uint32_t timer_compare_event_addr = nrf_drv_timer_compare_event_address_get(&m_timer,
                                                                                NRF_TIMER_CC_CHANNEL0);
    uint32_t saadc_sample_task_addr   = nrf_drv_saadc_sample_task_get();

    /* setup ppi channel so that timer compare event is triggering sample task in SAADC */
    err_code = nrf_drv_ppi_channel_alloc(&m_ppi_channel);
    APP_ERROR_CHECK(err_code);

    err_code = nrf_drv_ppi_channel_assign(m_ppi_channel,
                                          timer_compare_event_addr,
                                          saadc_sample_task_addr);
    APP_ERROR_CHECK(err_code);
}


/**@brief Currently just empty event handler that is needed for timer1 init, even though this handler is not used.     
 */
void timer_handler(nrf_timer_event_t event_type, void * p_context) {

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
void saadc_event(nrf_drv_saadc_evt_t const * p_event) {
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
        }
    }
}