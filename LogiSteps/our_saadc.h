#ifndef OUR_SAADC_H__
#define OUR_SAADC_H__


#include "nrf_drv_saadc.h"
#include "nrf_drv_ppi.h"
#include "nrf_drv_timer.h"
#include "nrf_log.h"

#include "our_ble.h"



void saadc_init(void);


void saadc_sampling_event_init(void);


void timer_handler(nrf_timer_event_t event_type, void * p_context);


void saadc_sampling_event_enable(void);


void saadc_callback(nrf_drv_saadc_evt_t const * p_event);

#endif