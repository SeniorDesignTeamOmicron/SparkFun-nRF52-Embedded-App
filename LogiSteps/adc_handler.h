#ifndef ADC_HANDLER_H__
#define ADC_HANDLER_H__

#include "nrf_drv_saadc.h"
#include "nrf_drv_ppi.h"
#include "nrf_drv_rtc.h"


//variables to calculate saadc sampling frequency
#define min_sample_freq_hz 4.0
#define max_sample_freq_hz 15.0

#define rtc_prescaler (int)(32768.0/max_sample_freq_hz);
#define step_voltage_threshold (float)2.6
#define fsr_reference_resistor (float)10000.0
#define fsr_minimum_resistance (float)200.0
#define input_voltage (float)3.6
#define fsr_max_voltage (float)((input_voltage * fsr_reference_resistor) / (fsr_reference_resistor + fsr_minimum_resistance))
#define fsr_voltage_multiplier (float)(max_sample_freq_hz - min_sample_freq_hz) / ( fsr_max_voltage - step_voltage_threshold )

#define alpha 0.99
static float fsr_avg = 0.0;


static uint16_t rtc_cc = (int)max_sample_freq_hz;      //Get compare event for fsr after this many cycles of rtc count


static nrf_drv_rtc_t rtc_2 = NRF_DRV_RTC_INSTANCE(2);  // RTC to be used to sample force resistive sensors

#define saadc_channels        3
#define saadc_buffer_samples  1

static nrf_saadc_channel_config_t  channel_0_config;
static nrf_saadc_channel_config_t  channel_1_config;
static nrf_saadc_channel_config_t  channel_2_config;

static nrf_saadc_value_t     adc_buffer_pool[saadc_channels][saadc_buffer_samples];

void adc_rtc_config();
void init_rtc();
void init_saadc();
void rtc_callback(nrf_drv_rtc_int_type_t int_type);
void fsr_sample_isr(nrf_drv_saadc_evt_t const* p_event);



void fsr_power_on();
void fsr_power_off();
void set_sample_rate_constant_curve( float fsr1, float fsr2, float in_cap );
void set_sample_rate_exp_decay( float fsr1, float fsr2, float in_cap );

#endif