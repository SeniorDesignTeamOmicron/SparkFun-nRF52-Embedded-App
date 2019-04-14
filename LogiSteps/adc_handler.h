#ifndef ADC_HANDLER_H__
#define ADC_HANDLER_H__

#include "nrf_drv_saadc.h"
#include "nrf_drv_ppi.h"
#include "nrf_drv_rtc.h"


//variables to calculate saadc sampling frequency
#define min_sample_freq_hz 5
#define max_sample_freq_hz 15

#define rtc_prescaler (int)(32768.0/max_sample_freq_hz);
#define step_voltage_threshold (float)2.6

static uint16_t rtc_cc = (int)max_sample_freq_hz;      //Get compare event for fsr after this many cycles of rtc count

static nrf_drv_rtc_t rtc_2 = NRF_DRV_RTC_INSTANCE(2);  // RTC to be used to sample force resistive sensors

#define saadc_channels        2
#define saadc_buffer_samples  1

static nrf_saadc_channel_config_t  channel_0_config;
static nrf_saadc_channel_config_t  channel_1_config;

static nrf_saadc_value_t     adc_buffer_pool[saadc_channels][saadc_buffer_samples];

void adc_rtc_config();
void init_rtc();
void init_saadc();

void rtc_callback(nrf_drv_rtc_int_type_t int_type);
void fsr_sample_isr(nrf_drv_saadc_evt_t const* p_event);

void handle_fsr_data( uint8_t front_val, uint8_t back_val );
void set_sample_rate_constant_curve( uint8_t fsr1Int, uint8_t fsr2Int );


void fsr_power_on();
void fsr_power_off();
void startADC();
void stopADC();

#endif