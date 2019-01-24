#ifndef OUR_SAADC_H__
#define OUR_SAADC_H__


#include "nrf_drv_saadc.h"
#include "nrf_drv_ppi.h"
#include "nrf_drv_timer.h"
#include "nrf_log.h"

#include "our_ble.h"


/**@brief Initializes the saadc peripheral
 *
 * @details Initializes the saadc peripheral to analog input 0(pin 2), with all default configurations so:
 *          gain = 1/6, reference = internal, acq time = 10us, single ended, no burst.
 *          resolution defined in sdk as 10 bits.
 */
void saadc_init(void);

/*
*@brief Initializes the saadc sampling event.
 *
 * @details Sets sampling event with timer1(defined in m_timer init above), sets events to occur every 1000ms        
 */
void saadc_sampling_event_init(void);


/**@brief Currently just empty event handler that is needed for timer1 init, even though this handler is not used.     
 */
void timer_handler(nrf_timer_event_t event_type, void * p_context);


/**@brief Enables the sampling event      
 */
void saadc_sampling_event_enable(void);


void saadc_event(nrf_drv_saadc_evt_t const * p_event);

#endif