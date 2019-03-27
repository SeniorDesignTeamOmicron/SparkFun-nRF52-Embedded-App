#ifndef LOGI_TIMER_H__
#define LOGI_TIMER_H__

#include "nrf_drv_rtc.h"

static nrf_drv_rtc_t   m_rtc = NRF_DRV_RTC_INSTANCE(2);  // RTC to be used with saadc

#define rtc_cc        8      //Get compare event after this many cycles of the rtc count

static uint16_t rtc_pre = 4095;

void test(nrf_drv_rtc_int_type_t );
void test2(nrf_drv_rtc_int_type_t );
void call_once_ms( uint16_t );

#endif