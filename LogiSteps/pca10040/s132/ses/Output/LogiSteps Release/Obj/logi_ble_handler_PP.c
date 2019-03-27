# 1 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
# 54 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
# 1 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdbool.h" 1 3 4
# 55 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdint.h" 1 3 4
# 47 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdint.h" 3 4

# 47 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdint.h" 3 4
typedef signed char int8_t;
typedef unsigned char uint8_t;




typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
# 68 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdint.h" 3 4
typedef signed long long int64_t;
typedef unsigned long long uint64_t;


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int32_t int_fast8_t;
typedef int32_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;

typedef uint32_t uint_fast8_t;
typedef uint32_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;

typedef int32_t intptr_t;
typedef uint32_t uintptr_t;
# 118 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdint.h" 3 4
typedef int64_t intmax_t;
typedef uint64_t uintmax_t;
# 56 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 1 3 4
# 47 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
# 1 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/__crossworks.h" 1 3 4
# 76 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/__crossworks.h" 3 4
typedef __builtin_va_list __va_list;
# 126 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/__crossworks.h" 3 4
struct __mbstate_s {
  int __state;
  long __wchar;
};

typedef int (__RAL_mb_encode_t)(char *s, unsigned wc, struct __mbstate_s *codec);
typedef int (__RAL_mb_decode_t)(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *codec);

typedef struct {

  const char *decimal_point;
  const char *thousands_sep;
  const char *grouping;

  const char *int_curr_symbol;
  const char *currency_symbol;
  const char *mon_decimal_point;
  const char *mon_thousands_sep;
  const char *mon_grouping;
  const char *positive_sign;
  const char *negative_sign;

  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_n_cs_precedes;
  char int_p_sep_by_space;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;




  const char *day_names;
  const char *abbrev_day_names;
  const char *month_names;
  const char *abbrev_month_names;
  const char *am_pm_indicator;
  const char *date_format;
  const char *time_format;
  const char *date_time_format;
} __RAL_locale_data_t;

enum {
  __RAL_WC_ALNUM = 1,
  __RAL_WC_ALPHA,
  __RAL_WC_CNTRL,
  __RAL_WC_DIGIT,
  __RAL_WC_GRAPH,
  __RAL_WC_LOWER,
  __RAL_WC_UPPER,
  __RAL_WC_SPACE,
  __RAL_WC_PRINT,
  __RAL_WC_PUNCT,
  __RAL_WC_BLANK,
  __RAL_WC_XDIGIT
};

enum {
  __RAL_WT_TOLOWER = 1,
  __RAL_WT_TOUPPER
};

typedef struct {

  int (*__isctype)(int, int);
  int (*__toupper)(int);
  int (*__tolower)(int);


  int (*__iswctype)(long, int);
  long (*__towupper)(long);
  long (*__towlower)(long);


  int (*__wctomb)(char *s, unsigned wc, struct __mbstate_s *state);
  int (*__mbtowc)(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);
} __RAL_locale_codeset_t;

typedef struct {
  const char *name;
  const __RAL_locale_data_t *data;
  const __RAL_locale_codeset_t *codeset;
} __RAL_locale_t;



typedef struct __locale_s {
  const __RAL_locale_t *__category[5];
} *__locale_t;


const __RAL_locale_t *__user_find_locale(const char *locale);
# 239 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/__crossworks.h" 3 4
const __RAL_locale_t *__RAL_find_locale(const char *locale);







const __RAL_locale_t *__RAL_global_locale_category(int __category);







const __RAL_locale_t *__RAL_locale_category(__locale_t __locale, int __category);






extern struct __locale_s __RAL_global_locale;






extern const __RAL_locale_t __RAL_c_locale;


extern const __RAL_locale_codeset_t __RAL_codeset_ascii;
extern const __RAL_locale_codeset_t __RAL_codeset_utf8;

extern const unsigned char __RAL_ascii_ctype_map[128];

extern const char __RAL_c_locale_day_names[];
extern const char __RAL_c_locale_abbrev_day_names[];
extern const char __RAL_c_locale_month_names[];
extern const char __RAL_c_locale_abbrev_month_names[];

extern const char __RAL_data_utf8_period[];
extern const char __RAL_data_utf8_comma[];
extern const char __RAL_data_utf8_space[];
extern const char __RAL_data_utf8_plus[];
extern const char __RAL_data_utf8_minus[];
extern const char __RAL_data_empty_string[];

const char *__RAL_string_list_decode(const char *str, int index);
int __RAL_string_list_encode(const char *list, const char *str);


void __RAL_init_mbstate(struct __mbstate_s *state);

int __RAL_ascii_wctomb(char *s, unsigned wc, struct __mbstate_s *state);
int __RAL_ascii_mbtowc(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_utf8_wctomb(char *s, unsigned wc, struct __mbstate_s *state);
int __RAL_utf8_mbtowc(unsigned *pwc, const char *s, unsigned len, struct __mbstate_s *state);

int __RAL_mb_max(const struct __locale_s *loc);

struct timeval;


int __RAL_compare_locale_name(const char *str0, const char *str1);


extern int (*__user_set_time_of_day)(const struct timeval *tp);
extern int (*__user_get_time_of_day)(struct timeval *tp);


typedef struct { unsigned short min, max, map; } __RAL_unicode_map_bmp_range_t;
typedef struct { unsigned short cp, map; } __RAL_unicode_map_bmp_singleton_t;


typedef struct { unsigned short min, max; } __RAL_unicode_set_bmp_range_t;
typedef struct { long min, max; } __RAL_unicode_set_nonbmp_range_t;


int __RAL_unicode_iswctype(long ch, int ty);
long __RAL_unicode_towupper(long ch);
long __RAL_unicode_towlower(long ch);


int __RAL_unicode_map_range_search(const void *k0, const void *k1);
int __RAL_unicode_map_singleton_search(const void *k0, const void *k1);


int __RAL_unicode_set_bmp_range_search(const void *k0, const void *k1);
int __RAL_unicode_set_nonbmp_range_search(const void *k0, const void *k1);

typedef const char * (*__RAL_error_decoder_fn_t)(int error);

typedef struct __RAL_error_decoder_s
{
  __RAL_error_decoder_fn_t decode;
  struct __RAL_error_decoder_s *next;
} __RAL_error_decoder_t;

void __RAL_register_error_decoder(__RAL_error_decoder_t *decoder);

extern __RAL_error_decoder_t *__RAL_error_decoder_head;

const char *__RAL_decode_error(int num);
# 48 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 2 3 4







typedef unsigned size_t;
# 90 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
void *memcpy(void *__s1, const void *__s2, size_t __n);
# 105 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
void *memcpy_fast(void *__s1, const void *__s2, size_t __n);
# 124 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
void *memccpy(void *__s1, const void *__s2, int __c, size_t __n);
# 138 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
void *mempcpy(void *__s1, const void *__s2, size_t __n);
# 153 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
void *memmove(void *__s1, const void *__s2, size_t __n);
# 164 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
int memcmp(const void *__s1, const void *__s2, size_t __n);
# 178 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
void *memchr(const void *__s, int __c, size_t __n);
# 188 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
void *memset(void *__s, int __c, size_t __n);
# 199 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strcpy(char *__s1, const char *__s2);
# 219 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strncpy(char *__s1, const char *__s2, size_t __n);
# 236 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
size_t strlcpy(char *__s1, const char *__s2, size_t __n);
# 249 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strcat(char *__s1, const char *__s2);
# 263 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strncat(char *__s1, const char *__s2, size_t __n);
# 284 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
size_t strlcat(char *__s1, const char *__s2, size_t __n);
# 294 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
int strcmp(const char *__s1, const char *__s2);
# 307 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
int strncmp(const char *__s1, const char *__s2, size_t __n);
# 319 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
int strcasecmp(const char *__s1, const char *__s2);
# 334 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
int strncasecmp(const char *__s1, const char *__s2, size_t __n);
# 346 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strchr(const char *__s, int __c);
# 358 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strnchr(const char *__str, size_t __n, int __ch);
# 369 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
size_t strcspn(const char *__s1, const char *__s2);
# 380 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strpbrk(const char *__s1, const char *__s2);
# 392 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strrchr(const char *__s, int __c);
# 403 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
size_t strspn(const char *__s1, const char *__s2);
# 416 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strstr(const char *__s1, const char *__s2);
# 431 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strnstr(const char *__s1, const char *__s2, size_t __n);
# 446 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strcasestr(const char *__s1, const char *__s2);
# 462 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strncasestr(const char *__s1, const char *__s2, size_t __n);







size_t strlen(const char *__s);
# 481 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
size_t strnlen(const char *__s, size_t __n);
# 515 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strtok(char *__s1, const char *__s2);
# 534 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strsep(char **__stringp, const char *__delim);
# 547 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strtok_r(char *__s1, const char *__s2, char **__s3);
# 561 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strdup(const char *__s1);
# 579 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strndup(const char *__s1, size_t __n);
# 592 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/string.h" 3 4
char *strerror(int __num);



int strcoll(const char *__str1, const char *__str2);
size_t strxfrm( char *__str1, const char *__str2, size_t __num);
# 57 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2

# 1 "../../../../../../components/libraries/util/nordic_common.h" 1
# 59 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf.h" 1
# 85 "../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../modules/nrfx/mdk/nrf52.h" 1
# 78 "../../../../../../modules/nrfx/mdk/nrf52.h"

# 78 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef enum {

  Reset_IRQn = -15,
  NonMaskableInt_IRQn = -14,
  HardFault_IRQn = -13,
  MemoryManagement_IRQn = -12,

  BusFault_IRQn = -11,

  UsageFault_IRQn = -10,
  SVCall_IRQn = -5,
  DebugMonitor_IRQn = -4,
  PendSV_IRQn = -2,
  SysTick_IRQn = -1,

  POWER_CLOCK_IRQn = 0,
  RADIO_IRQn = 1,
  UARTE0_UART0_IRQn = 2,
  SPIM0_SPIS0_TWIM0_TWIS0_SPI0_TWI0_IRQn= 3,
  SPIM1_SPIS1_TWIM1_TWIS1_SPI1_TWI1_IRQn= 4,
  NFCT_IRQn = 5,
  GPIOTE_IRQn = 6,
  SAADC_IRQn = 7,
  TIMER0_IRQn = 8,
  TIMER1_IRQn = 9,
  TIMER2_IRQn = 10,
  RTC0_IRQn = 11,
  TEMP_IRQn = 12,
  RNG_IRQn = 13,
  ECB_IRQn = 14,
  CCM_AAR_IRQn = 15,
  WDT_IRQn = 16,
  RTC1_IRQn = 17,
  QDEC_IRQn = 18,
  COMP_LPCOMP_IRQn = 19,
  SWI0_EGU0_IRQn = 20,
  SWI1_EGU1_IRQn = 21,
  SWI2_EGU2_IRQn = 22,
  SWI3_EGU3_IRQn = 23,
  SWI4_EGU4_IRQn = 24,
  SWI5_EGU5_IRQn = 25,
  TIMER3_IRQn = 26,
  TIMER4_IRQn = 27,
  PWM0_IRQn = 28,
  PDM_IRQn = 29,
  MWU_IRQn = 32,
  PWM1_IRQn = 33,
  PWM2_IRQn = 34,
  SPIM2_SPIS2_SPI2_IRQn = 35,
  RTC2_IRQn = 36,
  I2S_IRQn = 37,
  FPU_IRQn = 38
} IRQn_Type;
# 148 "../../../../../../modules/nrfx/mdk/nrf52.h"
# 1 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 1
# 210 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
# 1 "../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 1
# 61 "../../../../../../components/toolchain/cmsis/include/core_cmInstr.h"
# 1 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h" 1
# 40 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsign-conversion"
#pragma GCC diagnostic ignored "-Wconversion"
#pragma GCC diagnostic ignored "-Wunused-parameter"
# 58 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __enable_irq(void)
{
  __asm volatile ("cpsie i" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_irq(void)
{
  __asm volatile ("cpsid i" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_CONTROL(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, control" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_CONTROL(uint32_t control)
{
  __asm volatile ("MSR control, %0" : : "r" (control) : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_IPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, ipsr" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_APSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, apsr" : "=r" (result) );
  return(result);
}
# 134 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_xPSR(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, xpsr" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_PSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, psp\n" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_PSP(uint32_t topOfProcStack)
{
  __asm volatile ("MSR psp, %0\n" : : "r" (topOfProcStack) : "sp");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_MSP(void)
{
  register uint32_t result;

  __asm volatile ("MRS %0, msp\n" : "=r" (result) );
  return(result);
}
# 188 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_MSP(uint32_t topOfMainStack)
{
  __asm volatile ("MSR msp, %0\n" : : "r" (topOfMainStack) : "sp");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_PRIMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, primask" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_PRIMASK(uint32_t priMask)
{
  __asm volatile ("MSR primask, %0" : : "r" (priMask) : "memory");
}
# 226 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __enable_fault_irq(void)
{
  __asm volatile ("cpsie f" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline void __disable_fault_irq(void)
{
  __asm volatile ("cpsid f" : : : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_BASEPRI(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, basepri" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_BASEPRI(uint32_t value)
{
  __asm volatile ("MSR basepri, %0" : : "r" (value) : "memory");
}
# 274 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline void __set_BASEPRI_MAX(uint32_t value)
{
  __asm volatile ("MSR basepri_max, %0" : : "r" (value) : "memory");
}







__attribute__( ( always_inline ) ) static inline uint32_t __get_FAULTMASK(void)
{
  uint32_t result;

  __asm volatile ("MRS %0, faultmask" : "=r" (result) );
  return(result);
}







__attribute__( ( always_inline ) ) static inline void __set_FAULTMASK(uint32_t faultMask)
{
  __asm volatile ("MSR faultmask, %0" : : "r" (faultMask) : "memory");
}
# 314 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __get_FPSCR(void)
{

  uint32_t result;


  __asm volatile ("");
  __asm volatile ("VMRS %0, fpscr" : "=r" (result) );
  __asm volatile ("");
  return(result);



}







__attribute__( ( always_inline ) ) static inline void __set_FPSCR(uint32_t fpscr)
{


  __asm volatile ("");
  __asm volatile ("VMSR fpscr, %0" : : "r" (fpscr) : "vfpcc");
  __asm volatile ("");

}
# 373 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __NOP(void)
{
  __asm volatile ("nop");
}






__attribute__((always_inline)) static inline void __WFI(void)
{
  __asm volatile ("wfi");
}







__attribute__((always_inline)) static inline void __WFE(void)
{
  __asm volatile ("wfe");
}






__attribute__((always_inline)) static inline void __SEV(void)
{
  __asm volatile ("sev");
}
# 416 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __ISB(void)
{
  __asm volatile ("isb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DSB(void)
{
  __asm volatile ("dsb 0xF":::"memory");
}







__attribute__((always_inline)) static inline void __DMB(void)
{
  __asm volatile ("dmb 0xF":::"memory");
}
# 450 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV(uint32_t value)
{

  return __builtin_bswap32(value);






}
# 469 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __REV16(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rev16 %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 484 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline int32_t __REVSH(int32_t value)
{

  return (short)__builtin_bswap16(value);






}
# 504 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __ROR(uint32_t op1, uint32_t op2)
{
  return (op1 >> op2) | (op1 << (32U - op2));
}
# 526 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RBIT(uint32_t value)
{
  uint32_t result;


   __asm volatile ("rbit %0, %1" : "=r" (result) : "r" (value) );
# 544 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
  return(result);
}
# 565 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDREXB(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexb %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 587 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDREXH(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrexh %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 609 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDREXW(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrex %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 626 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXB(uint8_t value, volatile uint8_t *addr)
{
   uint32_t result;

   __asm volatile ("strexb %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 643 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXH(uint16_t value, volatile uint16_t *addr)
{
   uint32_t result;

   __asm volatile ("strexh %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" ((uint32_t)value) );
   return(result);
}
# 660 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __STREXW(uint32_t value, volatile uint32_t *addr)
{
   uint32_t result;

   __asm volatile ("strex %0, %2, %1" : "=&r" (result), "=Q" (*addr) : "r" (value) );
   return(result);
}






__attribute__((always_inline)) static inline void __CLREX(void)
{
  __asm volatile ("clrex" ::: "memory");
}
# 716 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __RRX(uint32_t value)
{
  uint32_t result;

  __asm volatile ("rrx %0, %1" : "=r" (result) : "r" (value) );
  return(result);
}
# 731 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint8_t __LDRBT(volatile uint8_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrbt %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint8_t) result);
}
# 753 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint16_t __LDRHT(volatile uint16_t *addr)
{
    uint32_t result;


   __asm volatile ("ldrht %0, %1" : "=r" (result) : "Q" (*addr) );






   return ((uint16_t) result);
}
# 775 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline uint32_t __LDRT(volatile uint32_t *addr)
{
    uint32_t result;

   __asm volatile ("ldrt %0, %1" : "=r" (result) : "Q" (*addr) );
   return(result);
}
# 790 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRBT(uint8_t value, volatile uint8_t *addr)
{
   __asm volatile ("strbt %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 802 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRHT(uint16_t value, volatile uint16_t *addr)
{
   __asm volatile ("strht %1, %0" : "=Q" (*addr) : "r" ((uint32_t)value) );
}
# 814 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__((always_inline)) static inline void __STRT(uint32_t value, volatile uint32_t *addr)
{
   __asm volatile ("strt %1, %0" : "=Q" (*addr) : "r" (value) );
}
# 832 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}


__attribute__( ( always_inline ) ) static inline uint32_t __SADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHADD16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhadd16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSUB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsub16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHASX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhasx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("ssax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __QSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("qsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("shsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UQSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uqsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UHSAX(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uhsax %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USAD8(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("usad8 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __USADA8(uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("usada8 %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}
# 1152 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __UXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("uxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __UXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("uxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTB16(uint32_t op1)
{
  uint32_t result;

  __asm volatile ("sxtb16 %0, %1" : "=r" (result) : "r" (op1));
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SXTAB16(uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sxtab16 %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUAD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuad %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUADX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smuadx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLAD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlad %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLADX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smladx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLALD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlald %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLALDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlaldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUSD (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMUSDX (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("smusdx %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSD (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsd %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SMLSDX (uint32_t op1, uint32_t op2, uint32_t op3)
{
  uint32_t result;

  __asm volatile ("smlsdx %0, %1, %2, %3" : "=r" (result) : "r" (op1), "r" (op2), "r" (op3) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLSLD (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsld %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint64_t __SMLSLDX (uint32_t op1, uint32_t op2, uint64_t acc)
{
  union llreg_u{
    uint32_t w32[2];
    uint64_t w64;
  } llr;
  llr.w64 = acc;


  __asm volatile ("smlsldx %0, %1, %2, %3" : "=r" (llr.w32[0]), "=r" (llr.w32[1]): "r" (op1), "r" (op2) , "0" (llr.w32[0]), "1" (llr.w32[1]) );




  return(llr.w64);
}

__attribute__( ( always_inline ) ) static inline uint32_t __SEL (uint32_t op1, uint32_t op2)
{
  uint32_t result;

  __asm volatile ("sel %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline int32_t __QADD( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qadd %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}

__attribute__( ( always_inline ) ) static inline int32_t __QSUB( int32_t op1, int32_t op2)
{
  int32_t result;

  __asm volatile ("qsub %0, %1, %2" : "=r" (result) : "r" (op1), "r" (op2) );
  return(result);
}
# 1357 "../../../../../../components/toolchain/cmsis/include/cmsis_gcc.h"
__attribute__( ( always_inline ) ) static inline uint32_t __SMMLA (int32_t op1, int32_t op2, int32_t op3)
{
 int32_t result;

 __asm volatile ("smmla %0, %1, %2, %3" : "=r" (result): "r" (op1), "r" (op2), "r" (op3) );
 return(result);
}






#pragma GCC diagnostic pop
# 62 "../../../../../../components/toolchain/cmsis/include/core_cmInstr.h" 2
# 211 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 1 "../../../../../../components/toolchain/cmsis/include/core_cmFunc.h" 1
# 212 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 1 "../../../../../../components/toolchain/cmsis/include/core_cmSimd.h" 1
# 213 "../../../../../../components/toolchain/cmsis/include/core_cm4.h" 2
# 308 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t _reserved0:16;
    uint32_t GE:4;
    uint32_t _reserved1:7;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} APSR_Type;
# 347 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:23;
  } b;
  uint32_t w;
} IPSR_Type;
# 365 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t ISR:9;
    uint32_t _reserved0:7;
    uint32_t GE:4;
    uint32_t _reserved1:4;
    uint32_t T:1;
    uint32_t IT:2;
    uint32_t Q:1;
    uint32_t V:1;
    uint32_t C:1;
    uint32_t Z:1;
    uint32_t N:1;
  } b;
  uint32_t w;
} xPSR_Type;
# 416 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef union
{
  struct
  {
    uint32_t nPRIV:1;
    uint32_t SPSEL:1;
    uint32_t FPCA:1;
    uint32_t _reserved0:29;
  } b;
  uint32_t w;
} CONTROL_Type;
# 451 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t ISER[8U];
        uint32_t RESERVED0[24U];
  volatile uint32_t ICER[8U];
        uint32_t RSERVED1[24U];
  volatile uint32_t ISPR[8U];
        uint32_t RESERVED2[24U];
  volatile uint32_t ICPR[8U];
        uint32_t RESERVED3[24U];
  volatile uint32_t IABR[8U];
        uint32_t RESERVED4[56U];
  volatile uint8_t IP[240U];
        uint32_t RESERVED5[644U];
  volatile uint32_t STIR;
} NVIC_Type;
# 485 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t CPUID;
  volatile uint32_t ICSR;
  volatile uint32_t VTOR;
  volatile uint32_t AIRCR;
  volatile uint32_t SCR;
  volatile uint32_t CCR;
  volatile uint8_t SHP[12U];
  volatile uint32_t SHCSR;
  volatile uint32_t CFSR;
  volatile uint32_t HFSR;
  volatile uint32_t DFSR;
  volatile uint32_t MMFAR;
  volatile uint32_t BFAR;
  volatile uint32_t AFSR;
  volatile const uint32_t PFR[2U];
  volatile const uint32_t DFR;
  volatile const uint32_t ADR;
  volatile const uint32_t MMFR[4U];
  volatile const uint32_t ISAR[5U];
        uint32_t RESERVED0[5U];
  volatile uint32_t CPACR;
} SCB_Type;
# 704 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile const uint32_t ICTR;
  volatile uint32_t ACTLR;
} SCnSCB_Type;
# 744 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t LOAD;
  volatile uint32_t VAL;
  volatile const uint32_t CALIB;
} SysTick_Type;
# 796 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile union
  {
    volatile uint8_t u8;
    volatile uint16_t u16;
    volatile uint32_t u32;
  } PORT [32U];
        uint32_t RESERVED0[864U];
  volatile uint32_t TER;
        uint32_t RESERVED1[15U];
  volatile uint32_t TPR;
        uint32_t RESERVED2[15U];
  volatile uint32_t TCR;
        uint32_t RESERVED3[29U];
  volatile uint32_t IWR;
  volatile const uint32_t IRR;
  volatile uint32_t IMCR;
        uint32_t RESERVED4[43U];
  volatile uint32_t LAR;
  volatile const uint32_t LSR;
        uint32_t RESERVED5[6U];
  volatile const uint32_t PID4;
  volatile const uint32_t PID5;
  volatile const uint32_t PID6;
  volatile const uint32_t PID7;
  volatile const uint32_t PID0;
  volatile const uint32_t PID1;
  volatile const uint32_t PID2;
  volatile const uint32_t PID3;
  volatile const uint32_t CID0;
  volatile const uint32_t CID1;
  volatile const uint32_t CID2;
  volatile const uint32_t CID3;
} ITM_Type;
# 899 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t CTRL;
  volatile uint32_t CYCCNT;
  volatile uint32_t CPICNT;
  volatile uint32_t EXCCNT;
  volatile uint32_t SLEEPCNT;
  volatile uint32_t LSUCNT;
  volatile uint32_t FOLDCNT;
  volatile const uint32_t PCSR;
  volatile uint32_t COMP0;
  volatile uint32_t MASK0;
  volatile uint32_t FUNCTION0;
        uint32_t RESERVED0[1U];
  volatile uint32_t COMP1;
  volatile uint32_t MASK1;
  volatile uint32_t FUNCTION1;
        uint32_t RESERVED1[1U];
  volatile uint32_t COMP2;
  volatile uint32_t MASK2;
  volatile uint32_t FUNCTION2;
        uint32_t RESERVED2[1U];
  volatile uint32_t COMP3;
  volatile uint32_t MASK3;
  volatile uint32_t FUNCTION3;
} DWT_Type;
# 1046 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t SSPSR;
  volatile uint32_t CSPSR;
        uint32_t RESERVED0[2U];
  volatile uint32_t ACPR;
        uint32_t RESERVED1[55U];
  volatile uint32_t SPPR;
        uint32_t RESERVED2[131U];
  volatile const uint32_t FFSR;
  volatile uint32_t FFCR;
  volatile const uint32_t FSCR;
        uint32_t RESERVED3[759U];
  volatile const uint32_t TRIGGER;
  volatile const uint32_t FIFO0;
  volatile const uint32_t ITATBCTR2;
        uint32_t RESERVED4[1U];
  volatile const uint32_t ITATBCTR0;
  volatile const uint32_t FIFO1;
  volatile uint32_t ITCTRL;
        uint32_t RESERVED5[39U];
  volatile uint32_t CLAIMSET;
  volatile uint32_t CLAIMCLR;
        uint32_t RESERVED7[8U];
  volatile const uint32_t DEVID;
  volatile const uint32_t DEVTYPE;
} TPI_Type;
# 1202 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile const uint32_t TYPE;
  volatile uint32_t CTRL;
  volatile uint32_t RNR;
  volatile uint32_t RBAR;
  volatile uint32_t RASR;
  volatile uint32_t RBAR_A1;
  volatile uint32_t RASR_A1;
  volatile uint32_t RBAR_A2;
  volatile uint32_t RASR_A2;
  volatile uint32_t RBAR_A3;
  volatile uint32_t RASR_A3;
} MPU_Type;
# 1297 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
        uint32_t RESERVED0[1U];
  volatile uint32_t FPCCR;
  volatile uint32_t FPCAR;
  volatile uint32_t FPDSCR;
  volatile const uint32_t MVFR0;
  volatile const uint32_t MVFR1;
} FPU_Type;
# 1404 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
typedef struct
{
  volatile uint32_t DHCSR;
  volatile uint32_t DCRSR;
  volatile uint32_t DCRDR;
  volatile uint32_t DEMCR;
} CoreDebug_Type;
# 1596 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_SetPriorityGrouping(uint32_t PriorityGroup)
{
  uint32_t reg_value;
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);

  reg_value = ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR;
  reg_value &= ~((uint32_t)((0xFFFFUL << 16U) | (7UL << 8U)));
  reg_value = (reg_value |
                ((uint32_t)0x5FAUL << 16U) |
                (PriorityGroupTmp << 8U) );
  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = reg_value;
}







static inline uint32_t NVIC_GetPriorityGrouping(void)
{
  return ((uint32_t)((((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) >> 8U));
}







static inline void NVIC_EnableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}







static inline void NVIC_DisableIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}
# 1650 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_GetPendingIRQ(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}







static inline void NVIC_SetPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}







static inline void NVIC_ClearPendingIRQ(IRQn_Type IRQn)
{
  ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICPR[(((uint32_t)(int32_t)IRQn) >> 5UL)] = (uint32_t)(1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL));
}
# 1685 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_GetActive(IRQn_Type IRQn)
{
  return((uint32_t)(((((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IABR[(((uint32_t)(int32_t)IRQn) >> 5UL)] & (1UL << (((uint32_t)(int32_t)IRQn) & 0x1FUL))) != 0UL) ? 1UL : 0UL));
}
# 1698 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if ((int32_t)(IRQn) < 0)
  {
    ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)(int32_t)IRQn) & 0xFUL)-4UL] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
  else
  {
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)(int32_t)IRQn)] = (uint8_t)((priority << (8U - 3)) & (uint32_t)0xFFUL);
  }
}
# 1720 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_GetPriority(IRQn_Type IRQn)
{

  if ((int32_t)(IRQn) < 0)
  {
    return(((uint32_t)((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->SHP[(((uint32_t)(int32_t)IRQn) & 0xFUL)-4UL] >> (8U - 3)));
  }
  else
  {
    return(((uint32_t)((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->IP[((uint32_t)(int32_t)IRQn)] >> (8U - 3)));
  }
}
# 1745 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t NVIC_EncodePriority (uint32_t PriorityGroup, uint32_t PreemptPriority, uint32_t SubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  return (
           ((PreemptPriority & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL)) << SubPriorityBits) |
           ((SubPriority & (uint32_t)((1UL << (SubPriorityBits )) - 1UL)))
         );
}
# 1772 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline void NVIC_DecodePriority (uint32_t Priority, uint32_t PriorityGroup, uint32_t* const pPreemptPriority, uint32_t* const pSubPriority)
{
  uint32_t PriorityGroupTmp = (PriorityGroup & (uint32_t)0x07UL);
  uint32_t PreemptPriorityBits;
  uint32_t SubPriorityBits;

  PreemptPriorityBits = ((7UL - PriorityGroupTmp) > (uint32_t)(3)) ? (uint32_t)(3) : (uint32_t)(7UL - PriorityGroupTmp);
  SubPriorityBits = ((PriorityGroupTmp + (uint32_t)(3)) < (uint32_t)7UL) ? (uint32_t)0UL : (uint32_t)((PriorityGroupTmp - 7UL) + (uint32_t)(3));

  *pPreemptPriority = (Priority >> SubPriorityBits) & (uint32_t)((1UL << (PreemptPriorityBits)) - 1UL);
  *pSubPriority = (Priority ) & (uint32_t)((1UL << (SubPriorityBits )) - 1UL);
}






static inline void NVIC_SystemReset(void)
{
  __DSB();

  ((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR = (uint32_t)((0x5FAUL << 16U) |
                           (((SCB_Type *) ((0xE000E000UL) + 0x0D00UL) )->AIRCR & (7UL << 8U)) |
                            (1UL << 2U) );
  __DSB();

  for (;;)
  {
    __NOP();
  }
}
# 1830 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t SysTick_Config(uint32_t ticks)
{
  if ((ticks - 1UL) > (0xFFFFFFUL ))
  {
    return (1UL);
  }

  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->LOAD = (uint32_t)(ticks - 1UL);
  NVIC_SetPriority (SysTick_IRQn, (1UL << 3) - 1UL);
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->VAL = 0UL;
  ((SysTick_Type *) ((0xE000E000UL) + 0x0010UL) )->CTRL = (1UL << 2U) |
                   (1UL << 1U) |
                   (1UL );
  return (0UL);
}
# 1860 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
extern volatile int32_t ITM_RxBuffer;
# 1872 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline uint32_t ITM_SendChar (uint32_t ch)
{
  if (((((ITM_Type *) (0xE0000000UL) )->TCR & (1UL )) != 0UL) &&
      ((((ITM_Type *) (0xE0000000UL) )->TER & 1UL ) != 0UL) )
  {
    while (((ITM_Type *) (0xE0000000UL) )->PORT[0U].u32 == 0UL)
    {
      __NOP();
    }
    ((ITM_Type *) (0xE0000000UL) )->PORT[0U].u8 = (uint8_t)ch;
  }
  return (ch);
}
# 1893 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_ReceiveChar (void)
{
  int32_t ch = -1;

  if (ITM_RxBuffer != 0x5AA55AA5U)
  {
    ch = ITM_RxBuffer;
    ITM_RxBuffer = 0x5AA55AA5U;
  }

  return (ch);
}
# 1913 "../../../../../../components/toolchain/cmsis/include/core_cm4.h"
static inline int32_t ITM_CheckChar (void)
{

  if (ITM_RxBuffer == 0x5AA55AA5U)
  {
    return (0);
  }
  else
  {
    return (1);
  }
}
# 149 "../../../../../../modules/nrfx/mdk/nrf52.h" 2
# 1 "../../../../../../modules/nrfx/mdk/system_nrf52.h" 1
# 33 "../../../../../../modules/nrfx/mdk/system_nrf52.h"
extern uint32_t SystemCoreClock;
# 44 "../../../../../../modules/nrfx/mdk/system_nrf52.h"
extern void SystemInit (void);
# 55 "../../../../../../modules/nrfx/mdk/system_nrf52.h"
extern void SystemCoreClockUpdate (void);
# 150 "../../../../../../modules/nrfx/mdk/nrf52.h" 2
# 200 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t PART;
  volatile const uint32_t VARIANT;

  volatile const uint32_t PACKAGE;
  volatile const uint32_t RAM;
  volatile const uint32_t FLASH;
  volatile uint32_t UNUSED0[3];
} FICR_INFO_Type;





typedef struct {
  volatile const uint32_t A0;
  volatile const uint32_t A1;
  volatile const uint32_t A2;
  volatile const uint32_t A3;
  volatile const uint32_t A4;
  volatile const uint32_t A5;
  volatile const uint32_t B0;
  volatile const uint32_t B1;
  volatile const uint32_t B2;
  volatile const uint32_t B3;
  volatile const uint32_t B4;
  volatile const uint32_t B5;
  volatile const uint32_t T0;
  volatile const uint32_t T1;
  volatile const uint32_t T2;
  volatile const uint32_t T3;
  volatile const uint32_t T4;
} FICR_TEMP_Type;





typedef struct {
  volatile const uint32_t TAGHEADER0;


  volatile const uint32_t TAGHEADER1;


  volatile const uint32_t TAGHEADER2;


  volatile const uint32_t TAGHEADER3;


} FICR_NFC_Type;





typedef struct {
  volatile uint32_t POWER;
  volatile uint32_t POWERSET;

  volatile uint32_t POWERCLR;

  volatile const uint32_t RESERVED;
} POWER_RAM_Type;





typedef struct {
  volatile uint32_t RTS;
  volatile uint32_t TXD;
  volatile uint32_t CTS;
  volatile uint32_t RXD;
} UARTE_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} UARTE_TXD_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
} SPIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} SPIM_TXD_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MISO;
  volatile uint32_t MOSI;
  volatile uint32_t CSN;
} SPIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} SPIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} SPIS_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
  volatile uint32_t LIST;
} TWIM_TXD_Type;





typedef struct {
  volatile uint32_t SCL;
  volatile uint32_t SDA;
} TWIS_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} TWIS_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;
} TWIS_TXD_Type;





typedef struct {
  volatile uint32_t SCK;
  volatile uint32_t MOSI;
  volatile uint32_t MISO;
} SPI_PSEL_Type;





typedef struct {
  volatile uint32_t RX;
} NFCT_FRAMESTATUS_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile uint32_t AMOUNT;
} NFCT_TXD_Type;





typedef struct {
  volatile uint32_t FRAMECONFIG;
  volatile const uint32_t AMOUNT;
} NFCT_RXD_Type;





typedef struct {
  volatile uint32_t LIMITH;

  volatile uint32_t LIMITL;

} SAADC_EVENTS_CH_Type;





typedef struct {
  volatile uint32_t PSELP;

  volatile uint32_t PSELN;

  volatile uint32_t CONFIG;

  volatile uint32_t LIMIT;

} SAADC_CH_Type;





typedef struct {
  volatile uint32_t PTR;
  volatile uint32_t MAXCNT;
  volatile const uint32_t AMOUNT;

} SAADC_RESULT_Type;





typedef struct {
  volatile uint32_t LED;
  volatile uint32_t A;
  volatile uint32_t B;
} QDEC_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t CNT;

  volatile uint32_t REFRESH;


  volatile uint32_t ENDDELAY;

  volatile const uint32_t RESERVED[4];
} PWM_SEQ_Type;





typedef struct {
  volatile uint32_t OUT[4];

} PWM_PSEL_Type;





typedef struct {
  volatile uint32_t CLK;
  volatile uint32_t DIN;
} PDM_PSEL_Type;





typedef struct {
  volatile uint32_t PTR;

  volatile uint32_t MAXCNT;

} PDM_SAMPLE_Type;





typedef struct {
  volatile uint32_t EN;

  volatile uint32_t DIS;

} PPI_TASKS_CHG_Type;





typedef struct {
  volatile uint32_t EEP;
  volatile uint32_t TEP;
} PPI_CH_Type;





typedef struct {
  volatile uint32_t TEP;
} PPI_FORK_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_REGION_Type;





typedef struct {
  volatile uint32_t WA;

  volatile uint32_t RA;

} MWU_EVENTS_PREGION_Type;





typedef struct {
  volatile uint32_t SUBSTATWA;



  volatile uint32_t SUBSTATRA;



} MWU_PERREGION_Type;





typedef struct {
  volatile uint32_t START;

  volatile uint32_t END;

  volatile const uint32_t RESERVED[2];
} MWU_REGION_Type;





typedef struct {
  volatile const uint32_t START;
  volatile const uint32_t END;
  volatile uint32_t SUBS;

  volatile const uint32_t RESERVED;
} MWU_PREGION_Type;





typedef struct {
  volatile uint32_t MODE;
  volatile uint32_t RXEN;
  volatile uint32_t TXEN;
  volatile uint32_t MCKEN;
  volatile uint32_t MCKFREQ;
  volatile uint32_t RATIO;
  volatile uint32_t SWIDTH;
  volatile uint32_t ALIGN;
  volatile uint32_t FORMAT;
  volatile uint32_t CHANNELS;
} I2S_CONFIG_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_RXD_Type;





typedef struct {
  volatile uint32_t PTR;
} I2S_TXD_Type;





typedef struct {
  volatile uint32_t MAXCNT;
} I2S_RXTXD_Type;





typedef struct {
  volatile uint32_t MCK;
  volatile uint32_t SCK;
  volatile uint32_t LRCK;
  volatile uint32_t SDIN;
  volatile uint32_t SDOUT;
} I2S_PSEL_Type;
# 715 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile const uint32_t CODEPAGESIZE;
  volatile const uint32_t CODESIZE;
  volatile const uint32_t RESERVED1[18];
  volatile const uint32_t DEVICEID[2];
  volatile const uint32_t RESERVED2[6];
  volatile const uint32_t ER[4];

  volatile const uint32_t IR[4];

  volatile const uint32_t DEVICEADDRTYPE;
  volatile const uint32_t DEVICEADDR[2];
  volatile const uint32_t RESERVED3[21];
  volatile FICR_INFO_Type INFO;
  volatile const uint32_t RESERVED4[185];
  volatile FICR_TEMP_Type TEMP;

  volatile const uint32_t RESERVED5[2];
  volatile FICR_NFC_Type NFC;
} NRF_FICR_Type;
# 748 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t UNUSED0;
  volatile uint32_t UNUSED1;
  volatile uint32_t UNUSED2;
  volatile const uint32_t RESERVED;
  volatile uint32_t UNUSED3;
  volatile uint32_t NRFFW[15];

  volatile uint32_t NRFHW[12];

  volatile uint32_t CUSTOMER[32];
  volatile const uint32_t RESERVED1[64];
  volatile uint32_t PSELRESET[2];

  volatile uint32_t APPROTECT;
  volatile uint32_t NFCPINS;

} NRF_UICR_Type;
# 778 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[384];
  volatile uint32_t CONFIG0;
  volatile uint32_t CONFIG1;
  volatile uint32_t DISABLEINDEBUG;

  volatile uint32_t UNUSED0;
  volatile uint32_t CONFIG2;
  volatile uint32_t CONFIG3;
} NRF_BPROT_Type;
# 800 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[30];
  volatile uint32_t TASKS_CONSTLAT;
  volatile uint32_t TASKS_LOWPWR;
  volatile const uint32_t RESERVED1[34];
  volatile uint32_t EVENTS_POFWARN;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_SLEEPENTER;
  volatile uint32_t EVENTS_SLEEPEXIT;
  volatile const uint32_t RESERVED3[122];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[61];
  volatile uint32_t RESETREAS;
  volatile const uint32_t RESERVED5[9];
  volatile const uint32_t RAMSTATUS;
  volatile const uint32_t RESERVED6[53];
  volatile uint32_t SYSTEMOFF;
  volatile const uint32_t RESERVED7[3];
  volatile uint32_t POFCON;
  volatile const uint32_t RESERVED8[2];
  volatile uint32_t GPREGRET;
  volatile uint32_t GPREGRET2;
  volatile uint32_t RAMON;

  volatile const uint32_t RESERVED9[11];
  volatile uint32_t RAMONB;

  volatile const uint32_t RESERVED10[8];
  volatile uint32_t DCDCEN;
  volatile const uint32_t RESERVED11[225];
  volatile POWER_RAM_Type RAM[8];
} NRF_POWER_Type;
# 845 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_HFCLKSTART;
  volatile uint32_t TASKS_HFCLKSTOP;
  volatile uint32_t TASKS_LFCLKSTART;
  volatile uint32_t TASKS_LFCLKSTOP;
  volatile uint32_t TASKS_CAL;
  volatile uint32_t TASKS_CTSTART;
  volatile uint32_t TASKS_CTSTOP;
  volatile const uint32_t RESERVED[57];
  volatile uint32_t EVENTS_HFCLKSTARTED;
  volatile uint32_t EVENTS_LFCLKSTARTED;
  volatile const uint32_t RESERVED1;
  volatile uint32_t EVENTS_DONE;
  volatile uint32_t EVENTS_CTTO;
  volatile const uint32_t RESERVED2[124];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[63];
  volatile const uint32_t HFCLKRUN;

  volatile const uint32_t HFCLKSTAT;
  volatile const uint32_t RESERVED4;
  volatile const uint32_t LFCLKRUN;

  volatile const uint32_t LFCLKSTAT;
  volatile const uint32_t LFCLKSRCCOPY;

  volatile const uint32_t RESERVED5[62];
  volatile uint32_t LFCLKSRC;
  volatile const uint32_t RESERVED6[7];
  volatile uint32_t CTIV;
  volatile const uint32_t RESERVED7[8];
  volatile uint32_t TRACECONFIG;
} NRF_CLOCK_Type;
# 891 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_TXEN;
  volatile uint32_t TASKS_RXEN;
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_RSSISTART;

  volatile uint32_t TASKS_RSSISTOP;
  volatile uint32_t TASKS_BCSTART;
  volatile uint32_t TASKS_BCSTOP;
  volatile const uint32_t RESERVED[55];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_ADDRESS;
  volatile uint32_t EVENTS_PAYLOAD;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DISABLED;
  volatile uint32_t EVENTS_DEVMATCH;

  volatile uint32_t EVENTS_DEVMISS;

  volatile uint32_t EVENTS_RSSIEND;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_BCMATCH;
  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_CRCOK;
  volatile uint32_t EVENTS_CRCERROR;
  volatile const uint32_t RESERVED3[50];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED4[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[61];
  volatile const uint32_t CRCSTATUS;
  volatile const uint32_t RESERVED6;
  volatile const uint32_t RXMATCH;
  volatile const uint32_t RXCRC;
  volatile const uint32_t DAI;
  volatile const uint32_t RESERVED7[60];
  volatile uint32_t PACKETPTR;
  volatile uint32_t FREQUENCY;
  volatile uint32_t TXPOWER;
  volatile uint32_t MODE;
  volatile uint32_t PCNF0;
  volatile uint32_t PCNF1;
  volatile uint32_t BASE0;
  volatile uint32_t BASE1;
  volatile uint32_t PREFIX0;
  volatile uint32_t PREFIX1;
  volatile uint32_t TXADDRESS;
  volatile uint32_t RXADDRESSES;
  volatile uint32_t CRCCNF;
  volatile uint32_t CRCPOLY;
  volatile uint32_t CRCINIT;
  volatile uint32_t UNUSED0;
  volatile uint32_t TIFS;
  volatile const uint32_t RSSISAMPLE;
  volatile const uint32_t RESERVED8;
  volatile const uint32_t STATE;
  volatile uint32_t DATAWHITEIV;
  volatile const uint32_t RESERVED9[2];
  volatile uint32_t BCC;
  volatile const uint32_t RESERVED10[39];
  volatile uint32_t DAB[8];

  volatile uint32_t DAP[8];

  volatile uint32_t DACNF;
  volatile const uint32_t RESERVED11[3];
  volatile uint32_t MODECNF0;
  volatile const uint32_t RESERVED12[618];
  volatile uint32_t POWER;
} NRF_RADIO_Type;
# 976 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[7];
  volatile uint32_t TASKS_FLUSHRX;
  volatile const uint32_t RESERVED1[52];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;

  volatile const uint32_t RESERVED2;
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_TXDRDY;
  volatile uint32_t EVENTS_ENDTX;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6;
  volatile uint32_t EVENTS_TXSTOPPED;
  volatile const uint32_t RESERVED7[41];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[93];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED10[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile UARTE_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[3];
  volatile uint32_t BAUDRATE;

  volatile const uint32_t RESERVED13[3];
  volatile UARTE_RXD_Type RXD;
  volatile const uint32_t RESERVED14;
  volatile UARTE_TXD_Type TXD;
  volatile const uint32_t RESERVED15[7];
  volatile uint32_t CONFIG;
} NRF_UARTE_Type;
# 1035 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile uint32_t TASKS_STOPRX;
  volatile uint32_t TASKS_STARTTX;
  volatile uint32_t TASKS_STOPTX;
  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_SUSPEND;
  volatile const uint32_t RESERVED1[56];
  volatile uint32_t EVENTS_CTS;
  volatile uint32_t EVENTS_NCTS;
  volatile uint32_t EVENTS_RXDRDY;
  volatile const uint32_t RESERVED2[4];
  volatile uint32_t EVENTS_TXDRDY;
  volatile const uint32_t RESERVED3;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_RXTO;
  volatile const uint32_t RESERVED5[46];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED6[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED7[93];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED8[31];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile uint32_t PSELRTS;
  volatile uint32_t PSELTXD;
  volatile uint32_t PSELCTS;
  volatile uint32_t PSELRXD;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED10;
  volatile uint32_t BAUDRATE;
  volatile const uint32_t RESERVED11[17];
  volatile uint32_t CONFIG;
} NRF_UART_Type;
# 1085 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ENDTX;
  volatile const uint32_t RESERVED6[10];
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED7[44];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[125];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED10;
  volatile SPIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED11[4];
  volatile uint32_t FREQUENCY;

  volatile const uint32_t RESERVED12[3];
  volatile SPIM_RXD_Type RXD;
  volatile SPIM_TXD_Type TXD;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED13[26];
  volatile uint32_t ORC;

} NRF_SPIM_Type;
# 1134 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[9];
  volatile uint32_t TASKS_ACQUIRE;
  volatile uint32_t TASKS_RELEASE;

  volatile const uint32_t RESERVED1[54];
  volatile uint32_t EVENTS_END;
  volatile const uint32_t RESERVED2[2];
  volatile uint32_t EVENTS_ENDRX;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t EVENTS_ACQUIRED;
  volatile const uint32_t RESERVED4[53];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED6[61];
  volatile const uint32_t SEMSTAT;
  volatile const uint32_t RESERVED7[15];
  volatile uint32_t STATUS;
  volatile const uint32_t RESERVED8[47];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED9;
  volatile SPIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED10[7];
  volatile SPIS_RXD_Type RXD;
  volatile const uint32_t RESERVED11;
  volatile SPIS_TXD_Type TXD;
  volatile const uint32_t RESERVED12;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED13;
  volatile uint32_t DEF;

  volatile const uint32_t RESERVED14[24];
  volatile uint32_t ORC;
} NRF_SPIS_Type;
# 1182 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;

  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t EVENTS_SUSPENDED;


  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[2];
  volatile uint32_t EVENTS_LASTRX;
  volatile uint32_t EVENTS_LASTTX;

  volatile const uint32_t RESERVED7[39];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED10[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[5];
  volatile uint32_t FREQUENCY;
  volatile const uint32_t RESERVED13[3];
  volatile TWIM_RXD_Type RXD;
  volatile TWIM_TXD_Type TXD;
  volatile const uint32_t RESERVED14[13];
  volatile uint32_t ADDRESS;
} NRF_TWIM_Type;
# 1238 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[5];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED2[3];
  volatile uint32_t TASKS_PREPARERX;
  volatile uint32_t TASKS_PREPARETX;
  volatile const uint32_t RESERVED3[51];
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED4[7];
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED5[9];
  volatile uint32_t EVENTS_RXSTARTED;
  volatile uint32_t EVENTS_TXSTARTED;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_WRITE;
  volatile uint32_t EVENTS_READ;
  volatile const uint32_t RESERVED7[37];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED8[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED9[113];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t MATCH;

  volatile const uint32_t RESERVED10[10];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED11;
  volatile TWIS_PSEL_Type PSEL;
  volatile const uint32_t RESERVED12[9];
  volatile TWIS_RXD_Type RXD;
  volatile const uint32_t RESERVED13;
  volatile TWIS_TXD_Type TXD;
  volatile const uint32_t RESERVED14[14];
  volatile uint32_t ADDRESS[2];

  volatile const uint32_t RESERVED15;
  volatile uint32_t CONFIG;

  volatile const uint32_t RESERVED16[10];
  volatile uint32_t ORC;

} NRF_TWIS_Type;
# 1297 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[66];
  volatile uint32_t EVENTS_READY;
  volatile const uint32_t RESERVED1[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED3;
  volatile SPI_PSEL_Type PSEL;
  volatile const uint32_t RESERVED4;
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED5;
  volatile uint32_t FREQUENCY;
  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CONFIG;
} NRF_SPI_Type;
# 1327 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_STARTRX;
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STARTTX;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED2;
  volatile uint32_t TASKS_SUSPEND;
  volatile uint32_t TASKS_RESUME;
  volatile const uint32_t RESERVED3[56];
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_RXDREADY;
  volatile const uint32_t RESERVED4[4];
  volatile uint32_t EVENTS_TXDSENT;
  volatile const uint32_t RESERVED5;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED6[4];
  volatile uint32_t EVENTS_BB;

  volatile const uint32_t RESERVED7[3];
  volatile uint32_t EVENTS_SUSPENDED;
  volatile const uint32_t RESERVED8[45];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED9[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED10[110];
  volatile uint32_t ERRORSRC;
  volatile const uint32_t RESERVED11[14];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED12;
  volatile uint32_t PSELSCL;
  volatile uint32_t PSELSDA;
  volatile const uint32_t RESERVED13[2];
  volatile const uint32_t RXD;
  volatile uint32_t TXD;
  volatile const uint32_t RESERVED14;
  volatile uint32_t FREQUENCY;
  volatile const uint32_t RESERVED15[24];
  volatile uint32_t ADDRESS;
} NRF_TWI_Type;
# 1380 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_ACTIVATE;

  volatile uint32_t TASKS_DISABLE;
  volatile uint32_t TASKS_SENSE;

  volatile uint32_t TASKS_STARTTX;

  volatile const uint32_t RESERVED[3];
  volatile uint32_t TASKS_ENABLERXDATA;
  volatile const uint32_t RESERVED1;
  volatile uint32_t TASKS_GOIDLE;
  volatile uint32_t TASKS_GOSLEEP;
  volatile const uint32_t RESERVED2[53];
  volatile uint32_t EVENTS_READY;

  volatile uint32_t EVENTS_FIELDDETECTED;
  volatile uint32_t EVENTS_FIELDLOST;
  volatile uint32_t EVENTS_TXFRAMESTART;

  volatile uint32_t EVENTS_TXFRAMEEND;

  volatile uint32_t EVENTS_RXFRAMESTART;

  volatile uint32_t EVENTS_RXFRAMEEND;


  volatile uint32_t EVENTS_ERROR;

  volatile const uint32_t RESERVED3[2];
  volatile uint32_t EVENTS_RXERROR;


  volatile uint32_t EVENTS_ENDRX;

  volatile uint32_t EVENTS_ENDTX;

  volatile const uint32_t RESERVED4;
  volatile uint32_t EVENTS_AUTOCOLRESSTARTED;
  volatile const uint32_t RESERVED5[3];
  volatile uint32_t EVENTS_COLLISION;
  volatile uint32_t EVENTS_SELECTED;
  volatile uint32_t EVENTS_STARTED;
  volatile const uint32_t RESERVED6[43];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED7[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED8[62];
  volatile uint32_t ERRORSTATUS;
  volatile const uint32_t RESERVED9;
  volatile NFCT_FRAMESTATUS_Type FRAMESTATUS;
  volatile const uint32_t RESERVED10[8];
  volatile const uint32_t CURRENTLOADCTRL;
  volatile const uint32_t RESERVED11[2];
  volatile const uint32_t FIELDPRESENT;
  volatile const uint32_t RESERVED12[49];
  volatile uint32_t FRAMEDELAYMIN;
  volatile uint32_t FRAMEDELAYMAX;
  volatile uint32_t FRAMEDELAYMODE;
  volatile uint32_t PACKETPTR;

  volatile uint32_t MAXLEN;

  volatile NFCT_TXD_Type TXD;
  volatile NFCT_RXD_Type RXD;
  volatile const uint32_t RESERVED13[26];
  volatile uint32_t NFCID1_LAST;
  volatile uint32_t NFCID1_2ND_LAST;
  volatile uint32_t NFCID1_3RD_LAST;
  volatile const uint32_t RESERVED14;
  volatile uint32_t SENSRES;
  volatile uint32_t SELRES;
} NRF_NFCT_Type;
# 1467 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_OUT[8];


  volatile const uint32_t RESERVED[4];
  volatile uint32_t TASKS_SET[8];


  volatile const uint32_t RESERVED1[4];
  volatile uint32_t TASKS_CLR[8];


  volatile const uint32_t RESERVED2[32];
  volatile uint32_t EVENTS_IN[8];

  volatile const uint32_t RESERVED3[23];
  volatile uint32_t EVENTS_PORT;

  volatile const uint32_t RESERVED4[97];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED5[129];
  volatile uint32_t CONFIG[8];


} NRF_GPIOTE_Type;
# 1505 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_SAMPLE;

  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CALIBRATEOFFSET;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_DONE;



  volatile uint32_t EVENTS_RESULTDONE;
  volatile uint32_t EVENTS_CALIBRATEDONE;
  volatile uint32_t EVENTS_STOPPED;
  volatile SAADC_EVENTS_CH_Type EVENTS_CH[8];
  volatile const uint32_t RESERVED1[106];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t ENABLE;
  volatile const uint32_t RESERVED4[3];
  volatile SAADC_CH_Type CH[8];
  volatile const uint32_t RESERVED5[24];
  volatile uint32_t RESOLUTION;
  volatile uint32_t OVERSAMPLE;




  volatile uint32_t SAMPLERATE;
  volatile const uint32_t RESERVED6[12];
  volatile SAADC_RESULT_Type RESULT;
} NRF_SAADC_Type;
# 1556 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_COUNT;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_SHUTDOWN;
  volatile const uint32_t RESERVED[11];
  volatile uint32_t TASKS_CAPTURE[6];

  volatile const uint32_t RESERVED1[58];
  volatile uint32_t EVENTS_COMPARE[6];

  volatile const uint32_t RESERVED2[42];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[126];
  volatile uint32_t MODE;
  volatile uint32_t BITMODE;
  volatile const uint32_t RESERVED5;
  volatile uint32_t PRESCALER;
  volatile const uint32_t RESERVED6[11];
  volatile uint32_t CC[6];

} NRF_TIMER_Type;
# 1594 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_CLEAR;
  volatile uint32_t TASKS_TRIGOVRFLW;
  volatile const uint32_t RESERVED[60];
  volatile uint32_t EVENTS_TICK;
  volatile uint32_t EVENTS_OVRFLW;
  volatile const uint32_t RESERVED1[14];
  volatile uint32_t EVENTS_COMPARE[4];

  volatile const uint32_t RESERVED2[109];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[13];
  volatile uint32_t EVTEN;
  volatile uint32_t EVTENSET;
  volatile uint32_t EVTENCLR;
  volatile const uint32_t RESERVED4[110];
  volatile const uint32_t COUNTER;
  volatile uint32_t PRESCALER;

  volatile const uint32_t RESERVED5[13];
  volatile uint32_t CC[4];
} NRF_RTC_Type;
# 1631 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_DATARDY;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[127];
  volatile const int32_t TEMP;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t A0;
  volatile uint32_t A1;
  volatile uint32_t A2;
  volatile uint32_t A3;
  volatile uint32_t A4;
  volatile uint32_t A5;
  volatile const uint32_t RESERVED4[2];
  volatile uint32_t B0;
  volatile uint32_t B1;
  volatile uint32_t B2;
  volatile uint32_t B3;
  volatile uint32_t B4;
  volatile uint32_t B5;
  volatile const uint32_t RESERVED5[2];
  volatile uint32_t T0;
  volatile uint32_t T1;
  volatile uint32_t T2;
  volatile uint32_t T3;
  volatile uint32_t T4;
} NRF_TEMP_Type;
# 1674 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_VALRDY;

  volatile const uint32_t RESERVED1[63];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[126];
  volatile uint32_t CONFIG;
  volatile const uint32_t VALUE;
} NRF_RNG_Type;
# 1701 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_STARTECB;
  volatile uint32_t TASKS_STOPECB;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_ENDECB;
  volatile uint32_t EVENTS_ERRORECB;

  volatile const uint32_t RESERVED1[127];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t ECBDATAPTR;
} NRF_ECB_Type;
# 1726 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_KSGEN;

  volatile uint32_t TASKS_CRYPT;

  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_ENDKSGEN;
  volatile uint32_t EVENTS_ENDCRYPT;
  volatile uint32_t EVENTS_ERROR;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t MICSTATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t CNFPTR;

  volatile uint32_t INPTR;
  volatile uint32_t OUTPTR;
  volatile uint32_t SCRATCHPTR;
} NRF_CCM_Type;
# 1764 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED1[61];
  volatile uint32_t EVENTS_END;
  volatile uint32_t EVENTS_RESOLVED;
  volatile uint32_t EVENTS_NOTRESOLVED;
  volatile const uint32_t RESERVED2[126];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t STATUS;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t NIRK;
  volatile uint32_t IRKPTR;
  volatile const uint32_t RESERVED5;
  volatile uint32_t ADDRPTR;
  volatile uint32_t SCRATCHPTR;
} NRF_AAR_Type;
# 1798 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_TIMEOUT;
  volatile const uint32_t RESERVED1[128];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[61];
  volatile const uint32_t RUNSTATUS;
  volatile const uint32_t REQSTATUS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t CRV;
  volatile uint32_t RREN;
  volatile uint32_t CONFIG;
  volatile const uint32_t RESERVED4[60];
  volatile uint32_t RR[8];
} NRF_WDT_Type;
# 1827 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_READCLRACC;
  volatile uint32_t TASKS_RDCLRACC;
  volatile uint32_t TASKS_RDCLRDBL;
  volatile const uint32_t RESERVED[59];
  volatile uint32_t EVENTS_SAMPLERDY;

  volatile uint32_t EVENTS_REPORTRDY;
  volatile uint32_t EVENTS_ACCOF;
  volatile uint32_t EVENTS_DBLRDY;
  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[59];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile uint32_t LEDPOL;
  volatile uint32_t SAMPLEPER;
  volatile const int32_t SAMPLE;
  volatile uint32_t REPORTPER;

  volatile const int32_t ACC;
  volatile const int32_t ACCREAD;

  volatile QDEC_PSEL_Type PSEL;
  volatile uint32_t DBFEN;
  volatile const uint32_t RESERVED4[5];
  volatile uint32_t LEDPRE;
  volatile const uint32_t ACCDBL;

  volatile const uint32_t ACCDBLREAD;

} NRF_QDEC_Type;
# 1876 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[8];
  volatile uint32_t TH;
  volatile uint32_t MODE;
  volatile uint32_t HYST;
  volatile uint32_t ISOURCE;
} NRF_COMP_Type;
# 1916 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile uint32_t TASKS_SAMPLE;
  volatile const uint32_t RESERVED[61];
  volatile uint32_t EVENTS_READY;
  volatile uint32_t EVENTS_DOWN;
  volatile uint32_t EVENTS_UP;
  volatile uint32_t EVENTS_CROSS;
  volatile const uint32_t RESERVED1[60];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED2[64];
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[61];
  volatile const uint32_t RESULT;
  volatile const uint32_t RESERVED4[63];
  volatile uint32_t ENABLE;
  volatile uint32_t PSEL;
  volatile uint32_t REFSEL;
  volatile uint32_t EXTREFSEL;
  volatile const uint32_t RESERVED5[4];
  volatile uint32_t ANADETECT;
  volatile const uint32_t RESERVED6[5];
  volatile uint32_t HYST;
} NRF_LPCOMP_Type;
# 1954 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_SWI_Type;
# 1969 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_TRIGGER[16];

  volatile const uint32_t RESERVED[48];
  volatile uint32_t EVENTS_TRIGGERED[16];


  volatile const uint32_t RESERVED1[112];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
} NRF_EGU_Type;
# 1993 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED;
  volatile uint32_t TASKS_STOP;


  volatile uint32_t TASKS_SEQSTART[2];





  volatile uint32_t TASKS_NEXTSTEP;



  volatile const uint32_t RESERVED1[60];
  volatile uint32_t EVENTS_STOPPED;

  volatile uint32_t EVENTS_SEQSTARTED[2];

  volatile uint32_t EVENTS_SEQEND[2];


  volatile uint32_t EVENTS_PWMPERIODEND;
  volatile uint32_t EVENTS_LOOPSDONE;

  volatile const uint32_t RESERVED2[56];
  volatile uint32_t SHORTS;
  volatile const uint32_t RESERVED3[63];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED4[125];
  volatile uint32_t ENABLE;
  volatile uint32_t MODE;
  volatile uint32_t COUNTERTOP;

  volatile uint32_t PRESCALER;
  volatile uint32_t DECODER;
  volatile uint32_t LOOP;
  volatile const uint32_t RESERVED5[2];
  volatile PWM_SEQ_Type SEQ[2];
  volatile PWM_PSEL_Type PSEL;
} NRF_PWM_Type;
# 2049 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;
  volatile uint32_t TASKS_STOP;
  volatile const uint32_t RESERVED[62];
  volatile uint32_t EVENTS_STARTED;
  volatile uint32_t EVENTS_STOPPED;
  volatile uint32_t EVENTS_END;


  volatile const uint32_t RESERVED1[125];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED2[125];
  volatile uint32_t ENABLE;
  volatile uint32_t PDMCLKCTRL;
  volatile uint32_t MODE;

  volatile const uint32_t RESERVED3[3];
  volatile uint32_t GAINL;
  volatile uint32_t GAINR;
  volatile const uint32_t RESERVED4[8];
  volatile PDM_PSEL_Type PSEL;
  volatile const uint32_t RESERVED5[6];
  volatile PDM_SAMPLE_Type SAMPLE;
} NRF_PDM_Type;
# 2087 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[256];
  volatile const uint32_t READY;
  volatile const uint32_t RESERVED1[64];
  volatile uint32_t CONFIG;

  union {
    volatile uint32_t ERASEPAGE;
    volatile uint32_t ERASEPCR1;

  };
  volatile uint32_t ERASEALL;
  volatile uint32_t ERASEPCR0;

  volatile uint32_t ERASEUICR;

  volatile const uint32_t RESERVED2[10];
  volatile uint32_t ICACHECNF;
  volatile const uint32_t RESERVED3;
  volatile uint32_t IHIT;
  volatile uint32_t IMISS;
} NRF_NVMC_Type;
# 2121 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile PPI_TASKS_CHG_Type TASKS_CHG[6];
  volatile const uint32_t RESERVED[308];
  volatile uint32_t CHEN;
  volatile uint32_t CHENSET;
  volatile uint32_t CHENCLR;
  volatile const uint32_t RESERVED1;
  volatile PPI_CH_Type CH[20];
  volatile const uint32_t RESERVED2[148];
  volatile uint32_t CHG[6];
  volatile const uint32_t RESERVED3[62];
  volatile PPI_FORK_Type FORK[32];
} NRF_PPI_Type;
# 2146 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[64];
  volatile MWU_EVENTS_REGION_Type EVENTS_REGION[4];
  volatile const uint32_t RESERVED1[16];
  volatile MWU_EVENTS_PREGION_Type EVENTS_PREGION[2];
  volatile const uint32_t RESERVED2[100];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[5];
  volatile uint32_t NMIEN;
  volatile uint32_t NMIENSET;
  volatile uint32_t NMIENCLR;
  volatile const uint32_t RESERVED4[53];
  volatile MWU_PERREGION_Type PERREGION[2];
  volatile const uint32_t RESERVED5[64];
  volatile uint32_t REGIONEN;
  volatile uint32_t REGIONENSET;
  volatile uint32_t REGIONENCLR;
  volatile const uint32_t RESERVED6[57];
  volatile MWU_REGION_Type REGION[4];
  volatile const uint32_t RESERVED7[32];
  volatile MWU_PREGION_Type PREGION[2];
} NRF_MWU_Type;
# 2182 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile uint32_t TASKS_START;

  volatile uint32_t TASKS_STOP;


  volatile const uint32_t RESERVED[63];
  volatile uint32_t EVENTS_RXPTRUPD;




  volatile uint32_t EVENTS_STOPPED;
  volatile const uint32_t RESERVED1[2];
  volatile uint32_t EVENTS_TXPTRUPD;




  volatile const uint32_t RESERVED2[122];
  volatile uint32_t INTEN;
  volatile uint32_t INTENSET;
  volatile uint32_t INTENCLR;
  volatile const uint32_t RESERVED3[125];
  volatile uint32_t ENABLE;
  volatile I2S_CONFIG_Type CONFIG;
  volatile const uint32_t RESERVED4[3];
  volatile I2S_RXD_Type RXD;
  volatile const uint32_t RESERVED5;
  volatile I2S_TXD_Type TXD;
  volatile const uint32_t RESERVED6[3];
  volatile I2S_RXTXD_Type RXTXD;
  volatile const uint32_t RESERVED7[3];
  volatile I2S_PSEL_Type PSEL;
} NRF_I2S_Type;
# 2229 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t UNUSED;
} NRF_FPU_Type;
# 2244 "../../../../../../modules/nrfx/mdk/nrf52.h"
typedef struct {
  volatile const uint32_t RESERVED[321];
  volatile uint32_t OUT;
  volatile uint32_t OUTSET;
  volatile uint32_t OUTCLR;
  volatile const uint32_t IN;
  volatile uint32_t DIR;
  volatile uint32_t DIRSET;
  volatile uint32_t DIRCLR;
  volatile uint32_t LATCH;


  volatile uint32_t DETECTMODE;

  volatile const uint32_t RESERVED1[118];
  volatile uint32_t PIN_CNF[32];

} NRF_GPIO_Type;
# 86 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf52_bitfields.h" 1
# 87 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf51_to_nrf52.h" 1
# 88 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 1 "../../../../../../modules/nrfx/mdk/nrf52_name_change.h" 1
# 89 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 99 "../../../../../../modules/nrfx/mdk/nrf.h"
# 1 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 120 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h"
    static inline unsigned int gcc_current_sp(void)
    {
        register unsigned sp __asm("sp");
        return sp;
    }
# 100 "../../../../../../modules/nrfx/mdk/nrf.h" 2
# 60 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/libraries/util/app_error.h" 1
# 54 "../../../../../../components/libraries/util/app_error.h"
# 1 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 1 3 4
# 78 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4

# 78 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int putchar(int __c);
# 87 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int getchar(void);
# 99 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int puts(const char *__s);
# 116 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
char *gets(char *__s);
# 135 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int sprintf(char *__s, const char *__format, ...);
# 163 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int snprintf(char *__s, size_t __n, const char *__format, ...);
# 199 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int vsnprintf(char *__s, size_t __n, const char *__format, __va_list __arg);
# 445 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int printf(const char *__format, ...);
# 465 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int vprintf(const char *__format, __va_list __arg);
# 494 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int vsprintf(char *__s, const char *__format, __va_list __arg);
# 695 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int scanf(const char *__format, ...);
# 715 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int sscanf(const char *__s, const char *__format, ...);
# 741 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int vscanf(const char *__format, __va_list __arg);
# 765 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
int vsscanf(const char *__s, const char *__format, __va_list __arg);





typedef struct __printf_tag *__printf_tag_ptr;

int __putchar(int, __printf_tag_ptr);
# 791 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stdio.h" 3 4
typedef struct __RAL_FILE FILE;


typedef long fpos_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE *, fpos_t *);
char *fgets(char *, int, FILE *);
int fileno(FILE *);
FILE *fopen(const char *, const char *);
int fprintf(FILE *, const char *, ...);
int fputc(int, FILE *);
int fputs(const char *, FILE *);
size_t fread(void *, size_t, size_t, FILE *);
FILE *freopen(const char *, const char *, FILE *);
int fscanf(FILE *, const char *, ...);
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void *, size_t, size_t, FILE *);
int getc(FILE *);
void perror(const char *);
int putc(int, FILE *);
int remove(const char *);
int rename(const char *, const char *);
void rewind(FILE *);
void setbuf(FILE *, char *);
int setvbuf(FILE *, char *, int, size_t);
FILE *tmpfile(void);
char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE *, const char *, __va_list);
int vfscanf(FILE *, const char *, __va_list);
# 55 "../../../../../../components/libraries/util/app_error.h" 2


# 1 "../../../../../../components/libraries/util/sdk_errors.h" 1
# 73 "../../../../../../components/libraries/util/sdk_errors.h"
# 1 "../../../../../../components/softdevice/s132/headers/nrf_error.h" 1
# 74 "../../../../../../components/libraries/util/sdk_errors.h" 2
# 158 "../../../../../../components/libraries/util/sdk_errors.h"

# 158 "../../../../../../components/libraries/util/sdk_errors.h"
typedef uint32_t ret_code_t;
# 58 "../../../../../../components/libraries/util/app_error.h" 2
# 1 "../../../../../../components/libraries/util/nordic_common.h" 1
# 59 "../../../../../../components/libraries/util/app_error.h" 2
# 1 "../../../../../../components/libraries/util/app_error_weak.h" 1
# 77 "../../../../../../components/libraries/util/app_error_weak.h"
void app_error_fault_handler(uint32_t id, uint32_t pc, uint32_t info);
# 60 "../../../../../../components/libraries/util/app_error.h" 2
# 80 "../../../../../../components/libraries/util/app_error.h"
typedef struct
{
    uint32_t line_num;
    uint8_t const * p_file_name;
    uint32_t err_code;
} error_info_t;



typedef struct
{
    uint16_t line_num;
    uint8_t const * p_file_name;
} assert_info_t;
# 111 "../../../../../../components/libraries/util/app_error.h"
void app_error_handler(uint32_t error_code, uint32_t line_num, const uint8_t * p_file_name);





void app_error_handler_bare(ret_code_t error_code);
# 127 "../../../../../../components/libraries/util/app_error.h"
void app_error_save_and_stop(uint32_t id, uint32_t pc, uint32_t info);
# 137 "../../../../../../components/libraries/util/app_error.h"
void app_error_log_handle(uint32_t id, uint32_t pc, uint32_t info);
# 61 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble.h" 1
# 53 "../../../../../../components/softdevice/s132/headers/ble.h"
# 1 "../../../../../../components/softdevice/s132/headers/nrf_svc.h" 1
# 54 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/nrf_error.h" 1
# 55 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_err.h" 1
# 56 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_gap.h" 1
# 51 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
# 1 "../../../../../../components/softdevice/s132/headers/ble_hci.h" 1
# 52 "../../../../../../components/softdevice/s132/headers/ble_gap.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_ranges.h" 1
# 53 "../../../../../../components/softdevice/s132/headers/ble_gap.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_types.h" 1
# 186 "../../../../../../components/softdevice/s132/headers/ble_types.h"
typedef struct
{
  uint8_t uuid128[16];
} ble_uuid128_t;


typedef struct
{
  uint16_t uuid;
  uint8_t type;
} ble_uuid_t;


typedef struct
{
  uint8_t *p_data;
  uint16_t len;
} ble_data_t;
# 54 "../../../../../../components/softdevice/s132/headers/ble_gap.h" 2
# 65 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
enum BLE_GAP_SVCS
{
  SD_BLE_GAP_ADDR_SET = 0x6C,
  SD_BLE_GAP_ADDR_GET = 0x6C + 1,
  SD_BLE_GAP_WHITELIST_SET = 0x6C + 2,
  SD_BLE_GAP_DEVICE_IDENTITIES_SET = 0x6C + 3,
  SD_BLE_GAP_PRIVACY_SET = 0x6C + 4,
  SD_BLE_GAP_PRIVACY_GET = 0x6C + 5,
  SD_BLE_GAP_ADV_SET_CONFIGURE = 0x6C + 6,
  SD_BLE_GAP_ADV_START = 0x6C + 7,
  SD_BLE_GAP_ADV_STOP = 0x6C + 8,
  SD_BLE_GAP_CONN_PARAM_UPDATE = 0x6C + 9,
  SD_BLE_GAP_DISCONNECT = 0x6C + 10,
  SD_BLE_GAP_TX_POWER_SET = 0x6C + 11,
  SD_BLE_GAP_APPEARANCE_SET = 0x6C + 12,
  SD_BLE_GAP_APPEARANCE_GET = 0x6C + 13,
  SD_BLE_GAP_PPCP_SET = 0x6C + 14,
  SD_BLE_GAP_PPCP_GET = 0x6C + 15,
  SD_BLE_GAP_DEVICE_NAME_SET = 0x6C + 16,
  SD_BLE_GAP_DEVICE_NAME_GET = 0x6C + 17,
  SD_BLE_GAP_AUTHENTICATE = 0x6C + 18,
  SD_BLE_GAP_SEC_PARAMS_REPLY = 0x6C + 19,
  SD_BLE_GAP_AUTH_KEY_REPLY = 0x6C + 20,
  SD_BLE_GAP_LESC_DHKEY_REPLY = 0x6C + 21,
  SD_BLE_GAP_KEYPRESS_NOTIFY = 0x6C + 22,
  SD_BLE_GAP_LESC_OOB_DATA_GET = 0x6C + 23,
  SD_BLE_GAP_LESC_OOB_DATA_SET = 0x6C + 24,
  SD_BLE_GAP_ENCRYPT = 0x6C + 25,
  SD_BLE_GAP_SEC_INFO_REPLY = 0x6C + 26,
  SD_BLE_GAP_CONN_SEC_GET = 0x6C + 27,
  SD_BLE_GAP_RSSI_START = 0x6C + 28,
  SD_BLE_GAP_RSSI_STOP = 0x6C + 29,
  SD_BLE_GAP_SCAN_START = 0x6C + 30,
  SD_BLE_GAP_SCAN_STOP = 0x6C + 31,
  SD_BLE_GAP_CONNECT = 0x6C + 32,
  SD_BLE_GAP_CONNECT_CANCEL = 0x6C + 33,
  SD_BLE_GAP_RSSI_GET = 0x6C + 34,
  SD_BLE_GAP_PHY_UPDATE = 0x6C + 35,
  SD_BLE_GAP_DATA_LENGTH_UPDATE = 0x6C + 36,
  SD_BLE_GAP_QOS_CHANNEL_SURVEY_START = 0x6C + 37,
  SD_BLE_GAP_QOS_CHANNEL_SURVEY_STOP = 0x6C + 38,
  SD_BLE_GAP_ADV_ADDR_GET = 0x6C + 39,
};




enum BLE_GAP_EVTS
{
  BLE_GAP_EVT_CONNECTED = 0x10,
  BLE_GAP_EVT_DISCONNECTED = 0x10 + 1,
  BLE_GAP_EVT_CONN_PARAM_UPDATE = 0x10 + 2,
  BLE_GAP_EVT_SEC_PARAMS_REQUEST = 0x10 + 3,
  BLE_GAP_EVT_SEC_INFO_REQUEST = 0x10 + 4,
  BLE_GAP_EVT_PASSKEY_DISPLAY = 0x10 + 5,
  BLE_GAP_EVT_KEY_PRESSED = 0x10 + 6,
  BLE_GAP_EVT_AUTH_KEY_REQUEST = 0x10 + 7,
  BLE_GAP_EVT_LESC_DHKEY_REQUEST = 0x10 + 8,
  BLE_GAP_EVT_AUTH_STATUS = 0x10 + 9,
  BLE_GAP_EVT_CONN_SEC_UPDATE = 0x10 + 10,
  BLE_GAP_EVT_TIMEOUT = 0x10 + 11,
  BLE_GAP_EVT_RSSI_CHANGED = 0x10 + 12,
  BLE_GAP_EVT_ADV_REPORT = 0x10 + 13,
  BLE_GAP_EVT_SEC_REQUEST = 0x10 + 14,
  BLE_GAP_EVT_CONN_PARAM_UPDATE_REQUEST = 0x10 + 15,
  BLE_GAP_EVT_SCAN_REQ_REPORT = 0x10 + 16,
  BLE_GAP_EVT_PHY_UPDATE_REQUEST = 0x10 + 17,
  BLE_GAP_EVT_PHY_UPDATE = 0x10 + 18,
  BLE_GAP_EVT_DATA_LENGTH_UPDATE_REQUEST = 0x10 + 19,
  BLE_GAP_EVT_DATA_LENGTH_UPDATE = 0x10 + 20,
  BLE_GAP_EVT_QOS_CHANNEL_SURVEY_REPORT = 0x10 + 21,
  BLE_GAP_EVT_ADV_SET_TERMINATED = 0x10 + 22,
};




enum BLE_GAP_OPTS
{
  BLE_GAP_OPT_CH_MAP = 0x20,
  BLE_GAP_OPT_LOCAL_CONN_LATENCY = 0x20 + 1,
  BLE_GAP_OPT_PASSKEY = 0x20 + 2,
  BLE_GAP_OPT_COMPAT_MODE_1 = 0x20 + 3,
  BLE_GAP_OPT_AUTH_PAYLOAD_TIMEOUT = 0x20 + 4,
  BLE_GAP_OPT_SLAVE_LATENCY_DISABLE = 0x20 + 5,
};





enum BLE_GAP_CFGS
{
  BLE_GAP_CFG_ROLE_COUNT = 0x40,
  BLE_GAP_CFG_DEVICE_NAME = 0x40 + 1,
};



enum BLE_GAP_TX_POWER_ROLES
{
  BLE_GAP_TX_POWER_ROLE_ADV = 1,
  BLE_GAP_TX_POWER_ROLE_SCAN_INIT = 2,
  BLE_GAP_TX_POWER_ROLE_CONN = 3,
};
# 653 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint8_t type;
  uint8_t anonymous : 1;



  uint8_t include_tx_power : 1;
} ble_gap_adv_properties_t;



typedef struct
{
  uint16_t connectable : 1;
  uint16_t scannable : 1;
  uint16_t directed : 1;
  uint16_t scan_response : 1;
  uint16_t extended_pdu : 1;
  uint16_t status : 2;
  uint16_t reserved : 9;
} ble_gap_adv_report_type_t;


typedef struct
{
  uint16_t aux_offset;
  uint8_t aux_phy;
} ble_gap_aux_pointer_t;


typedef struct
{
  uint8_t addr_id_peer : 1;





  uint8_t addr_type : 7;
  uint8_t addr[(6)];

} ble_gap_addr_t;
# 709 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint16_t min_conn_interval;
  uint16_t max_conn_interval;
  uint16_t slave_latency;
  uint16_t conn_sup_timeout;
} ble_gap_conn_params_t;
# 728 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint8_t sm : 4;
  uint8_t lv : 4;

} ble_gap_conn_sec_mode_t;



typedef struct
{
  ble_gap_conn_sec_mode_t sec_mode;
  uint8_t encr_key_size;
} ble_gap_conn_sec_t;


typedef struct
{
  uint8_t irk[16];
} ble_gap_irk_t;







typedef uint8_t ble_gap_ch_mask_t[5];



typedef struct
{
  ble_gap_adv_properties_t properties;
  ble_gap_addr_t const *p_peer_addr;
# 776 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
  uint32_t interval;



  uint16_t duration;




  uint8_t max_adv_evts;







  ble_gap_ch_mask_t channel_mask;


  uint8_t filter_policy;
  uint8_t primary_phy;



  uint8_t secondary_phy;
# 812 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
  uint8_t set_id:4;



  uint8_t scan_req_notification:1;





} ble_gap_adv_params_t;
# 835 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  ble_data_t adv_data;



  ble_data_t scan_rsp_data;



} ble_gap_adv_data_t;



typedef struct
{
  uint8_t extended : 1;



  uint8_t report_incomplete_evts : 1;







  uint8_t active : 1;

  uint8_t filter_policy : 2;



  uint8_t scan_phys;
# 881 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
  uint16_t interval;
  uint16_t window;
  uint16_t timeout;
  ble_gap_ch_mask_t channel_mask;



} ble_gap_scan_params_t;
# 908 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint8_t privacy_mode;
  uint8_t private_addr_type;
  uint16_t private_addr_cycle_s;
  ble_gap_irk_t *p_device_irk;


} ble_gap_privacy_params_t;
# 927 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint8_t tx_phys;
  uint8_t rx_phys;
} ble_gap_phys_t;


typedef struct
{
  uint8_t enc : 1;
  uint8_t id : 1;
  uint8_t sign : 1;
  uint8_t link : 1;
} ble_gap_sec_kdist_t;



typedef struct
{
  uint8_t bond : 1;
  uint8_t mitm : 1;
  uint8_t lesc : 1;
  uint8_t keypress : 1;
  uint8_t io_caps : 3;
  uint8_t oob : 1;




  uint8_t min_key_size;
  uint8_t max_key_size;
  ble_gap_sec_kdist_t kdist_own;
  ble_gap_sec_kdist_t kdist_peer;
} ble_gap_sec_params_t;



typedef struct
{
  uint8_t ltk[16];
  uint8_t lesc : 1;
  uint8_t auth : 1;
  uint8_t ltk_len : 6;
} ble_gap_enc_info_t;



typedef struct
{
  uint16_t ediv;
  uint8_t rand[8];
} ble_gap_master_id_t;



typedef struct
{
  uint8_t csrk[16];
} ble_gap_sign_info_t;



typedef struct
{
  uint8_t pk[64];
} ble_gap_lesc_p256_pk_t;



typedef struct
{
  uint8_t key[32];
} ble_gap_lesc_dhkey_t;



typedef struct
{
  ble_gap_addr_t addr;
  uint8_t r[16];
  uint8_t c[16];
} ble_gap_lesc_oob_data_t;



typedef struct
{
  ble_gap_addr_t peer_addr;

  uint8_t role;
  ble_gap_conn_params_t conn_params;
  uint8_t adv_handle;

  ble_gap_adv_data_t adv_data;



} ble_gap_evt_connected_t;



typedef struct
{
  uint8_t reason;
} ble_gap_evt_disconnected_t;



typedef struct
{
  ble_gap_conn_params_t conn_params;
} ble_gap_evt_conn_param_update_t;


typedef struct
{
  ble_gap_phys_t peer_preferred_phys;
} ble_gap_evt_phy_update_request_t;


typedef struct
{
  uint8_t status;
  uint8_t tx_phy;
  uint8_t rx_phy;
} ble_gap_evt_phy_update_t;


typedef struct
{
  ble_gap_sec_params_t peer_params;
} ble_gap_evt_sec_params_request_t;



typedef struct
{
  ble_gap_addr_t peer_addr;
  ble_gap_master_id_t master_id;
  uint8_t enc_info : 1;
  uint8_t id_info : 1;
  uint8_t sign_info : 1;
} ble_gap_evt_sec_info_request_t;



typedef struct
{
  uint8_t passkey[6];
  uint8_t match_request : 1;


} ble_gap_evt_passkey_display_t;


typedef struct
{
  uint8_t kp_not;
} ble_gap_evt_key_pressed_t;



typedef struct
{
  uint8_t key_type;
} ble_gap_evt_auth_key_request_t;


typedef struct
{
  ble_gap_lesc_p256_pk_t *p_pk_peer;

  uint8_t oobd_req :1;
} ble_gap_evt_lesc_dhkey_request_t;





typedef struct
{
  uint8_t lv1 : 1;
  uint8_t lv2 : 1;
  uint8_t lv3 : 1;
  uint8_t lv4 : 1;
} ble_gap_sec_levels_t;



typedef struct
{
  ble_gap_enc_info_t enc_info;
  ble_gap_master_id_t master_id;
} ble_gap_enc_key_t;



typedef struct
{
  ble_gap_irk_t id_info;
  ble_gap_addr_t id_addr_info;
} ble_gap_id_key_t;



typedef struct
{
  ble_gap_enc_key_t *p_enc_key;
  ble_gap_id_key_t *p_id_key;
  ble_gap_sign_info_t *p_sign_key;
  ble_gap_lesc_p256_pk_t *p_pk;

} ble_gap_sec_keys_t;



typedef struct
{
  ble_gap_sec_keys_t keys_own;
  ble_gap_sec_keys_t keys_peer;
} ble_gap_sec_keyset_t;



typedef struct
{
  uint16_t max_tx_octets;
  uint16_t max_rx_octets;
  uint16_t max_tx_time_us;
  uint16_t max_rx_time_us;
} ble_gap_data_length_params_t;



typedef struct
{
  uint16_t tx_payload_limited_octets;
  uint16_t rx_payload_limited_octets;
  uint16_t tx_rx_time_limited_us;
} ble_gap_data_length_limitation_t;



typedef struct
{
  uint8_t auth_status;
  uint8_t error_src : 2;
  uint8_t bonded : 1;
  uint8_t lesc : 1;
  ble_gap_sec_levels_t sm1_levels;
  ble_gap_sec_levels_t sm2_levels;
  ble_gap_sec_kdist_t kdist_own;
  ble_gap_sec_kdist_t kdist_peer;
} ble_gap_evt_auth_status_t;



typedef struct
{
  ble_gap_conn_sec_t conn_sec;
} ble_gap_evt_conn_sec_update_t;



typedef struct
{
  uint8_t src;
  union
  {
    ble_data_t adv_report_buffer;

  } params;
} ble_gap_evt_timeout_t;



typedef struct
{
  int8_t rssi;
  uint8_t ch_index;
} ble_gap_evt_rssi_changed_t;


typedef struct
{
  uint8_t reason;

  uint8_t adv_handle;
  uint8_t num_completed_adv_events;

  ble_gap_adv_data_t adv_data;


} ble_gap_evt_adv_set_terminated_t;
# 1230 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  ble_gap_adv_report_type_t type;
  ble_gap_addr_t peer_addr;


  ble_gap_addr_t direct_addr;
# 1245 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
  uint8_t primary_phy;

  uint8_t secondary_phy;


  int8_t tx_power;



  int8_t rssi;
  uint8_t ch_index;
  uint8_t set_id;

  uint16_t data_id:12;


  ble_data_t data;



  ble_gap_aux_pointer_t aux_pointer;


} ble_gap_evt_adv_report_t;



typedef struct
{
  uint8_t bond : 1;
  uint8_t mitm : 1;
  uint8_t lesc : 1;
  uint8_t keypress : 1;
} ble_gap_evt_sec_request_t;



typedef struct
{
  ble_gap_conn_params_t conn_params;
} ble_gap_evt_conn_param_update_request_t;



typedef struct
{
  uint8_t adv_handle;
  int8_t rssi;
  ble_gap_addr_t peer_addr;

} ble_gap_evt_scan_req_report_t;



typedef struct
{
  ble_gap_data_length_params_t peer_params;
} ble_gap_evt_data_length_update_request_t;


typedef struct
{
  ble_gap_data_length_params_t effective_params;
} ble_gap_evt_data_length_update_t;



typedef struct
{
  int8_t channel_energy[(40)];



} ble_gap_evt_qos_channel_survey_report_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_gap_evt_connected_t connected;
    ble_gap_evt_disconnected_t disconnected;
    ble_gap_evt_conn_param_update_t conn_param_update;
    ble_gap_evt_sec_params_request_t sec_params_request;
    ble_gap_evt_sec_info_request_t sec_info_request;
    ble_gap_evt_passkey_display_t passkey_display;
    ble_gap_evt_key_pressed_t key_pressed;
    ble_gap_evt_auth_key_request_t auth_key_request;
    ble_gap_evt_lesc_dhkey_request_t lesc_dhkey_request;
    ble_gap_evt_auth_status_t auth_status;
    ble_gap_evt_conn_sec_update_t conn_sec_update;
    ble_gap_evt_timeout_t timeout;
    ble_gap_evt_rssi_changed_t rssi_changed;
    ble_gap_evt_adv_report_t adv_report;
    ble_gap_evt_adv_set_terminated_t adv_set_terminated;
    ble_gap_evt_sec_request_t sec_request;
    ble_gap_evt_conn_param_update_request_t conn_param_update_request;
    ble_gap_evt_scan_req_report_t scan_req_report;
    ble_gap_evt_phy_update_request_t phy_update_request;
    ble_gap_evt_phy_update_t phy_update;
    ble_gap_evt_data_length_update_request_t data_length_update_request;
    ble_gap_evt_data_length_update_t data_length_update;
    ble_gap_evt_qos_channel_survey_report_t qos_channel_survey_report;
  } params;
} ble_gap_evt_t;
# 1361 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint8_t conn_count;

  uint16_t event_length;




} ble_gap_conn_cfg_t;
# 1385 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint8_t adv_set_count;
  uint8_t periph_role_count;
  uint8_t central_role_count;
  uint8_t central_sec_count;
  uint8_t qos_channel_survey_role_available:1;

} ble_gap_cfg_role_count_t;
# 1424 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  ble_gap_conn_sec_mode_t write_perm;
  uint8_t vloc:2;
  uint8_t *p_value;
  uint16_t current_len;
  uint16_t max_len;
} ble_gap_cfg_device_name_t;



typedef union
{
  ble_gap_cfg_role_count_t role_count_cfg;
  ble_gap_cfg_device_name_t device_name_cfg;
} ble_gap_cfg_t;
# 1465 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint8_t ch_map[5];
} ble_gap_opt_ch_map_t;
# 1494 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint16_t requested_latency;
  uint16_t * p_actual_latency;
} ble_gap_opt_local_conn_latency_t;
# 1513 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint8_t disable : 1;
} ble_gap_opt_slave_latency_disable_t;
# 1530 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint8_t const * p_passkey;
} ble_gap_opt_passkey_t;
# 1551 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
   uint8_t enable : 1;
} ble_gap_opt_compat_mode_1_t;
# 1576 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
typedef struct
{
  uint16_t conn_handle;
  uint16_t auth_payload_timeout;
} ble_gap_opt_auth_payload_timeout_t;


typedef union
{
  ble_gap_opt_ch_map_t ch_map;
  ble_gap_opt_local_conn_latency_t local_conn_latency;
  ble_gap_opt_passkey_t passkey;
  ble_gap_opt_compat_mode_1_t compat_mode_1;
  ble_gap_opt_auth_payload_timeout_t auth_payload_timeout;
  ble_gap_opt_slave_latency_disable_t slave_latency_disable;
} ble_gap_opt_t;
# 1626 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1626 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1626 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1626 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1626 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_addr_set(ble_gap_addr_t const *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADDR_SET) : "r0" ); }
# 1626 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1626 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1639 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1639 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1639 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1639 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1639 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_addr_get(ble_gap_addr_t *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADDR_GET) : "r0" ); }
# 1639 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1639 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1658 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1658 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1658 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1658 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1658 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_addr_get(uint8_t adv_handle, ble_gap_addr_t *p_addr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_ADDR_GET) : "r0" ); }
# 1658 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1658 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1684 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1684 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1684 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1684 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1684 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_whitelist_set(ble_gap_addr_t const * const * pp_wl_addrs, uint8_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_WHITELIST_SET) : "r0" ); }
# 1684 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1684 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1715 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1715 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1715 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1715 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1715 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_identities_set(ble_gap_id_key_t const * const * pp_id_keys, ble_gap_irk_t const * const * pp_local_irks, uint8_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_IDENTITIES_SET) : "r0" ); }
# 1715 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1715 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1739 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1739 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1739 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1739 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1739 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_privacy_set(ble_gap_privacy_params_t const *p_privacy_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PRIVACY_SET) : "r0" ); }
# 1739 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1739 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1753 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1753 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1753 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1753 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1753 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_privacy_get(ble_gap_privacy_params_t *p_privacy_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PRIVACY_GET) : "r0" ); }
# 1753 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1753 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1800 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1800 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1800 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1800 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1800 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_set_configure(uint8_t *p_adv_handle, ble_gap_adv_data_t const *p_adv_data, ble_gap_adv_params_t const *p_adv_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_SET_CONFIGURE) : "r0" ); }
# 1800 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1800 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1844 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1844 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1844 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1844 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1844 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_start(uint8_t adv_handle, uint8_t conn_cfg_tag) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_START) : "r0" ); }
# 1844 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1844 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1860 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1860 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1860 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1860 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1860 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_adv_stop(uint8_t adv_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ADV_STOP) : "r0" ); }
# 1860 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1860 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1898 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1898 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1898 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1898 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1898 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_param_update(uint16_t conn_handle, ble_gap_conn_params_t const *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_PARAM_UPDATE) : "r0" ); }
# 1898 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1898 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1922 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1922 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1922 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1922 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1922 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_disconnect(uint16_t conn_handle, uint8_t hci_status_code) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DISCONNECT) : "r0" ); }
# 1922 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1922 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1947 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1947 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1947 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1947 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1947 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_tx_power_set(uint8_t role, uint16_t handle, int8_t tx_power) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_TX_POWER_SET) : "r0" ); }
# 1947 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1947 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1957 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1957 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1957 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1957 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1957 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_appearance_set(uint16_t appearance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_APPEARANCE_SET) : "r0" ); }
# 1957 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1957 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1967 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1967 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1967 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1967 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1967 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_appearance_get(uint16_t *p_appearance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_APPEARANCE_GET) : "r0" ); }
# 1967 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1967 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1978 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1978 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1978 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1978 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1978 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_ppcp_set(ble_gap_conn_params_t const *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PPCP_SET) : "r0" ); }
# 1978 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1978 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 1988 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1988 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 1988 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 1988 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 1988 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_ppcp_get(ble_gap_conn_params_t *p_conn_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PPCP_GET) : "r0" ); }
# 1988 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 1988 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2006 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2006 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2006 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2006 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2006 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_name_set(ble_gap_conn_sec_mode_t const *p_write_perm, uint8_t const *p_dev_name, uint16_t len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_NAME_SET) : "r0" ); }
# 2006 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2006 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2023 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2023 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2023 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2023 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2023 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_device_name_get(uint8_t *p_dev_name, uint16_t *p_len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DEVICE_NAME_GET) : "r0" ); }
# 2023 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2023 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2075 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2075 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2075 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2075 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2075 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_authenticate(uint16_t conn_handle, ble_gap_sec_params_t const *p_sec_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_AUTHENTICATE) : "r0" ); }
# 2075 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2075 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2134 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2134 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2134 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2134 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2134 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_sec_params_reply(uint16_t conn_handle, uint8_t sec_status, ble_gap_sec_params_t const *p_sec_params, ble_gap_sec_keyset_t const *p_sec_keyset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SEC_PARAMS_REPLY) : "r0" ); }
# 2134 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2134 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2168 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2168 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2168 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2168 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2168 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_auth_key_reply(uint16_t conn_handle, uint8_t key_type, uint8_t const *p_key) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_AUTH_KEY_REPLY) : "r0" ); }
# 2168 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2168 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2204 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2204 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2204 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2204 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2204 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_dhkey_reply(uint16_t conn_handle, ble_gap_lesc_dhkey_t const *p_dhkey) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_DHKEY_REPLY) : "r0" ); }
# 2204 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2204 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2226 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2226 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2226 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2226 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2226 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_keypress_notify(uint16_t conn_handle, uint8_t kp_not) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_KEYPRESS_NOTIFY) : "r0" ); }
# 2226 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2226 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2247 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2247 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2247 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2247 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2247 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_oob_data_get(uint16_t conn_handle, ble_gap_lesc_p256_pk_t const *p_pk_own, ble_gap_lesc_oob_data_t *p_oobd_own) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_OOB_DATA_GET) : "r0" ); }
# 2247 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2247 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2279 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2279 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2279 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2279 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2279 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_lesc_oob_data_set(uint16_t conn_handle, ble_gap_lesc_oob_data_t const *p_oobd_own, ble_gap_lesc_oob_data_t const *p_oobd_peer) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_LESC_OOB_DATA_SET) : "r0" ); }
# 2279 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2279 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2308 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2308 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2308 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2308 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2308 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_encrypt(uint16_t conn_handle, ble_gap_master_id_t const *p_master_id, ble_gap_enc_info_t const *p_enc_info) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_ENCRYPT) : "r0" ); }
# 2308 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2308 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2334 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2334 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2334 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2334 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2334 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_sec_info_reply(uint16_t conn_handle, ble_gap_enc_info_t const *p_enc_info, ble_gap_irk_t const *p_id_info, ble_gap_sign_info_t const *p_sign_info) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SEC_INFO_REPLY) : "r0" ); }
# 2334 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2334 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2346 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2346 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2346 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2346 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2346 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_conn_sec_get(uint16_t conn_handle, ble_gap_conn_sec_t *p_conn_sec) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONN_SEC_GET) : "r0" ); }
# 2346 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2346 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2372 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2372 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2372 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2372 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2372 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_start(uint16_t conn_handle, uint8_t threshold_dbm, uint8_t skip_count) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_START) : "r0" ); }
# 2372 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2372 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2391 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2391 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2391 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2391 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2391 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_stop(uint16_t conn_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_STOP) : "r0" ); }
# 2391 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2391 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2412 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2412 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2412 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2412 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2412 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_rssi_get(uint16_t conn_handle, int8_t *p_rssi, uint8_t *p_ch_index) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_RSSI_GET) : "r0" ); }
# 2412 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2412 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2466 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2466 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2466 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2466 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2466 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_scan_start(ble_gap_scan_params_t const *p_scan_params, ble_data_t const * p_adv_report_buffer) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SCAN_START) : "r0" ); }
# 2466 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2466 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2481 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2481 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2481 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2481 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2481 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_scan_stop(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_SCAN_STOP) : "r0" ); }
# 2481 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2481 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2526 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2526 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2526 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2526 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2526 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_connect(ble_gap_addr_t const *p_peer_addr, ble_gap_scan_params_t const *p_scan_params, ble_gap_conn_params_t const *p_conn_params, uint8_t conn_cfg_tag) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONNECT) : "r0" ); }
# 2526 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2526 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2539 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2539 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2539 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2539 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2539 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_connect_cancel(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_CONNECT_CANCEL) : "r0" ); }
# 2539 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2539 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2593 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2593 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2593 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2593 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2593 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_phy_update(uint16_t conn_handle, ble_gap_phys_t const *p_gap_phys) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_PHY_UPDATE) : "r0" ); }
# 2593 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2593 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2628 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2628 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2628 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2628 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2628 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_data_length_update(uint16_t conn_handle, ble_gap_data_length_params_t const *p_dl_params, ble_gap_data_length_limitation_t *p_dl_limitation) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_DATA_LENGTH_UPDATE) : "r0" ); }
# 2628 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2628 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 2660 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2660 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2660 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2660 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2660 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_qos_channel_survey_start(uint32_t interval_us) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_QOS_CHANNEL_SURVEY_START) : "r0" ); }
# 2660 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2660 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;







# 2667 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic push
# 2667 "../../../../../../components/softdevice/s132/headers/ble_gap.h"

# 2667 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 2667 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gap_qos_channel_survey_stop(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GAP_QOS_CHANNEL_SURVEY_STOP) : "r0" ); }
# 2667 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
#pragma GCC diagnostic pop
# 2667 "../../../../../../components/softdevice/s132/headers/ble_gap.h"
 ;
# 57 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h" 1
# 85 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
enum BLE_L2CAP_SVCS
{
  SD_BLE_L2CAP_CH_SETUP = 0xB8 + 0,
  SD_BLE_L2CAP_CH_RELEASE = 0xB8 + 1,
  SD_BLE_L2CAP_CH_RX = 0xB8 + 2,
  SD_BLE_L2CAP_CH_TX = 0xB8 + 3,
  SD_BLE_L2CAP_CH_FLOW_CONTROL = 0xB8 + 4,
};


enum BLE_L2CAP_EVTS
{
  BLE_L2CAP_EVT_CH_SETUP_REQUEST = 0x70 + 0,

  BLE_L2CAP_EVT_CH_SETUP_REFUSED = 0x70 + 1,

  BLE_L2CAP_EVT_CH_SETUP = 0x70 + 2,

  BLE_L2CAP_EVT_CH_RELEASED = 0x70 + 3,

  BLE_L2CAP_EVT_CH_SDU_BUF_RELEASED = 0x70 + 4,

  BLE_L2CAP_EVT_CH_CREDIT = 0x70 + 5,

  BLE_L2CAP_EVT_CH_RX = 0x70 + 6,

  BLE_L2CAP_EVT_CH_TX = 0x70 + 7,

};
# 174 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
typedef struct
{
  uint16_t rx_mps;


  uint16_t tx_mps;


  uint8_t rx_queue_size;

  uint8_t tx_queue_size;

  uint8_t ch_count;




} ble_l2cap_conn_cfg_t;


typedef struct
{
  uint16_t rx_mtu;


  uint16_t rx_mps;



  ble_data_t sdu_buf;




} ble_l2cap_ch_rx_params_t;


typedef struct
{
  ble_l2cap_ch_rx_params_t rx_params;
  uint16_t le_psm;

  uint16_t status;


} ble_l2cap_ch_setup_params_t;


typedef struct
{
  uint16_t tx_mtu;

  uint16_t peer_mps;

  uint16_t tx_mps;



  uint16_t credits;
} ble_l2cap_ch_tx_params_t;


typedef struct
{
  ble_l2cap_ch_tx_params_t tx_params;
  uint16_t le_psm;
} ble_l2cap_evt_ch_setup_request_t;


typedef struct
{
  uint8_t source;
  uint16_t status;
} ble_l2cap_evt_ch_setup_refused_t;


typedef struct
{
  ble_l2cap_ch_tx_params_t tx_params;
} ble_l2cap_evt_ch_setup_t;


typedef struct
{
  ble_data_t sdu_buf;



} ble_l2cap_evt_ch_sdu_buf_released_t;


typedef struct
{
  uint16_t credits;
} ble_l2cap_evt_ch_credit_t;


typedef struct
{
  uint16_t sdu_len;
  ble_data_t sdu_buf;



} ble_l2cap_evt_ch_rx_t;


typedef struct
{
  ble_data_t sdu_buf;
} ble_l2cap_evt_ch_tx_t;


typedef struct
{
  uint16_t conn_handle;
  uint16_t local_cid;

  union
  {
    ble_l2cap_evt_ch_setup_request_t ch_setup_request;
    ble_l2cap_evt_ch_setup_refused_t ch_setup_refused;
    ble_l2cap_evt_ch_setup_t ch_setup;
    ble_l2cap_evt_ch_sdu_buf_released_t ch_sdu_buf_released;
    ble_l2cap_evt_ch_credit_t credit;
    ble_l2cap_evt_ch_rx_t rx;
    ble_l2cap_evt_ch_tx_t tx;
  } params;
} ble_l2cap_evt_t;
# 349 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 349 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 349 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 349 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 349 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_setup(uint16_t conn_handle, uint16_t *p_local_cid, ble_l2cap_ch_setup_params_t const *p_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_SETUP) : "r0" ); }
# 349 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 349 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 ;
# 372 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 372 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 372 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 372 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 372 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_release(uint16_t conn_handle, uint16_t local_cid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_RELEASE) : "r0" ); }
# 372 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 372 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 ;
# 406 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 406 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 406 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 406 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 406 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_rx(uint16_t conn_handle, uint16_t local_cid, ble_data_t const *p_sdu_buf) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_RX) : "r0" ); }
# 406 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 406 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 ;
# 451 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 451 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 451 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 451 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 451 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_tx(uint16_t conn_handle, uint16_t local_cid, ble_data_t const *p_sdu_buf) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_TX) : "r0" ); }
# 451 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 451 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 ;
# 495 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 495 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic push
# 495 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"

# 495 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 495 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_l2cap_ch_flow_control(uint16_t conn_handle, uint16_t local_cid, uint16_t credits, uint16_t *p_credits) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_L2CAP_CH_FLOW_CONTROL) : "r0" ); }
# 495 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
#pragma GCC diagnostic pop
# 495 "../../../../../../components/softdevice/s132/headers/ble_l2cap.h"
 ;
# 58 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_gatt.h" 1
# 190 "../../../../../../components/softdevice/s132/headers/ble_gatt.h"
typedef struct
{
  uint16_t att_mtu;






} ble_gatt_conn_cfg_t;


typedef struct
{

  uint8_t broadcast :1;
  uint8_t read :1;
  uint8_t write_wo_resp :1;
  uint8_t write :1;
  uint8_t notify :1;
  uint8_t indicate :1;
  uint8_t auth_signed_wr :1;
} ble_gatt_char_props_t;


typedef struct
{

  uint8_t reliable_wr :1;
  uint8_t wr_aux :1;
} ble_gatt_char_ext_props_t;
# 59 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_gattc.h" 1
# 65 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
enum BLE_GATTC_SVCS
{
  SD_BLE_GATTC_PRIMARY_SERVICES_DISCOVER = 0x9B,
  SD_BLE_GATTC_RELATIONSHIPS_DISCOVER,
  SD_BLE_GATTC_CHARACTERISTICS_DISCOVER,
  SD_BLE_GATTC_DESCRIPTORS_DISCOVER,
  SD_BLE_GATTC_ATTR_INFO_DISCOVER,
  SD_BLE_GATTC_CHAR_VALUE_BY_UUID_READ,
  SD_BLE_GATTC_READ,
  SD_BLE_GATTC_CHAR_VALUES_READ,
  SD_BLE_GATTC_WRITE,
  SD_BLE_GATTC_HV_CONFIRM,
  SD_BLE_GATTC_EXCHANGE_MTU_REQUEST,
};




enum BLE_GATTC_EVTS
{
  BLE_GATTC_EVT_PRIM_SRVC_DISC_RSP = 0x30,
  BLE_GATTC_EVT_REL_DISC_RSP,
  BLE_GATTC_EVT_CHAR_DISC_RSP,
  BLE_GATTC_EVT_DESC_DISC_RSP,
  BLE_GATTC_EVT_ATTR_INFO_DISC_RSP,
  BLE_GATTC_EVT_CHAR_VAL_BY_UUID_READ_RSP,
  BLE_GATTC_EVT_READ_RSP,
  BLE_GATTC_EVT_CHAR_VALS_READ_RSP,
  BLE_GATTC_EVT_WRITE_RSP,
  BLE_GATTC_EVT_HVX,
  BLE_GATTC_EVT_EXCHANGE_MTU_RSP,
  BLE_GATTC_EVT_TIMEOUT,
  BLE_GATTC_EVT_WRITE_CMD_TX_COMPLETE
};
# 129 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
typedef struct
{
  uint8_t write_cmd_tx_queue_size;

} ble_gattc_conn_cfg_t;


typedef struct
{
  uint16_t start_handle;
  uint16_t end_handle;
} ble_gattc_handle_range_t;



typedef struct
{
  ble_uuid_t uuid;
  ble_gattc_handle_range_t handle_range;
} ble_gattc_service_t;



typedef struct
{
  uint16_t handle;
  ble_gattc_service_t included_srvc;
} ble_gattc_include_t;



typedef struct
{
  ble_uuid_t uuid;
  ble_gatt_char_props_t char_props;
  uint8_t char_ext_props : 1;
  uint16_t handle_decl;
  uint16_t handle_value;
} ble_gattc_char_t;



typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
} ble_gattc_desc_t;



typedef struct
{
  uint8_t write_op;
  uint8_t flags;
  uint16_t handle;
  uint16_t offset;
  uint16_t len;
  uint8_t const *p_value;
} ble_gattc_write_params_t;


typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
} ble_gattc_attr_info16_t;


typedef struct
{
  uint16_t handle;
  ble_uuid128_t uuid;
} ble_gattc_attr_info128_t;


typedef struct
{
  uint16_t count;
  ble_gattc_service_t services[1];

} ble_gattc_evt_prim_srvc_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_include_t includes[1];

} ble_gattc_evt_rel_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_char_t chars[1];

} ble_gattc_evt_char_disc_rsp_t;


typedef struct
{
  uint16_t count;
  ble_gattc_desc_t descs[1];

} ble_gattc_evt_desc_disc_rsp_t;


typedef struct
{
  uint16_t count;
  uint8_t format;
  union {
    ble_gattc_attr_info16_t attr_info16[1];


    ble_gattc_attr_info128_t attr_info128[1];


  } info;
} ble_gattc_evt_attr_info_disc_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t *p_value;
} ble_gattc_handle_value_t;


typedef struct
{
  uint16_t count;
  uint16_t value_len;
  uint8_t handle_value[1];


} ble_gattc_evt_char_val_by_uuid_read_rsp_t;


typedef struct
{
  uint16_t handle;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_read_rsp_t;


typedef struct
{
  uint16_t len;
  uint8_t values[1];

} ble_gattc_evt_char_vals_read_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t write_op;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_write_rsp_t;


typedef struct
{
  uint16_t handle;
  uint8_t type;
  uint16_t len;
  uint8_t data[1];

} ble_gattc_evt_hvx_t;


typedef struct
{
  uint16_t server_rx_mtu;
} ble_gattc_evt_exchange_mtu_rsp_t;


typedef struct
{
  uint8_t src;
} ble_gattc_evt_timeout_t;


typedef struct
{
  uint8_t count;
} ble_gattc_evt_write_cmd_tx_complete_t;


typedef struct
{
  uint16_t conn_handle;
  uint16_t gatt_status;
  uint16_t error_handle;
  union
  {
    ble_gattc_evt_prim_srvc_disc_rsp_t prim_srvc_disc_rsp;
    ble_gattc_evt_rel_disc_rsp_t rel_disc_rsp;
    ble_gattc_evt_char_disc_rsp_t char_disc_rsp;
    ble_gattc_evt_desc_disc_rsp_t desc_disc_rsp;
    ble_gattc_evt_char_val_by_uuid_read_rsp_t char_val_by_uuid_read_rsp;
    ble_gattc_evt_read_rsp_t read_rsp;
    ble_gattc_evt_char_vals_read_rsp_t char_vals_read_rsp;
    ble_gattc_evt_write_rsp_t write_rsp;
    ble_gattc_evt_hvx_t hvx;
    ble_gattc_evt_exchange_mtu_rsp_t exchange_mtu_rsp;
    ble_gattc_evt_timeout_t timeout;
    ble_gattc_evt_attr_info_disc_rsp_t attr_info_disc_rsp;
    ble_gattc_evt_write_cmd_tx_complete_t write_cmd_tx_complete;
  } params;
} ble_gattc_evt_t;
# 379 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 379 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 379 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 379 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 379 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_primary_services_discover(uint16_t conn_handle, uint16_t start_handle, ble_uuid_t const *p_srvc_uuid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_PRIMARY_SERVICES_DISCOVER) : "r0" ); }
# 379 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 379 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 406 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 406 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 406 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 406 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 406 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_relationships_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_RELATIONSHIPS_DISCOVER) : "r0" ); }
# 406 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 406 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 435 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 435 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 435 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 435 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 435 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_characteristics_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHARACTERISTICS_DISCOVER) : "r0" ); }
# 435 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 435 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 461 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 461 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 461 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 461 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 461 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_descriptors_discover(uint16_t conn_handle, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_DESCRIPTORS_DISCOVER) : "r0" ); }
# 461 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 461 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 488 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 488 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 488 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 488 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 488 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_char_value_by_uuid_read(uint16_t conn_handle, ble_uuid_t const *p_uuid, ble_gattc_handle_range_t const *p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHAR_VALUE_BY_UUID_READ) : "r0" ); }
# 488 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 488 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 515 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 515 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 515 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 515 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 515 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_read(uint16_t conn_handle, uint16_t handle, uint16_t offset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_READ) : "r0" ); }
# 515 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 515 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 541 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 541 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 541 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 541 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 541 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_char_values_read(uint16_t conn_handle, uint16_t const *p_handles, uint16_t handle_count) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_CHAR_VALUES_READ) : "r0" ); }
# 541 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 541 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 588 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 588 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 588 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 588 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 588 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_write(uint16_t conn_handle, ble_gattc_write_params_t const *p_write_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_WRITE) : "r0" ); }
# 588 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 588 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 606 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 606 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 606 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 606 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 606 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_hv_confirm(uint16_t conn_handle, uint16_t handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_HV_CONFIRM) : "r0" ); }
# 606 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 606 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 624 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 624 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 624 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 624 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 624 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_attr_info_discover(uint16_t conn_handle, ble_gattc_handle_range_t const * p_handle_range) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_ATTR_INFO_DISCOVER) : "r0" ); }
# 624 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 624 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 657 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 657 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic push
# 657 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"

# 657 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 657 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gattc_exchange_mtu_request(uint16_t conn_handle, uint16_t client_rx_mtu) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTC_EXCHANGE_MTU_REQUEST) : "r0" ); }
# 657 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
#pragma GCC diagnostic pop
# 657 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
 ;
# 682 "../../../../../../components/softdevice/s132/headers/ble_gattc.h"
static inline uint32_t sd_ble_gattc_evt_char_val_by_uuid_read_rsp_iter(ble_gattc_evt_t *p_gattc_evt, ble_gattc_handle_value_t *p_iter);





static inline uint32_t sd_ble_gattc_evt_char_val_by_uuid_read_rsp_iter(ble_gattc_evt_t *p_gattc_evt, ble_gattc_handle_value_t *p_iter)
{
  uint32_t value_len = p_gattc_evt->params.char_val_by_uuid_read_rsp.value_len;
  uint8_t *p_first = p_gattc_evt->params.char_val_by_uuid_read_rsp.handle_value;
  uint8_t *p_next = p_iter->p_value ? p_iter->p_value + value_len : p_first;

  if ((p_next - p_first) / (sizeof(uint16_t) + value_len) < p_gattc_evt->params.char_val_by_uuid_read_rsp.count)
  {
    p_iter->handle = (uint16_t)p_next[1] << 8 | p_next[0];
    p_iter->p_value = p_next + sizeof(uint16_t);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x0) + 5);
  }
}
# 60 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_gatts.h" 1
# 68 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
enum BLE_GATTS_SVCS
{
  SD_BLE_GATTS_SERVICE_ADD = 0xA8,
  SD_BLE_GATTS_INCLUDE_ADD,
  SD_BLE_GATTS_CHARACTERISTIC_ADD,
  SD_BLE_GATTS_DESCRIPTOR_ADD,
  SD_BLE_GATTS_VALUE_SET,
  SD_BLE_GATTS_VALUE_GET,
  SD_BLE_GATTS_HVX,
  SD_BLE_GATTS_SERVICE_CHANGED,
  SD_BLE_GATTS_RW_AUTHORIZE_REPLY,
  SD_BLE_GATTS_SYS_ATTR_SET,
  SD_BLE_GATTS_SYS_ATTR_GET,
  SD_BLE_GATTS_INITIAL_USER_HANDLE_GET,
  SD_BLE_GATTS_ATTR_GET,
  SD_BLE_GATTS_EXCHANGE_MTU_REPLY
};




enum BLE_GATTS_EVTS
{
  BLE_GATTS_EVT_WRITE = 0x50,
  BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST,
  BLE_GATTS_EVT_SYS_ATTR_MISSING,
  BLE_GATTS_EVT_HVC,
  BLE_GATTS_EVT_SC_CONFIRM,
  BLE_GATTS_EVT_EXCHANGE_MTU_REQUEST,
  BLE_GATTS_EVT_TIMEOUT,
  BLE_GATTS_EVT_HVN_TX_COMPLETE
};





enum BLE_GATTS_CFGS
{
  BLE_GATTS_CFG_SERVICE_CHANGED = 0xA0,
  BLE_GATTS_CFG_ATTR_TAB_SIZE,
};
# 208 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
typedef struct
{
  uint8_t hvn_tx_queue_size;

} ble_gatts_conn_cfg_t;


typedef struct
{
  ble_gap_conn_sec_mode_t read_perm;
  ble_gap_conn_sec_mode_t write_perm;
  uint8_t vlen :1;
  uint8_t vloc :2;
  uint8_t rd_auth :1;
  uint8_t wr_auth :1;
} ble_gatts_attr_md_t;



typedef struct
{
  ble_uuid_t const *p_uuid;
  ble_gatts_attr_md_t const *p_attr_md;
  uint16_t init_len;
  uint16_t init_offs;
  uint16_t max_len;
  uint8_t *p_value;


} ble_gatts_attr_t;


typedef struct
{
  uint16_t len;
  uint16_t offset;
  uint8_t *p_value;


} ble_gatts_value_t;



typedef struct
{
  uint8_t format;
  int8_t exponent;
  uint16_t unit;
  uint8_t name_space;
  uint16_t desc;
} ble_gatts_char_pf_t;



typedef struct
{
  ble_gatt_char_props_t char_props;
  ble_gatt_char_ext_props_t char_ext_props;
  uint8_t const *p_char_user_desc;
  uint16_t char_user_desc_max_size;
  uint16_t char_user_desc_size;
  ble_gatts_char_pf_t const *p_char_pf;
  ble_gatts_attr_md_t const *p_user_desc_md;
  ble_gatts_attr_md_t const *p_cccd_md;
  ble_gatts_attr_md_t const *p_sccd_md;
} ble_gatts_char_md_t;



typedef struct
{
  uint16_t value_handle;
  uint16_t user_desc_handle;
  uint16_t cccd_handle;
  uint16_t sccd_handle;
} ble_gatts_char_handles_t;



typedef struct
{
  uint16_t handle;
  uint8_t type;
  uint16_t offset;
  uint16_t *p_len;
  uint8_t const *p_data;
} ble_gatts_hvx_params_t;


typedef struct
{
  uint16_t gatt_status;
  uint8_t update : 1;


  uint16_t offset;
  uint16_t len;
  uint8_t const *p_data;
} ble_gatts_authorize_params_t;


typedef struct
{
  uint8_t type;
  union {
    ble_gatts_authorize_params_t read;
    ble_gatts_authorize_params_t write;
  } params;
} ble_gatts_rw_authorize_reply_params_t;


typedef struct
{
  uint8_t service_changed : 1;
} ble_gatts_cfg_service_changed_t;
# 331 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
typedef struct
{
  uint32_t attr_tab_size;
} ble_gatts_cfg_attr_tab_size_t;


typedef union
{
  ble_gatts_cfg_service_changed_t service_changed;
  ble_gatts_cfg_attr_tab_size_t attr_tab_size;
} ble_gatts_cfg_t;



typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
  uint8_t op;
  uint8_t auth_required;
  uint16_t offset;
  uint16_t len;
  uint8_t data[1];

} ble_gatts_evt_write_t;


typedef struct
{
  uint16_t handle;
  ble_uuid_t uuid;
  uint16_t offset;
} ble_gatts_evt_read_t;


typedef struct
{
  uint8_t type;
  union {
    ble_gatts_evt_read_t read;
    ble_gatts_evt_write_t write;
  } request;
} ble_gatts_evt_rw_authorize_request_t;


typedef struct
{
  uint8_t hint;
} ble_gatts_evt_sys_attr_missing_t;



typedef struct
{
  uint16_t handle;
} ble_gatts_evt_hvc_t;


typedef struct
{
  uint16_t client_rx_mtu;
} ble_gatts_evt_exchange_mtu_request_t;


typedef struct
{
  uint8_t src;
} ble_gatts_evt_timeout_t;


typedef struct
{
  uint8_t count;
} ble_gatts_evt_hvn_tx_complete_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_gatts_evt_write_t write;
    ble_gatts_evt_rw_authorize_request_t authorize_request;
    ble_gatts_evt_sys_attr_missing_t sys_attr_missing;
    ble_gatts_evt_hvc_t hvc;
    ble_gatts_evt_exchange_mtu_request_t exchange_mtu_request;
    ble_gatts_evt_timeout_t timeout;
    ble_gatts_evt_hvn_tx_complete_t hvn_tx_complete;
  } params;
} ble_gatts_evt_t;
# 446 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 446 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 446 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 446 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 446 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_service_add(uint8_t type, ble_uuid_t const *p_uuid, uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SERVICE_ADD) : "r0" ); }
# 446 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 446 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 472 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 472 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 472 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 472 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 472 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_include_add(uint16_t service_handle, uint16_t inc_srvc_handle, uint16_t *p_include_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_INCLUDE_ADD) : "r0" ); }
# 472 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 472 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 501 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 501 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 501 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 501 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 501 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_characteristic_add(uint16_t service_handle, ble_gatts_char_md_t const *p_char_md, ble_gatts_attr_t const *p_attr_char_value, ble_gatts_char_handles_t *p_handles) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_CHARACTERISTIC_ADD) : "r0" ); }
# 501 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 501 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 524 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 524 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 524 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 524 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 524 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_descriptor_add(uint16_t char_handle, ble_gatts_attr_t const *p_attr, uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_DESCRIPTOR_ADD) : "r0" ); }
# 524 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 524 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 547 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 547 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 547 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 547 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 547 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_value_set(uint16_t conn_handle, uint16_t handle, ble_gatts_value_t *p_value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_VALUE_SET) : "r0" ); }
# 547 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 547 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 571 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 571 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 571 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 571 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 571 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_value_get(uint16_t conn_handle, uint16_t handle, ble_gatts_value_t *p_value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_VALUE_GET) : "r0" ); }
# 571 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 571 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 636 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 636 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 636 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 636 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 636 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_hvx(uint16_t conn_handle, ble_gatts_hvx_params_t const *p_hvx_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_HVX) : "r0" ); }
# 636 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 636 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 672 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 672 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 672 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 672 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 672 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_service_changed(uint16_t conn_handle, uint16_t start_handle, uint16_t end_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SERVICE_CHANGED) : "r0" ); }
# 672 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 672 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 705 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 705 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 705 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 705 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 705 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_rw_authorize_reply(uint16_t conn_handle, ble_gatts_rw_authorize_reply_params_t const *p_rw_authorize_reply_params) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_RW_AUTHORIZE_REPLY) : "r0" ); }
# 705 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 705 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 749 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 749 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 749 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 749 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 749 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_sys_attr_set(uint16_t conn_handle, uint8_t const *p_sys_attr_data, uint16_t len, uint32_t flags) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SYS_ATTR_SET) : "r0" ); }
# 749 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 749 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 782 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 782 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 782 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 782 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 782 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_sys_attr_get(uint16_t conn_handle, uint8_t *p_sys_attr_data, uint16_t *p_len, uint32_t flags) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_SYS_ATTR_GET) : "r0" ); }
# 782 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 782 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 792 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 792 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 792 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 792 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 792 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_initial_user_handle_get(uint16_t *p_handle) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_INITIAL_USER_HANDLE_GET) : "r0" ); }
# 792 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 792 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 805 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 805 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 805 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 805 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 805 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_attr_get(uint16_t handle, ble_uuid_t * p_uuid, ble_gatts_attr_md_t * p_md) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_ATTR_GET) : "r0" ); }
# 805 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 805 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 835 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 835 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic push
# 835 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"

# 835 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 835 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_gatts_exchange_mtu_reply(uint16_t conn_handle, uint16_t server_rx_mtu) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_GATTS_EXCHANGE_MTU_REPLY) : "r0" ); }
# 835 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
#pragma GCC diagnostic pop
# 835 "../../../../../../components/softdevice/s132/headers/ble_gatts.h"
 ;
# 61 "../../../../../../components/softdevice/s132/headers/ble.h" 2
# 72 "../../../../../../components/softdevice/s132/headers/ble.h"
enum BLE_COMMON_SVCS
{
  SD_BLE_ENABLE = 0x60,
  SD_BLE_EVT_GET,
  SD_BLE_UUID_VS_ADD,
  SD_BLE_UUID_DECODE,
  SD_BLE_UUID_ENCODE,
  SD_BLE_VERSION_GET,
  SD_BLE_USER_MEM_REPLY,
  SD_BLE_OPT_SET,
  SD_BLE_OPT_GET,
  SD_BLE_CFG_SET,
  SD_BLE_UUID_VS_REMOVE,
};




enum BLE_COMMON_EVTS
{
  BLE_EVT_USER_MEM_REQUEST = 0x01 + 0,
  BLE_EVT_USER_MEM_RELEASE = 0x01 + 1,
};





enum BLE_CONN_CFGS
{
    BLE_CONN_CFG_GAP = 0x20 + 0,
    BLE_CONN_CFG_GATTC = 0x20 + 1,
    BLE_CONN_CFG_GATTS = 0x20 + 2,
    BLE_CONN_CFG_GATT = 0x20 + 3,
    BLE_CONN_CFG_L2CAP = 0x20 + 4,
};





enum BLE_COMMON_CFGS
{
  BLE_COMMON_CFG_VS_UUID = 0x01,
};




enum BLE_COMMON_OPTS
{
  BLE_COMMON_OPT_PA_LNA = 0x01 + 0,
  BLE_COMMON_OPT_CONN_EVT_EXT = 0x01 + 1,
  BLE_COMMON_OPT_EXTENDED_RC_CAL = 0x01 + 2,
};
# 175 "../../../../../../components/softdevice/s132/headers/ble.h"
typedef struct
{
  uint8_t *p_mem;
  uint16_t len;
} ble_user_mem_block_t;


typedef struct
{
  uint8_t type;
} ble_evt_user_mem_request_t;


typedef struct
{
  uint8_t type;
  ble_user_mem_block_t mem_block;
} ble_evt_user_mem_release_t;


typedef struct
{
  uint16_t conn_handle;
  union
  {
    ble_evt_user_mem_request_t user_mem_request;
    ble_evt_user_mem_release_t user_mem_release;
  } params;
} ble_common_evt_t;


typedef struct
{
  uint16_t evt_id;
  uint16_t evt_len;
} ble_evt_hdr_t;


typedef struct
{
  ble_evt_hdr_t header;
  union
  {
    ble_common_evt_t common_evt;
    ble_gap_evt_t gap_evt;
    ble_gattc_evt_t gattc_evt;
    ble_gatts_evt_t gatts_evt;
    ble_l2cap_evt_t l2cap_evt;
  } evt;
} ble_evt_t;





typedef struct
{
  uint8_t version_number;
  uint16_t company_id;
  uint16_t subversion_number;
} ble_version_t;




typedef struct
{
     uint8_t enable :1;
     uint8_t active_high :1;
     uint8_t gpio_pin :6;
} ble_pa_lna_cfg_t;
# 260 "../../../../../../components/softdevice/s132/headers/ble.h"
typedef struct
{
   ble_pa_lna_cfg_t pa_cfg;
   ble_pa_lna_cfg_t lna_cfg;

   uint8_t ppi_ch_id_set;
   uint8_t ppi_ch_id_clr;
   uint8_t gpiote_ch_id;
} ble_common_opt_pa_lna_t;
# 281 "../../../../../../components/softdevice/s132/headers/ble.h"
typedef struct
{
   uint8_t enable : 1;
} ble_common_opt_conn_evt_ext_t;
# 301 "../../../../../../components/softdevice/s132/headers/ble.h"
typedef struct
{
   uint8_t enable : 1;
} ble_common_opt_extended_rc_cal_t;


typedef union
{
  ble_common_opt_pa_lna_t pa_lna;
  ble_common_opt_conn_evt_ext_t conn_evt_ext;
  ble_common_opt_extended_rc_cal_t extended_rc_cal;
} ble_common_opt_t;


typedef union
{
  ble_common_opt_t common_opt;
  ble_gap_opt_t gap_opt;
} ble_opt_t;
# 338 "../../../../../../components/softdevice/s132/headers/ble.h"
typedef struct
{
  uint8_t conn_cfg_tag;



  union {
    ble_gap_conn_cfg_t gap_conn_cfg;
    ble_gattc_conn_cfg_t gattc_conn_cfg;
    ble_gatts_conn_cfg_t gatts_conn_cfg;
    ble_gatt_conn_cfg_t gatt_conn_cfg;
    ble_l2cap_conn_cfg_t l2cap_conn_cfg;
  } params;
} ble_conn_cfg_t;






typedef struct
{
  uint8_t vs_uuid_count;


} ble_common_cfg_vs_uuid_t;


typedef union
{
  ble_common_cfg_vs_uuid_t vs_uuid_cfg;
} ble_common_cfg_t;


typedef union
{
  ble_conn_cfg_t conn_cfg;
  ble_common_cfg_t common_cfg;
  ble_gap_cfg_t gap_cfg;
  ble_gatts_cfg_t gatts_cfg;
} ble_cfg_t;
# 417 "../../../../../../components/softdevice/s132/headers/ble.h"

# 417 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 417 "../../../../../../components/softdevice/s132/headers/ble.h"

# 417 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 417 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_enable(uint32_t * p_app_ram_base) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_ENABLE) : "r0" ); }
# 417 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 417 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 453 "../../../../../../components/softdevice/s132/headers/ble.h"

# 453 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 453 "../../../../../../components/softdevice/s132/headers/ble.h"

# 453 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 453 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_cfg_set(uint32_t cfg_id, ble_cfg_t const * p_cfg, uint32_t app_ram_base) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_CFG_SET) : "r0" ); }
# 453 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 453 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 491 "../../../../../../components/softdevice/s132/headers/ble.h"

# 491 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 491 "../../../../../../components/softdevice/s132/headers/ble.h"

# 491 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 491 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_evt_get(uint8_t *p_dest, uint16_t *p_len) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_EVT_GET) : "r0" ); }
# 491 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 491 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 520 "../../../../../../components/softdevice/s132/headers/ble.h"

# 520 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 520 "../../../../../../components/softdevice/s132/headers/ble.h"

# 520 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 520 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_vs_add(ble_uuid128_t const *p_vs_uuid, uint8_t *p_uuid_type) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_VS_ADD) : "r0" ); }
# 520 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 520 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 542 "../../../../../../components/softdevice/s132/headers/ble.h"

# 542 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 542 "../../../../../../components/softdevice/s132/headers/ble.h"

# 542 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 542 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_vs_remove(uint8_t *p_uuid_type) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_VS_REMOVE) : "r0" ); }
# 542 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 542 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 563 "../../../../../../components/softdevice/s132/headers/ble.h"

# 563 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 563 "../../../../../../components/softdevice/s132/headers/ble.h"

# 563 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 563 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_decode(uint8_t uuid_le_len, uint8_t const *p_uuid_le, ble_uuid_t *p_uuid) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_DECODE) : "r0" ); }
# 563 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 563 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 578 "../../../../../../components/softdevice/s132/headers/ble.h"

# 578 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 578 "../../../../../../components/softdevice/s132/headers/ble.h"

# 578 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 578 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_uuid_encode(ble_uuid_t const *p_uuid, uint8_t *p_uuid_le_len, uint8_t *p_uuid_le) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_UUID_ENCODE) : "r0" ); }
# 578 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 578 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 591 "../../../../../../components/softdevice/s132/headers/ble.h"

# 591 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 591 "../../../../../../components/softdevice/s132/headers/ble.h"

# 591 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 591 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_version_get(ble_version_t *p_version) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_VERSION_GET) : "r0" ); }
# 591 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 591 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 617 "../../../../../../components/softdevice/s132/headers/ble.h"

# 617 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 617 "../../../../../../components/softdevice/s132/headers/ble.h"

# 617 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 617 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_user_mem_reply(uint16_t conn_handle, ble_user_mem_block_t const *p_block) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_USER_MEM_REPLY) : "r0" ); }
# 617 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 617 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 637 "../../../../../../components/softdevice/s132/headers/ble.h"

# 637 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 637 "../../../../../../components/softdevice/s132/headers/ble.h"

# 637 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 637 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_opt_set(uint32_t opt_id, ble_opt_t const *p_opt) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_OPT_SET) : "r0" ); }
# 637 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 637 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 656 "../../../../../../components/softdevice/s132/headers/ble.h"

# 656 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic push
# 656 "../../../../../../components/softdevice/s132/headers/ble.h"

# 656 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 656 "../../../../../../components/softdevice/s132/headers/ble.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ble_opt_get(uint32_t opt_id, ble_opt_t *p_opt) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_BLE_OPT_GET) : "r0" ); }
# 656 "../../../../../../components/softdevice/s132/headers/ble.h"
#pragma GCC diagnostic pop
# 656 "../../../../../../components/softdevice/s132/headers/ble.h"
 ;
# 62 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_hci.h" 1
# 63 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/ble/common/ble_srv_common.h" 1
# 53 "../../../../../../components/ble/common/ble_srv_common.h"
# 1 "../../../../../../components/softdevice/s132/headers/ble_types.h" 1
# 54 "../../../../../../components/ble/common/ble_srv_common.h" 2
# 1 "../../../../../../components/libraries/util/app_util.h" 1
# 54 "../../../../../../components/libraries/util/app_util.h"
# 1 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stddef.h" 1 3 4
# 62 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stddef.h" 3 4

# 62 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 77 "/Applications/SEGGER Embedded Studio for ARM 4.12/include/stddef.h" 3 4
typedef unsigned wchar_t;
# 55 "../../../../../../components/libraries/util/app_util.h" 2
# 1 "../../../../../../modules/nrfx/mdk/compiler_abstraction.h" 1
# 56 "../../../../../../components/libraries/util/app_util.h" 2
# 83 "../../../../../../components/libraries/util/app_util.h"

# 83 "../../../../../../components/libraries/util/app_util.h"
extern uint32_t __StackTop;
extern uint32_t __StackLimit;
# 114 "../../../../../../components/libraries/util/app_util.h"
extern uint32_t * _vectors;
extern uint32_t __FLASH_segment_used_end__;
# 132 "../../../../../../components/libraries/util/app_util.h"
enum
{
    UNIT_0_625_MS = 625,
    UNIT_1_25_MS = 1250,
    UNIT_10_MS = 10000
};
# 302 "../../../../../../components/libraries/util/app_util.h"
typedef uint8_t uint16_le_t[2];


typedef uint8_t uint32_le_t[4];


typedef struct
{
    uint16_t size;
    uint8_t * p_data;
} uint8_array_t;
# 1008 "../../../../../../components/libraries/util/app_util.h"
static inline uint64_t value_rescale(uint32_t value, uint32_t old_unit_reversal, uint16_t new_unit_reversal)
{
    return (uint64_t)((((uint64_t)value * new_unit_reversal) + ((old_unit_reversal) / 2)) / (old_unit_reversal));
}
# 1020 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0xFF00) >> 8);
    return sizeof(uint16_t);
}
# 1034 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint24_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    return 3;
}
# 1049 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint32_encode(uint32_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x0000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x00FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0xFF000000) >> 24);
    return sizeof(uint32_t);
}
# 1065 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint40_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x00000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x0000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x00FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0xFF00000000) >> 32);
    return 5;
}
# 1082 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint48_encode(uint64_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) ((value & 0x0000000000FF) >> 0);
    p_encoded_data[1] = (uint8_t) ((value & 0x00000000FF00) >> 8);
    p_encoded_data[2] = (uint8_t) ((value & 0x000000FF0000) >> 16);
    p_encoded_data[3] = (uint8_t) ((value & 0x0000FF000000) >> 24);
    p_encoded_data[4] = (uint8_t) ((value & 0x00FF00000000) >> 32);
    p_encoded_data[5] = (uint8_t) ((value & 0xFF0000000000) >> 40);
    return 6;
}







static inline uint16_t uint16_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0])) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1]) << 8 ));
}







static inline uint16_t uint16_big_decode(const uint8_t * p_encoded_data)
{
        return ( (((uint16_t)((uint8_t *)p_encoded_data)[0]) << 8 ) |
                 (((uint16_t)((uint8_t *)p_encoded_data)[1])) );
}







static inline uint32_t uint24_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16));
}







static inline uint32_t uint32_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 24 ));
}







static inline uint32_t uint32_big_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint32_t)((uint8_t *)p_encoded_data)[0]) << 24) |
             (((uint32_t)((uint8_t *)p_encoded_data)[1]) << 16) |
             (((uint32_t)((uint8_t *)p_encoded_data)[2]) << 8) |
             (((uint32_t)((uint8_t *)p_encoded_data)[3]) << 0) );
}
# 1166 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint16_big_encode(uint16_t value, uint8_t * p_encoded_data)
{
    p_encoded_data[0] = (uint8_t) (value >> 8);
    p_encoded_data[1] = (uint8_t) (value & 0xFF);

    return sizeof(uint16_t);
}
# 1183 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t uint32_big_encode(uint32_t value, uint8_t * p_encoded_data)
{
    *(uint32_t *)p_encoded_data = __REV(value);
    return sizeof(uint32_t);
}







static inline uint64_t uint40_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32 ));
}







static inline uint64_t uint48_decode(const uint8_t * p_encoded_data)
{
    return ( (((uint64_t)((uint8_t *)p_encoded_data)[0]) << 0) |
             (((uint64_t)((uint8_t *)p_encoded_data)[1]) << 8) |
             (((uint64_t)((uint8_t *)p_encoded_data)[2]) << 16) |
             (((uint64_t)((uint8_t *)p_encoded_data)[3]) << 24) |
             (((uint64_t)((uint8_t *)p_encoded_data)[4]) << 32) |
             (((uint64_t)((uint8_t *)p_encoded_data)[5]) << 40 ));
}
# 1240 "../../../../../../components/libraries/util/app_util.h"
static inline uint8_t battery_level_in_percent(const uint16_t mvolts)
{
    uint8_t battery_level;

    if (mvolts >= 3000)
    {
        battery_level = 100;
    }
    else if (mvolts > 2900)
    {
        battery_level = 100 - ((3000 - mvolts) * 58) / 100;
    }
    else if (mvolts > 2740)
    {
        battery_level = 42 - ((2900 - mvolts) * 24) / 160;
    }
    else if (mvolts > 2440)
    {
        battery_level = 18 - ((2740 - mvolts) * 12) / 300;
    }
    else if (mvolts > 2100)
    {
        battery_level = 6 - ((2440 - mvolts) * 6) / 340;
    }
    else
    {
        battery_level = 0;
    }

    return battery_level;
}







static inline 
# 1278 "../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1278 "../../../../../../components/libraries/util/app_util.h"
                    is_word_aligned(void const* p)
{
    return (((uintptr_t)p & 0x03) == 0);
}
# 1291 "../../../../../../components/libraries/util/app_util.h"
static inline 
# 1291 "../../../../../../components/libraries/util/app_util.h" 3 4
               _Bool 
# 1291 "../../../../../../components/libraries/util/app_util.h"
                    is_address_from_stack(void * ptr)
{
    if (((uint32_t)ptr >= (uint32_t)&__StackLimit) &&
        ((uint32_t)ptr < (uint32_t)&__StackTop) )
    {
        return 
# 1296 "../../../../../../components/libraries/util/app_util.h" 3 4
              1
# 1296 "../../../../../../components/libraries/util/app_util.h"
                  ;
    }
    else
    {
        return 
# 1300 "../../../../../../components/libraries/util/app_util.h" 3 4
              0
# 1300 "../../../../../../components/libraries/util/app_util.h"
                   ;
    }
}
# 55 "../../../../../../components/ble/common/ble_srv_common.h" 2

# 1 "../../../../../../components/softdevice/s132/headers/ble_gap.h" 1
# 57 "../../../../../../components/ble/common/ble_srv_common.h" 2
# 1 "../../../../../../components/softdevice/s132/headers/ble_gatt.h" 1
# 58 "../../../../../../components/ble/common/ble_srv_common.h" 2
# 210 "../../../../../../components/ble/common/ble_srv_common.h"
typedef void (*ble_srv_error_handler_t) (uint32_t nrf_error);
# 219 "../../../../../../components/ble/common/ble_srv_common.h"
typedef struct
{
    uint8_t report_id;
    uint8_t report_type;
} ble_srv_report_ref_t;





typedef struct
{
    uint16_t length;
    uint8_t * p_str;
} ble_srv_utf8_str_t;






typedef struct
{
    ble_gap_conn_sec_mode_t read_perm;
    ble_gap_conn_sec_mode_t write_perm;
} ble_srv_security_mode_t;





typedef struct
{
    ble_gap_conn_sec_mode_t cccd_write_perm;
    ble_gap_conn_sec_mode_t read_perm;
    ble_gap_conn_sec_mode_t write_perm;
} ble_srv_cccd_security_mode_t;
# 265 "../../../../../../components/ble/common/ble_srv_common.h"

# 265 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
_Bool 
# 265 "../../../../../../components/ble/common/ble_srv_common.h"
    ble_srv_is_notification_enabled(uint8_t const * p_encoded_data);
# 276 "../../../../../../components/ble/common/ble_srv_common.h"

# 276 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
_Bool 
# 276 "../../../../../../components/ble/common/ble_srv_common.h"
    ble_srv_is_indication_enabled(uint8_t const * p_encoded_data);
# 286 "../../../../../../components/ble/common/ble_srv_common.h"
uint8_t ble_srv_report_ref_encode(uint8_t * p_encoded_buffer,
                                  const ble_srv_report_ref_t * p_report_ref);






void ble_srv_ascii_to_utf8(ble_srv_utf8_str_t * p_utf8, char * p_ascii);





typedef enum
{
    SEC_NO_ACCESS = 0,
    SEC_OPEN = 1,
    SEC_JUST_WORKS = 2,
    SEC_MITM = 3,
    SEC_SIGNED = 4,
    SEC_SIGNED_MITM = 5
}security_req_t;





typedef struct
{
    uint16_t max_size;
    uint16_t size;
    uint8_t *p_char_user_desc;
    
# 319 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 319 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_var_len;
    ble_gatt_char_props_t char_props;
    
# 321 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 321 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_defered_read;
    
# 322 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 322 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_defered_write;
    security_req_t read_access;
    security_req_t write_access;
    
# 325 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 325 "../../../../../../components/ble/common/ble_srv_common.h"
                          is_value_user;
}ble_add_char_user_desc_t;





typedef struct
{
    uint16_t uuid;
    uint8_t uuid_type;
    uint16_t max_len;
    uint16_t init_len;
    uint8_t * p_init_value;
    
# 339 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 339 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_var_len;
    ble_gatt_char_props_t char_props;
    ble_gatt_char_ext_props_t char_ext_props;
    
# 342 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 342 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_defered_read;
    
# 343 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 343 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_defered_write;
    security_req_t read_access;
    security_req_t write_access;
    security_req_t cccd_write_access;
    
# 347 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 347 "../../../../../../components/ble/common/ble_srv_common.h"
                               is_value_user;
    ble_add_char_user_desc_t *p_user_descr;
    ble_gatts_char_pf_t *p_presentation_format;
} ble_add_char_params_t;





typedef struct
{
    uint16_t uuid;
    uint8_t uuid_type;
    
# 360 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 360 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_defered_read;
    
# 361 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 361 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_defered_write;
    
# 362 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 362 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_var_len;
    security_req_t read_access;
    security_req_t write_access;
    
# 365 "../../../../../../components/ble/common/ble_srv_common.h" 3 4
   _Bool 
# 365 "../../../../../../components/ble/common/ble_srv_common.h"
                  is_value_user;
    uint16_t init_len;
    uint16_t init_offs;
    uint16_t max_len;
    uint8_t* p_value;
} ble_add_descr_params_t;
# 384 "../../../../../../components/ble/common/ble_srv_common.h"
uint32_t characteristic_add(uint16_t service_handle,
                            ble_add_char_params_t * p_char_props,
                            ble_gatts_char_handles_t * p_char_handle);
# 397 "../../../../../../components/ble/common/ble_srv_common.h"
uint32_t descriptor_add(uint16_t char_handle,
                        ble_add_descr_params_t * p_descr_props,
                        uint16_t * p_descr_handle);
# 64 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/ble/common/ble_advdata.h" 1
# 56 "../../../../../../components/ble/common/ble_advdata.h"
# 1 "../../../../../../components/libraries/util/sdk_common.h" 1
# 56 "../../../../../../components/libraries/util/sdk_common.h"
# 1 "./sdk_config.h" 1
# 57 "../../../../../../components/libraries/util/sdk_common.h" 2


# 1 "../../../../../../components/libraries/util/sdk_os.h" 1
# 60 "../../../../../../components/libraries/util/sdk_common.h" 2

# 1 "../../../../../../components/libraries/util/app_util.h" 1
# 62 "../../../../../../components/libraries/util/sdk_common.h" 2
# 1 "../../../../../../components/libraries/util/sdk_macros.h" 1
# 52 "../../../../../../components/libraries/util/sdk_macros.h"
# 1 "../../../../../../components/libraries/util/nrf_assert.h" 1
# 75 "../../../../../../components/libraries/util/nrf_assert.h"
void assert_nrf_callback(uint16_t line_num, const uint8_t *file_name);
# 53 "../../../../../../components/libraries/util/sdk_macros.h" 2
# 63 "../../../../../../components/libraries/util/sdk_common.h" 2
# 57 "../../../../../../components/ble/common/ble_advdata.h" 2
# 91 "../../../../../../components/ble/common/ble_advdata.h"
typedef struct
{
  uint8_t tk[16];
} ble_advdata_tk_value_t;



typedef enum
{
    BLE_ADVDATA_ROLE_NOT_PRESENT = 0,
    BLE_ADVDATA_ROLE_ONLY_PERIPH,
    BLE_ADVDATA_ROLE_ONLY_CENTRAL,
    BLE_ADVDATA_ROLE_BOTH_PERIPH_PREFERRED,
    BLE_ADVDATA_ROLE_BOTH_CENTRAL_PREFERRED
} ble_advdata_le_role_t;



typedef enum
{
    BLE_ADVDATA_NO_NAME,
    BLE_ADVDATA_SHORT_NAME,
    BLE_ADVDATA_FULL_NAME
} ble_advdata_name_type_t;


typedef struct
{
    uint16_t uuid_cnt;
    ble_uuid_t * p_uuids;
} ble_advdata_uuid_list_t;


typedef struct
{
    uint16_t min_conn_interval;
    uint16_t max_conn_interval;
} ble_advdata_conn_int_t;


typedef struct
{
    uint16_t company_identifier;
    uint8_array_t data;
} ble_advdata_manuf_data_t;


typedef struct
{
    uint16_t service_uuid;
    uint8_array_t data;
} ble_advdata_service_data_t;



typedef struct
{
    ble_advdata_name_type_t name_type;
    uint8_t short_name_len;
    
# 150 "../../../../../../components/ble/common/ble_advdata.h" 3 4
   _Bool 
# 150 "../../../../../../components/ble/common/ble_advdata.h"
                                include_appearance;
    uint8_t flags;
    int8_t * p_tx_power_level;
    ble_advdata_uuid_list_t uuids_more_available;
    ble_advdata_uuid_list_t uuids_complete;
    ble_advdata_uuid_list_t uuids_solicited;
    ble_advdata_conn_int_t * p_slave_conn_int;
    ble_advdata_manuf_data_t * p_manuf_specific_data;
    ble_advdata_service_data_t * p_service_data_array;
    uint8_t service_data_count;
    
# 160 "../../../../../../components/ble/common/ble_advdata.h" 3 4
   _Bool 
# 160 "../../../../../../components/ble/common/ble_advdata.h"
                                include_ble_device_addr;
    ble_advdata_le_role_t le_role;
    ble_advdata_tk_value_t * p_tk_value;
    uint8_t * p_sec_mgr_oob_flags;
    ble_gap_lesc_oob_data_t * p_lesc_data;
} ble_advdata_t;
# 195 "../../../../../../components/ble/common/ble_advdata.h"
ret_code_t ble_advdata_encode(ble_advdata_t const * const p_advdata,
                              uint8_t * const p_encoded_data,
                              uint16_t * const p_len);
# 226 "../../../../../../components/ble/common/ble_advdata.h"
uint16_t ble_advdata_search(uint8_t const * p_encoded_data,
                            uint16_t data_len,
                            uint16_t * p_offset,
                            uint8_t ad_type);
# 248 "../../../../../../components/ble/common/ble_advdata.h"
uint8_t * ble_advdata_parse(uint8_t * p_encoded_data,
                            uint16_t data_len,
                            uint8_t ad_type);
# 263 "../../../../../../components/ble/common/ble_advdata.h"

# 263 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 263 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_name_find(uint8_t const * p_encoded_data,
                           uint16_t data_len,
                           char const * p_target_name);
# 285 "../../../../../../components/ble/common/ble_advdata.h"

# 285 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 285 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_short_name_find(uint8_t const * p_encoded_data,
                                 uint16_t data_len,
                                 char const * p_target_name,
                                 uint8_t const short_name_min_len);
# 300 "../../../../../../components/ble/common/ble_advdata.h"

# 300 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 300 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_uuid_find(uint8_t const * p_encoded_data,
                           uint16_t data_len,
                           ble_uuid_t const * p_target_uuid);
# 315 "../../../../../../components/ble/common/ble_advdata.h"

# 315 "../../../../../../components/ble/common/ble_advdata.h" 3 4
_Bool 
# 315 "../../../../../../components/ble/common/ble_advdata.h"
    ble_advdata_appearance_find(uint8_t const * p_encoded_data,
                                 uint16_t data_len,
                                 uint16_t const * p_target_appearance);
# 65 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 1
# 63 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
# 1 "../../../../../../components/softdevice/s132/headers/ble_gattc.h" 1
# 64 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 2
# 86 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
typedef enum
{
    BLE_ADV_MODE_IDLE,
    BLE_ADV_MODE_DIRECTED_HIGH_DUTY,
    BLE_ADV_MODE_DIRECTED,
    BLE_ADV_MODE_FAST,
    BLE_ADV_MODE_SLOW,
} ble_adv_mode_t;
# 102 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
typedef enum
{
    BLE_ADV_EVT_IDLE,
    BLE_ADV_EVT_DIRECTED_HIGH_DUTY,
    BLE_ADV_EVT_DIRECTED,
    BLE_ADV_EVT_FAST,
    BLE_ADV_EVT_SLOW,
    BLE_ADV_EVT_FAST_WHITELIST,
    BLE_ADV_EVT_SLOW_WHITELIST,
    BLE_ADV_EVT_WHITELIST_REQUEST,
    BLE_ADV_EVT_PEER_ADDR_REQUEST
} ble_adv_evt_t;






typedef struct
{
    
# 122 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 122 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_on_disconnect_disabled;
    
# 123 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 123 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_whitelist_enabled;
    
# 124 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 124 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_directed_high_duty_enabled;
    
# 125 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 125 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_directed_enabled;
    
# 126 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 126 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_fast_enabled;
    
# 127 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 127 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_slow_enabled;
    uint32_t ble_adv_directed_interval;
    uint32_t ble_adv_directed_timeout;
    uint32_t ble_adv_fast_interval;
    uint32_t ble_adv_fast_timeout;
    uint32_t ble_adv_slow_interval;
    uint32_t ble_adv_slow_timeout;
    
# 134 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 134 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            ble_adv_extended_enabled;
    uint32_t ble_adv_secondary_phy;
    uint32_t ble_adv_primary_phy;
} ble_adv_modes_config_t;


typedef void (*ble_adv_evt_handler_t) (ble_adv_evt_t const adv_evt);


typedef void (*ble_adv_error_handler_t) (uint32_t nrf_error);

typedef struct
{
    
# 147 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 147 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           initialized;
    
# 148 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 148 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           advertising_start_pending;
    ble_adv_mode_t adv_mode_current;
    ble_adv_modes_config_t adv_modes_config;
    uint8_t conn_cfg_tag;

    ble_adv_evt_t adv_evt;
    ble_adv_evt_handler_t evt_handler;
    ble_adv_error_handler_t error_handler;

    ble_gap_adv_params_t adv_params;
    uint8_t adv_handle;


    uint8_t enc_advdata[(238)];
    uint8_t enc_scan_rsp_data[(238)];





    ble_gap_adv_data_t adv_data;
    ble_gap_adv_data_t *p_adv_data;

    uint16_t current_slave_link_conn_handle;
    ble_gap_addr_t peer_address;
    
# 173 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 173 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           peer_addr_reply_expected;
    
# 174 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 174 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           whitelist_temporarily_disabled;
    
# 175 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 175 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           whitelist_reply_expected;
    
# 176 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 176 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                           whitelist_in_use;
} ble_advertising_t;

typedef struct
{
    uint32_t interval;
    uint32_t timeout;
    
# 183 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
   _Bool 
# 183 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
            enabled;
} ble_adv_mode_config_t;





typedef struct
{
    ble_advdata_t advdata;
    ble_advdata_t srdata;
    ble_adv_modes_config_t config;
    ble_adv_evt_handler_t evt_handler;
    ble_adv_error_handler_t error_handler;
} ble_advertising_init_t;
# 208 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
void ble_advertising_on_ble_evt(ble_evt_t const * p_ble_evt, void * p_adv);
# 219 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
void ble_advertising_on_sys_evt(uint32_t sys_evt, void * p_adv);
# 241 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_init(ble_advertising_t * const p_advertising,
                              ble_advertising_init_t const * const p_init);
# 253 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
void ble_advertising_conn_cfg_tag_set(ble_advertising_t * const p_advertising, uint8_t ble_cfg_tag);
# 266 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_start(ble_advertising_t * const p_advertising,
                               ble_adv_mode_t advertising_mode);
# 282 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_peer_addr_reply(ble_advertising_t * const p_advertising,
                                         ble_gap_addr_t * p_peer_addr);
# 302 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_whitelist_reply(ble_advertising_t * const p_advertising,
                                         ble_gap_addr_t const * p_gap_addrs,
                                         uint32_t addr_cnt,
                                         ble_gap_irk_t const * p_gap_irks,
                                         uint32_t irk_cnt);
# 318 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
uint32_t ble_advertising_restart_without_whitelist(ble_advertising_t * const p_advertising);
# 335 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
void ble_advertising_modes_config_set(ble_advertising_t * const p_advertising,
                                      ble_adv_modes_config_t const * const p_adv_modes_config);
# 354 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
ret_code_t ble_advertising_advdata_update(ble_advertising_t * const p_advertising,
                                          ble_gap_adv_data_t * const p_new_advdata_buf,
                                          
# 356 "../../../../../../components/ble/ble_advertising/ble_advertising.h" 3 4
                                         _Bool 
# 356 "../../../../../../components/ble/ble_advertising/ble_advertising.h"
                                                                    permanent);
# 66 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/ble/common/ble_conn_params.h" 1
# 53 "../../../../../../components/ble/common/ble_conn_params.h"
# 1 "../../../../../../components/ble/common/ble_srv_common.h" 1
# 54 "../../../../../../components/ble/common/ble_conn_params.h" 2
# 1 "../../../../../../components/libraries/util/sdk_errors.h" 1
# 55 "../../../../../../components/ble/common/ble_conn_params.h" 2






typedef enum
{
    BLE_CONN_PARAMS_EVT_FAILED,
    BLE_CONN_PARAMS_EVT_SUCCEEDED
} ble_conn_params_evt_type_t;


typedef struct
{
    ble_conn_params_evt_type_t evt_type;
    uint16_t conn_handle;
} ble_conn_params_evt_t;


typedef void (*ble_conn_params_evt_handler_t) (ble_conn_params_evt_t * p_evt);



typedef struct
{
    ble_gap_conn_params_t * p_conn_params;
    uint32_t first_conn_params_update_delay;
    uint32_t next_conn_params_update_delay;
    uint8_t max_conn_params_update_count;
    uint16_t start_on_notify_cccd_handle;
    
# 86 "../../../../../../components/ble/common/ble_conn_params.h" 3 4
   _Bool 
# 86 "../../../../../../components/ble/common/ble_conn_params.h"
                                 disconnect_on_fail;
    ble_conn_params_evt_handler_t evt_handler;
    ble_srv_error_handler_t error_handler;
} ble_conn_params_init_t;
# 106 "../../../../../../components/ble/common/ble_conn_params.h"
ret_code_t ble_conn_params_init(const ble_conn_params_init_t * p_init);
# 122 "../../../../../../components/ble/common/ble_conn_params.h"
ret_code_t ble_conn_params_stop(void);
# 147 "../../../../../../components/ble/common/ble_conn_params.h"
ret_code_t ble_conn_params_change_conn_params(uint16_t conn_handle,
                                              ble_gap_conn_params_t * p_new_params);
# 67 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/softdevice/common/nrf_sdh.h" 1
# 55 "../../../../../../components/softdevice/common/nrf_sdh.h"
# 1 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h" 1
# 45 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
# 1 "../../../../../../components/libraries/experimental_section_vars/nrf_section.h" 1
# 46 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h" 2
# 1 "../../../../../../components/libraries/util/nrf_assert.h" 1
# 47 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h" 2
# 61 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
typedef struct
{
    void * p_start;
    void * p_end;
} nrf_section_t;



typedef struct
{

    nrf_section_t section;
# 82 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
    size_t item_size;
} nrf_section_set_t;



typedef struct
{
    nrf_section_set_t const * p_set;
# 98 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
    void * p_item;
} nrf_section_iter_t;
# 178 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
void nrf_section_iter_init(nrf_section_iter_t * p_iter, nrf_section_set_t const * p_set);






void nrf_section_iter_next(nrf_section_iter_t * p_iter);
# 194 "../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"
static inline void * nrf_section_iter_get(nrf_section_iter_t const * p_iter)
{
    if (0) { if (p_iter) { } else { assert_nrf_callback((uint16_t)196, (uint8_t *)"../../../../../../components/libraries/experimental_section_vars/nrf_section_iter.h"); } };
    return p_iter->p_item;
}
# 56 "../../../../../../components/softdevice/common/nrf_sdh.h" 2
# 90 "../../../../../../components/softdevice/common/nrf_sdh.h"
typedef enum
{
    NRF_SDH_EVT_ENABLE_REQUEST,
    NRF_SDH_EVT_DISABLE_REQUEST,
} nrf_sdh_req_evt_t;







typedef 
# 102 "../../../../../../components/softdevice/common/nrf_sdh.h" 3 4
       _Bool 
# 102 "../../../../../../components/softdevice/common/nrf_sdh.h"
            (*nrf_sdh_req_evt_handler_t)(nrf_sdh_req_evt_t request, void * p_context);


typedef struct
{
    nrf_sdh_req_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_req_observer_t;
# 142 "../../../../../../components/softdevice/common/nrf_sdh.h"
typedef enum
{
    NRF_SDH_EVT_STATE_ENABLE_PREPARE,
    NRF_SDH_EVT_STATE_ENABLED,
    NRF_SDH_EVT_STATE_DISABLE_PREPARE,
    NRF_SDH_EVT_STATE_DISABLED,
} nrf_sdh_state_evt_t;


typedef void (*nrf_sdh_state_evt_handler_t)(nrf_sdh_state_evt_t state, void * p_context);


typedef struct
{
    nrf_sdh_state_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_state_observer_t;
# 188 "../../../../../../components/softdevice/common/nrf_sdh.h"
typedef void (*nrf_sdh_stack_evt_handler_t)(void * p_evt);


typedef struct
{
    nrf_sdh_stack_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_stack_observer_t;
# 231 "../../../../../../components/softdevice/common/nrf_sdh.h"
ret_code_t nrf_sdh_enable_request(void);
# 246 "../../../../../../components/softdevice/common/nrf_sdh.h"
ret_code_t nrf_sdh_disable_request(void);
# 258 "../../../../../../components/softdevice/common/nrf_sdh.h"
ret_code_t nrf_sdh_request_continue(void);








# 266 "../../../../../../components/softdevice/common/nrf_sdh.h" 3 4
_Bool 
# 266 "../../../../../../components/softdevice/common/nrf_sdh.h"
    nrf_sdh_is_enabled(void);







void nrf_sdh_suspend(void);



void nrf_sdh_resume(void);
# 287 "../../../../../../components/softdevice/common/nrf_sdh.h"

# 287 "../../../../../../components/softdevice/common/nrf_sdh.h" 3 4
_Bool 
# 287 "../../../../../../components/softdevice/common/nrf_sdh.h"
    nrf_sdh_is_suspended(void);
# 296 "../../../../../../components/softdevice/common/nrf_sdh.h"
void nrf_sdh_evts_poll(void);
# 68 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/softdevice/common/nrf_sdh_soc.h" 1
# 55 "../../../../../../components/softdevice/common/nrf_sdh_soc.h"
# 1 "../../../../../../components/softdevice/s132/headers/nrf_soc.h" 1
# 54 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
# 1 "../../../../../../components/softdevice/s132/headers/nrf_error_soc.h" 1
# 55 "../../../../../../components/softdevice/s132/headers/nrf_soc.h" 2
# 147 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
enum NRF_SOC_SVCS
{
  SD_PPI_CHANNEL_ENABLE_GET = (0x20),
  SD_PPI_CHANNEL_ENABLE_SET = (0x20) + 1,
  SD_PPI_CHANNEL_ENABLE_CLR = (0x20) + 2,
  SD_PPI_CHANNEL_ASSIGN = (0x20) + 3,
  SD_PPI_GROUP_TASK_ENABLE = (0x20) + 4,
  SD_PPI_GROUP_TASK_DISABLE = (0x20) + 5,
  SD_PPI_GROUP_ASSIGN = (0x20) + 6,
  SD_PPI_GROUP_GET = (0x20) + 7,
  SD_FLASH_PAGE_ERASE = (0x20) + 8,
  SD_FLASH_WRITE = (0x20) + 9,
  SD_FLASH_PROTECT = (0x20) + 10,
  SD_PROTECTED_REGISTER_WRITE = (0x20) + 11,
  SD_MUTEX_NEW = (0x2C),
  SD_MUTEX_ACQUIRE = (0x2C) + 1,
  SD_MUTEX_RELEASE = (0x2C) + 2,
  SD_RAND_APPLICATION_POOL_CAPACITY_GET = (0x2C) + 3,
  SD_RAND_APPLICATION_BYTES_AVAILABLE_GET = (0x2C) + 4,
  SD_RAND_APPLICATION_VECTOR_GET = (0x2C) + 5,
  SD_POWER_MODE_SET = (0x2C) + 6,
  SD_POWER_SYSTEM_OFF = (0x2C) + 7,
  SD_POWER_RESET_REASON_GET = (0x2C) + 8,
  SD_POWER_RESET_REASON_CLR = (0x2C) + 9,
  SD_POWER_POF_ENABLE = (0x2C) + 10,
  SD_POWER_POF_THRESHOLD_SET = (0x2C) + 11,
  SD_POWER_RAM_POWER_SET = (0x2C) + 13,
  SD_POWER_RAM_POWER_CLR = (0x2C) + 14,
  SD_POWER_RAM_POWER_GET = (0x2C) + 15,
  SD_POWER_GPREGRET_SET = (0x2C) + 16,
  SD_POWER_GPREGRET_CLR = (0x2C) + 17,
  SD_POWER_GPREGRET_GET = (0x2C) + 18,
  SD_POWER_DCDC_MODE_SET = (0x2C) + 19,
  SD_APP_EVT_WAIT = (0x2C) + 21,
  SD_CLOCK_HFCLK_REQUEST = (0x2C) + 22,
  SD_CLOCK_HFCLK_RELEASE = (0x2C) + 23,
  SD_CLOCK_HFCLK_IS_RUNNING = (0x2C) + 24,
  SD_RADIO_NOTIFICATION_CFG_SET = (0x2C) + 25,
  SD_ECB_BLOCK_ENCRYPT = (0x2C) + 26,
  SD_ECB_BLOCKS_ENCRYPT = (0x2C) + 27,
  SD_RADIO_SESSION_OPEN = (0x2C) + 28,
  SD_RADIO_SESSION_CLOSE = (0x2C) + 29,
  SD_RADIO_REQUEST = (0x2C) + 30,
  SD_EVT_GET = (0x2C) + 31,
  SD_TEMP_GET = (0x2C) + 32,
  SVC_SOC_LAST = (0x2C) + 37
};


enum NRF_MUTEX_VALUES
{
  NRF_MUTEX_FREE,
  NRF_MUTEX_TAKEN
};


enum NRF_POWER_MODES
{
  NRF_POWER_MODE_CONSTLAT,
  NRF_POWER_MODE_LOWPWR
};



enum NRF_POWER_THRESHOLDS
{
  NRF_POWER_THRESHOLD_V17 = 4UL,
  NRF_POWER_THRESHOLD_V18,
  NRF_POWER_THRESHOLD_V19,
  NRF_POWER_THRESHOLD_V20,
  NRF_POWER_THRESHOLD_V21,
  NRF_POWER_THRESHOLD_V22,
  NRF_POWER_THRESHOLD_V23,
  NRF_POWER_THRESHOLD_V24,
  NRF_POWER_THRESHOLD_V25,
  NRF_POWER_THRESHOLD_V26,
  NRF_POWER_THRESHOLD_V27,
  NRF_POWER_THRESHOLD_V28
};




enum NRF_POWER_DCDC_MODES
{
  NRF_POWER_DCDC_DISABLE,
  NRF_POWER_DCDC_ENABLE
};


enum NRF_RADIO_NOTIFICATION_DISTANCES
{
  NRF_RADIO_NOTIFICATION_DISTANCE_NONE = 0,
  NRF_RADIO_NOTIFICATION_DISTANCE_800US,
  NRF_RADIO_NOTIFICATION_DISTANCE_1740US,
  NRF_RADIO_NOTIFICATION_DISTANCE_2680US,
  NRF_RADIO_NOTIFICATION_DISTANCE_3620US,
  NRF_RADIO_NOTIFICATION_DISTANCE_4560US,
  NRF_RADIO_NOTIFICATION_DISTANCE_5500US
};



enum NRF_RADIO_NOTIFICATION_TYPES
{
  NRF_RADIO_NOTIFICATION_TYPE_NONE = 0,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_ACTIVE,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_INACTIVE,
  NRF_RADIO_NOTIFICATION_TYPE_INT_ON_BOTH,
};


enum NRF_RADIO_CALLBACK_SIGNAL_TYPE
{
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_START,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_TIMER0,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_RADIO,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_EXTEND_FAILED,
  NRF_RADIO_CALLBACK_SIGNAL_TYPE_EXTEND_SUCCEEDED
};






enum NRF_RADIO_SIGNAL_CALLBACK_ACTION
{
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_NONE,
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_EXTEND,





  NRF_RADIO_SIGNAL_CALLBACK_ACTION_END,
  NRF_RADIO_SIGNAL_CALLBACK_ACTION_REQUEST_AND_END
};


enum NRF_RADIO_HFCLK_CFG
{
  NRF_RADIO_HFCLK_CFG_XTAL_GUARANTEED,






  NRF_RADIO_HFCLK_CFG_NO_GUARANTEE




};


enum NRF_RADIO_PRIORITY
{
  NRF_RADIO_PRIORITY_HIGH,
  NRF_RADIO_PRIORITY_NORMAL,
};


enum NRF_RADIO_REQUEST_TYPE
{
  NRF_RADIO_REQ_TYPE_EARLIEST,
  NRF_RADIO_REQ_TYPE_NORMAL
};


enum NRF_SOC_EVTS
{
  NRF_EVT_HFCLKSTARTED,
  NRF_EVT_POWER_FAILURE_WARNING,
  NRF_EVT_FLASH_OPERATION_SUCCESS,
  NRF_EVT_FLASH_OPERATION_ERROR,
  NRF_EVT_RADIO_BLOCKED,
  NRF_EVT_RADIO_CANCELED,
  NRF_EVT_RADIO_SIGNAL_CALLBACK_INVALID_RETURN,
  NRF_EVT_RADIO_SESSION_IDLE,
  NRF_EVT_RADIO_SESSION_CLOSED,
  NRF_EVT_NUMBER_OF_EVTS
};
# 341 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
typedef volatile uint8_t nrf_mutex_t;


typedef struct
{
  uint8_t hfclk;
  uint8_t priority;
  uint32_t length_us;
  uint32_t timeout_us;
} nrf_radio_request_earliest_t;


typedef struct
{
  uint8_t hfclk;
  uint8_t priority;
  uint32_t distance_us;
  uint32_t length_us;
} nrf_radio_request_normal_t;


typedef struct
{
  uint8_t request_type;
  union
  {
    nrf_radio_request_earliest_t earliest;
    nrf_radio_request_normal_t normal;
  } params;
} nrf_radio_request_t;


typedef struct
{
  uint8_t callback_action;
  union
  {
    struct
    {
      nrf_radio_request_t * p_next;
    } request;
    struct
    {
      uint32_t length_us;
    } extend;
  } params;
} nrf_radio_signal_callback_return_param_t;
# 401 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
typedef nrf_radio_signal_callback_return_param_t * (*nrf_radio_signal_callback_t) (uint8_t signal_type);


typedef uint8_t soc_ecb_key_t[(16)];
typedef uint8_t soc_ecb_cleartext_t[(16)];
typedef uint8_t soc_ecb_ciphertext_t[((16))];


typedef struct
{
  soc_ecb_key_t key;
  soc_ecb_cleartext_t cleartext;
  soc_ecb_ciphertext_t ciphertext;
} nrf_ecb_hal_data_t;



typedef struct
{
  soc_ecb_key_t const * p_key;
  soc_ecb_cleartext_t const * p_cleartext;
  soc_ecb_ciphertext_t * p_ciphertext;
} nrf_ecb_hal_data_block_t;
# 436 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 436 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 436 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 436 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 436 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_new(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_NEW) : "r0" ); }
# 436 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 436 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 445 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 445 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 445 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 445 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 445 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_acquire(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_ACQUIRE) : "r0" ); }
# 445 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 445 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 453 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 453 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 453 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 453 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_mutex_release(nrf_mutex_t * p_mutex) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_MUTEX_RELEASE) : "r0" ); }
# 453 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 453 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 461 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 461 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 461 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 461 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_pool_capacity_get(uint8_t * p_pool_capacity) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_POOL_CAPACITY_GET) : "r0" ); }
# 461 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 461 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 469 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 469 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 469 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 469 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_bytes_available_get(uint8_t * p_bytes_available) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_BYTES_AVAILABLE_GET) : "r0" ); }
# 469 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 469 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 479 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 479 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 479 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 479 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 479 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_rand_application_vector_get(uint8_t * p_buff, uint8_t length) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RAND_APPLICATION_VECTOR_GET) : "r0" ); }
# 479 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 479 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 487 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 487 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 487 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 487 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_reset_reason_get(uint32_t * p_reset_reason) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RESET_REASON_GET) : "r0" ); }
# 487 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 487 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 495 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 495 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 495 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 495 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_reset_reason_clr(uint32_t reset_reason_clr_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RESET_REASON_CLR) : "r0" ); }
# 495 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 495 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 504 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 504 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 504 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 504 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 504 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_mode_set(uint8_t power_mode) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_MODE_SET) : "r0" ); }
# 504 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 504 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;






# 510 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 510 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 510 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 510 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_system_off(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_SYSTEM_OFF) : "r0" ); }
# 510 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 510 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 521 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 521 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 521 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 521 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 521 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_pof_enable(uint8_t pof_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_POF_ENABLE) : "r0" ); }
# 521 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 521 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 532 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 532 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 532 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 532 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 532 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_pof_threshold_set(uint8_t threshold) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_POF_THRESHOLD_SET) : "r0" ); }
# 532 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 532 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 542 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 542 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 542 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 542 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 542 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_set(uint8_t index, uint32_t ram_powerset) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_SET) : "r0" ); }
# 542 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 542 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 551 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 551 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 551 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 551 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 551 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_clr(uint8_t index, uint32_t ram_powerclr) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_CLR) : "r0" ); }
# 551 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 551 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 560 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 560 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 560 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 560 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 560 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_ram_power_get(uint8_t index, uint32_t * p_ram_power) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_RAM_POWER_GET) : "r0" ); }
# 560 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 560 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 569 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 569 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 569 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 569 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 569 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_set(uint32_t gpregret_id, uint32_t gpregret_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_SET) : "r0" ); }
# 569 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 569 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 578 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 578 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 578 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 578 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 578 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_clr(uint32_t gpregret_id, uint32_t gpregret_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_CLR) : "r0" ); }
# 578 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 578 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 587 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 587 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 587 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 587 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 587 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_gpregret_get(uint32_t gpregret_id, uint32_t *p_gpregret) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_GPREGRET_GET) : "r0" ); }
# 587 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 587 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 596 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 596 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 596 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 596 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 596 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_power_dcdc_mode_set(uint8_t dcdc_mode) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_POWER_DCDC_MODE_SET) : "r0" ); }
# 596 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 596 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 609 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 609 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 609 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 609 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 609 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_request(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_REQUEST) : "r0" ); }
# 609 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 609 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 620 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 620 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 620 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 620 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 620 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_release(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_RELEASE) : "r0" ); }
# 620 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 620 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 631 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 631 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 631 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 631 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 631 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_clock_hfclk_is_running(uint32_t * p_is_running) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_CLOCK_HFCLK_IS_RUNNING) : "r0" ); }
# 631 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 631 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 659 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 659 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 659 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 659 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 659 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_app_evt_wait(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_APP_EVT_WAIT) : "r0" ); }
# 659 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 659 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 667 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 667 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 667 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 667 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_get(uint32_t * p_channel_enable) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_GET) : "r0" ); }
# 667 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 667 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 675 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 675 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 675 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 675 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_set(uint32_t channel_enable_set_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_SET) : "r0" ); }
# 675 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 675 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;








# 683 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 683 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 683 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 683 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_enable_clr(uint32_t channel_enable_clr_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ENABLE_CLR) : "r0" ); }
# 683 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 683 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 694 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 694 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 694 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 694 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 694 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_channel_assign(uint8_t channel_num, const volatile void * evt_endpoint, const volatile void * task_endpoint) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_CHANNEL_ASSIGN) : "r0" ); }
# 694 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 694 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 703 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 703 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 703 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 703 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 703 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_task_enable(uint8_t group_num) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_TASK_ENABLE) : "r0" ); }
# 703 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 703 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 712 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 712 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 712 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 712 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 712 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_task_disable(uint8_t group_num) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_TASK_DISABLE) : "r0" ); }
# 712 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 712 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 722 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 722 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 722 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 722 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 722 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_assign(uint8_t group_num, uint32_t channel_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_ASSIGN) : "r0" ); }
# 722 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 722 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 732 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 732 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 732 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 732 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 732 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ppi_group_get(uint8_t group_num, uint32_t * p_channel_msk) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PPI_GROUP_GET) : "r0" ); }
# 732 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 732 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 763 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 763 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 763 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 763 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 763 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_notification_cfg_set(uint8_t type, uint8_t distance) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_NOTIFICATION_CFG_SET) : "r0" ); }
# 763 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 763 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 779 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 779 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 779 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 779 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 779 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ecb_block_encrypt(nrf_ecb_hal_data_t * p_ecb_data) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_ECB_BLOCK_ENCRYPT) : "r0" ); }
# 779 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 779 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 796 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 796 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 796 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 796 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 796 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_ecb_blocks_encrypt(uint8_t block_count, nrf_ecb_hal_data_block_t * p_data_blocks) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_ECB_BLOCKS_ENCRYPT) : "r0" ); }
# 796 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 796 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 807 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 807 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 807 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 807 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 807 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_evt_get(uint32_t * p_evt_id) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_EVT_GET) : "r0" ); }
# 807 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 807 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 818 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 818 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 818 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 818 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 818 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_temp_get(int32_t * p_temp) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_TEMP_GET) : "r0" ); }
# 818 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 818 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 855 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 855 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 855 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 855 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 855 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_write(uint32_t * p_dst, uint32_t const * p_src, uint32_t size) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_WRITE) : "r0" ); }
# 855 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 855 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 887 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 887 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 887 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 887 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 887 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_page_erase(uint32_t page_number) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_PAGE_ERASE) : "r0" ); }
# 887 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 887 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 910 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 910 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 910 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 910 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 910 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_flash_protect(uint32_t block_cfg0, uint32_t block_cfg1, uint32_t block_cfg2, uint32_t block_cfg3) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_FLASH_PROTECT) : "r0" ); }
# 910 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 910 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 932 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 932 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 932 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 932 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 932 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_session_open(nrf_radio_signal_callback_t p_radio_signal_callback) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_SESSION_OPEN) : "r0" ); }
# 932 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 932 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 945 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 945 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 945 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 945 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 945 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_session_close(void) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_SESSION_CLOSE) : "r0" ); }
# 945 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 945 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 977 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 977 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 977 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 977 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 977 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_radio_request(nrf_radio_request_t const * p_request) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_RADIO_REQUEST) : "r0" ); }
# 977 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 977 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 998 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 998 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic push
# 998 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"

# 998 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic ignored "-Wreturn-type"
# 998 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 __attribute__((naked)) __attribute__((unused)) static uint32_t sd_protected_register_write(volatile uint32_t * p_register, uint32_t value) { __asm( "svc %0\n" "bx r14" : : "I" ( SD_PROTECTED_REGISTER_WRITE) : "r0" ); }
# 998 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
#pragma GCC diagnostic pop
# 998 "../../../../../../components/softdevice/s132/headers/nrf_soc.h"
 ;
# 56 "../../../../../../components/softdevice/common/nrf_sdh_soc.h" 2
# 127 "../../../../../../components/softdevice/common/nrf_sdh_soc.h"
typedef void (*nrf_sdh_soc_evt_handler_t) (uint32_t evt_id, void * p_context);


typedef struct
{
    nrf_sdh_soc_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_soc_evt_observer_t;
# 69 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/softdevice/common/nrf_sdh_ble.h" 1
# 134 "../../../../../../components/softdevice/common/nrf_sdh_ble.h"
typedef void (*nrf_sdh_ble_evt_handler_t)(ble_evt_t const * p_ble_evt, void * p_context);


typedef struct
{
    nrf_sdh_ble_evt_handler_t handler;
    void * p_context;
} const nrf_sdh_ble_evt_observer_t;
# 151 "../../../../../../components/softdevice/common/nrf_sdh_ble.h"
ret_code_t nrf_sdh_ble_app_ram_start_get(uint32_t * p_app_ram_start);
# 168 "../../../../../../components/softdevice/common/nrf_sdh_ble.h"
ret_code_t nrf_sdh_ble_default_cfg_set(uint8_t conn_cfg_tag, uint32_t * p_ram_start);






ret_code_t nrf_sdh_ble_enable(uint32_t * p_app_ram_start);
# 70 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/libraries/timer/app_timer.h" 1
# 131 "../../../../../../components/libraries/timer/app_timer.h"
typedef void (*app_timer_timeout_handler_t)(void * p_context);
# 166 "../../../../../../components/libraries/timer/app_timer.h"
typedef struct app_timer_t { uint32_t data[(((32) + (sizeof(uint32_t)) - 1) / (sizeof(uint32_t)))]; } app_timer_t;



typedef app_timer_t * app_timer_id_t;
# 180 "../../../../../../components/libraries/timer/app_timer.h"
typedef struct
{
    app_timer_timeout_handler_t timeout_handler;
    void * p_context;
} app_timer_event_t;


typedef enum
{
    APP_TIMER_MODE_SINGLE_SHOT,
    APP_TIMER_MODE_REPEATED
} app_timer_mode_t;





ret_code_t app_timer_init(void);
# 218 "../../../../../../components/libraries/timer/app_timer.h"
ret_code_t app_timer_create(app_timer_id_t const * p_timer_id,
                            app_timer_mode_t mode,
                            app_timer_timeout_handler_t timeout_handler);
# 242 "../../../../../../components/libraries/timer/app_timer.h"
ret_code_t app_timer_start(app_timer_id_t timer_id, uint32_t timeout_ticks, void * p_context);
# 254 "../../../../../../components/libraries/timer/app_timer.h"
ret_code_t app_timer_stop(app_timer_id_t timer_id);







ret_code_t app_timer_stop_all(void);





uint32_t app_timer_cnt_get(void);
# 277 "../../../../../../components/libraries/timer/app_timer.h"
uint32_t app_timer_cnt_diff_compute(uint32_t ticks_to,
                                    uint32_t ticks_from);
# 289 "../../../../../../components/libraries/timer/app_timer.h"
uint8_t app_timer_op_queue_utilization_get(void);







void app_timer_pause(void);







void app_timer_resume(void);
# 71 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/libraries/fds/fds.h" 1
# 59 "../../../../../../components/libraries/fds/fds.h"
# 1 "../../../../../../components/libraries/util/app_util_platform.h" 1
# 57 "../../../../../../components/libraries/util/app_util_platform.h"
# 1 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h" 1
# 119 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
typedef struct
{
  uint32_t volatile __irq_masks[(2)];
  uint32_t volatile __cr_flag;
} nrf_nvic_state_t;



extern nrf_nvic_state_t nrf_nvic_state;
# 138 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline int __sd_nvic_irq_disable(void);



static inline void __sd_nvic_irq_enable(void);






static inline uint32_t __sd_nvic_app_accessible_irq(IRQn_Type IRQn);






static inline uint32_t __sd_nvic_is_app_accessible_priority(uint32_t priority);
# 174 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_EnableIRQ(IRQn_Type IRQn);
# 186 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_DisableIRQ(IRQn_Type IRQn);
# 199 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_GetPendingIRQ(IRQn_Type IRQn, uint32_t * p_pending_irq);
# 211 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_SetPendingIRQ(IRQn_Type IRQn);
# 223 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_ClearPendingIRQ(IRQn_Type IRQn);
# 238 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_SetPriority(IRQn_Type IRQn, uint32_t priority);
# 251 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_GetPriority(IRQn_Type IRQn, uint32_t * p_priority);






static inline uint32_t sd_nvic_SystemReset(void);
# 271 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_critical_region_enter(uint8_t * p_is_nested_critical_region);
# 282 "../../../../../../components/softdevice/s132/headers/nrf_nvic.h"
static inline uint32_t sd_nvic_critical_region_exit(uint8_t is_nested_critical_region);





static inline int __sd_nvic_irq_disable(void)
{
  int pm = __get_PRIMASK();
  __disable_irq();
  return pm;
}

static inline void __sd_nvic_irq_enable(void)
{
  __enable_irq();
}

static inline uint32_t __sd_nvic_app_accessible_irq(IRQn_Type IRQn)
{
  if (IRQn < 32)
  {
    return ((1UL<<IRQn) & (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) )))) != 0;
  }
  else if (IRQn < 64)
  {
    return ((1UL<<(IRQn-32)) & (~((uint32_t)0))) != 0;
  }
  else
  {
    return 1;
  }
}

static inline uint32_t __sd_nvic_is_app_accessible_priority(uint32_t priority)
{
  if( (priority >= (1 << 3))
   || (((1 << priority) & ((uint8_t)~((uint8_t)( (1U << 0) | (1U << 1) | (1U << 4) )))) == 0)
    )
  {
    return 0;
  }
  return 1;
}


static inline uint32_t sd_nvic_EnableIRQ(IRQn_Type IRQn)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }
  if (!__sd_nvic_is_app_accessible_priority(NVIC_GetPriority(IRQn)))
  {
    return ((0x2000) + 2);
  }

  if (nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__irq_masks[(uint32_t)((int32_t)IRQn) >> 5] |= (uint32_t)(1 << ((uint32_t)((int32_t)IRQn) & (uint32_t)0x1F));
  }
  else
  {
    NVIC_EnableIRQ(IRQn);
  }
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_DisableIRQ(IRQn_Type IRQn)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }

  if (nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__irq_masks[(uint32_t)((int32_t)IRQn) >> 5] &= ~(1UL << ((uint32_t)(IRQn) & 0x1F));
  }
  else
  {
    NVIC_DisableIRQ(IRQn);
  }

  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_GetPendingIRQ(IRQn_Type IRQn, uint32_t * p_pending_irq)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    *p_pending_irq = NVIC_GetPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SetPendingIRQ(IRQn_Type IRQn)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    NVIC_SetPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_ClearPendingIRQ(IRQn_Type IRQn)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    NVIC_ClearPendingIRQ(IRQn);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SetPriority(IRQn_Type IRQn, uint32_t priority)
{
  if (!__sd_nvic_app_accessible_irq(IRQn))
  {
    return ((0x2000) + 1);
  }

  if (!__sd_nvic_is_app_accessible_priority(priority))
  {
    return ((0x2000) + 2);
  }

  NVIC_SetPriority(IRQn, (uint32_t)priority);
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_GetPriority(IRQn_Type IRQn, uint32_t * p_priority)
{
  if (__sd_nvic_app_accessible_irq(IRQn))
  {
    *p_priority = (NVIC_GetPriority(IRQn) & 0xFF);
    return ((0x0) + 0);
  }
  else
  {
    return ((0x2000) + 1);
  }
}

static inline uint32_t sd_nvic_SystemReset(void)
{
  NVIC_SystemReset();
  return ((0x2000) + 3);
}

static inline uint32_t sd_nvic_critical_region_enter(uint8_t * p_is_nested_critical_region)
{
  int was_masked = __sd_nvic_irq_disable();
  if (!nrf_nvic_state.__cr_flag)
  {
    nrf_nvic_state.__cr_flag = 1;
    nrf_nvic_state.__irq_masks[0] = ( ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[0] & (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) ))) );
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[0] = (~((uint32_t)( (1U << POWER_CLOCK_IRQn) | (1U << RADIO_IRQn) | (1U << RTC0_IRQn) | (1U << TIMER0_IRQn) | (1U << RNG_IRQn) | (1U << ECB_IRQn) | (1U << CCM_AAR_IRQn) | (1U << TEMP_IRQn) | (1U << (30)) | (1U << (uint32_t)SWI5_EGU5_IRQn) )));
    nrf_nvic_state.__irq_masks[1] = ( ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[1] & (~((uint32_t)0)) );
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ICER[1] = (~((uint32_t)0));
    *p_is_nested_critical_region = 0;
  }
  else
  {
    *p_is_nested_critical_region = 1;
  }
  if (!was_masked)
  {
    __sd_nvic_irq_enable();
  }
  return ((0x0) + 0);
}

static inline uint32_t sd_nvic_critical_region_exit(uint8_t is_nested_critical_region)
{
  if (nrf_nvic_state.__cr_flag && (is_nested_critical_region == 0))
  {
    int was_masked = __sd_nvic_irq_disable();
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[0] = nrf_nvic_state.__irq_masks[0];
    ((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[1] = nrf_nvic_state.__irq_masks[1];
    nrf_nvic_state.__cr_flag = 0;
    if (!was_masked)
    {
      __sd_nvic_irq_enable();
    }
  }

  return ((0x0) + 0);
}
# 58 "../../../../../../components/libraries/util/app_util_platform.h" 2


# 1 "../../../../../../components/libraries/util/app_error.h" 1
# 61 "../../../../../../components/libraries/util/app_util_platform.h" 2
# 91 "../../../../../../components/libraries/util/app_util_platform.h"
typedef enum
{



    APP_IRQ_PRIORITY_HIGHEST = 2,

    APP_IRQ_PRIORITY_HIGH = 2,



    APP_IRQ_PRIORITY_MID = 3,

    APP_IRQ_PRIORITY_LOW = 6,
    APP_IRQ_PRIORITY_LOWEST = 7,
    APP_IRQ_PRIORITY_THREAD = 15
} app_irq_priority_t;




typedef enum
{
    APP_LEVEL_UNPRIVILEGED,
    APP_LEVEL_PRIVILEGED
} app_level_t;
# 172 "../../../../../../components/libraries/util/app_util_platform.h"
void app_util_critical_region_enter (uint8_t *p_nested);
void app_util_critical_region_exit (uint8_t nested);
# 261 "../../../../../../components/libraries/util/app_util_platform.h"
uint8_t current_int_priority_get(void);
# 270 "../../../../../../components/libraries/util/app_util_platform.h"
uint8_t privilege_level_get(void);
# 60 "../../../../../../components/libraries/fds/fds.h" 2
# 83 "../../../../../../components/libraries/fds/fds.h"
enum
{
    FDS_SUCCESS = ((0x0) + 0),
    FDS_ERR_OPERATION_TIMEOUT,
    FDS_ERR_NOT_INITIALIZED,
    FDS_ERR_UNALIGNED_ADDR,
    FDS_ERR_INVALID_ARG,
    FDS_ERR_NULL_ARG,
    FDS_ERR_NO_OPEN_RECORDS,
    FDS_ERR_NO_SPACE_IN_FLASH,
    FDS_ERR_NO_SPACE_IN_QUEUES,
    FDS_ERR_RECORD_TOO_LARGE,
    FDS_ERR_NOT_FOUND,
    FDS_ERR_NO_PAGES,
    FDS_ERR_USER_LIMIT_REACHED,
    FDS_ERR_CRC_CHECK_FAILED,
    FDS_ERR_BUSY,
    FDS_ERR_INTERNAL,
};





typedef struct
{
    uint16_t record_key;
    uint16_t length_words;
    uint16_t file_id;
    uint16_t crc16;



    uint32_t record_id;
} fds_header_t;
# 127 "../../../../../../components/libraries/fds/fds.h"
typedef struct
{
    uint32_t record_id;
    uint32_t const * p_record;
    uint16_t gc_run_count;
    
# 132 "../../../../../../components/libraries/fds/fds.h" 3 4
   _Bool 
# 132 "../../../../../../components/libraries/fds/fds.h"
                    record_is_open;
} fds_record_desc_t;







typedef struct
{
    fds_header_t const * p_header;
    void const * p_data;
} fds_flash_record_t;



typedef struct
{
    uint16_t file_id;
    uint16_t key;
    struct
    {
        void const * p_data;
        uint32_t length_words;
    } data;
} fds_record_t;







typedef struct
{
    uint16_t page;
    uint16_t length_words;
} fds_reserve_token_t;
# 179 "../../../../../../components/libraries/fds/fds.h"
typedef struct
{
    uint32_t const * p_addr;
    uint16_t page;
} fds_find_token_t;




typedef enum
{
    FDS_EVT_INIT,
    FDS_EVT_WRITE,
    FDS_EVT_UPDATE,
    FDS_EVT_DEL_RECORD,
    FDS_EVT_DEL_FILE,
    FDS_EVT_GC
} fds_evt_id_t;


struct semicolon_swallower;


typedef struct
{
    fds_evt_id_t id;
    ret_code_t result;
    union
    {
        struct
        {
            uint32_t record_id;
            uint16_t file_id;
            uint16_t record_key;
            
# 213 "../../../../../../components/libraries/fds/fds.h" 3 4
           _Bool 
# 213 "../../../../../../components/libraries/fds/fds.h"
                    is_record_updated;
        } write;
        struct
        {
            uint32_t record_id;
            uint16_t file_id;
            uint16_t record_key;
        } del;
    };
} fds_evt_t;

struct semicolon_swallower;



typedef struct
{
    uint16_t pages_available;
    uint16_t open_records;
    uint16_t valid_records;
    uint16_t dirty_records;
    uint16_t words_reserved;


    uint16_t words_used;






    uint16_t largest_contig;






    uint16_t freeable_words;
# 260 "../../../../../../components/libraries/fds/fds.h"
    
# 260 "../../../../../../components/libraries/fds/fds.h" 3 4
   _Bool 
# 260 "../../../../../../components/libraries/fds/fds.h"
        corruption;
} fds_stat_t;






typedef void (*fds_cb_t)(fds_evt_t const * p_evt);
# 281 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_register(fds_cb_t cb);
# 296 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_init(void);
# 334 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_write(fds_record_desc_t * p_desc,
                            fds_record_t const * p_record);
# 357 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_reserve(fds_reserve_token_t * p_token, uint16_t length_words);
# 369 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_reserve_cancel(fds_reserve_token_t * p_token);
# 408 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_write_reserved(fds_record_desc_t * p_desc,
                                     fds_record_t const * p_record,
                                     fds_reserve_token_t const * p_token);
# 432 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_delete(fds_record_desc_t * p_desc);
# 454 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_file_delete(uint16_t file_id);
# 492 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_update(fds_record_desc_t * p_desc,
                             fds_record_t const * p_record);
# 511 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_iterate(fds_record_desc_t * p_desc,
                              fds_find_token_t * p_token);
# 531 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_find(uint16_t file_id,
                           uint16_t record_key,
                           fds_record_desc_t * p_desc,
                           fds_find_token_t * p_token);
# 552 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_find_by_key(uint16_t record_key,
                                  fds_record_desc_t * p_desc,
                                  fds_find_token_t * p_token);
# 572 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_find_in_file(uint16_t file_id,
                                   fds_record_desc_t * p_desc,
                                   fds_find_token_t * p_token);
# 601 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_open(fds_record_desc_t * p_desc,
                           fds_flash_record_t * p_flash_record);
# 621 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_close(fds_record_desc_t * p_desc);
# 636 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_gc(void);
# 655 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_descriptor_from_rec_id(fds_record_desc_t * p_desc,
                                      uint32_t record_id);
# 675 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_record_id_from_desc(fds_record_desc_t const * p_desc,
                                   uint32_t * p_record_id);
# 690 "../../../../../../components/libraries/fds/fds.h"
ret_code_t fds_stat(fds_stat_t * p_stat);
# 72 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/ble/peer_manager/peer_manager.h" 1
# 67 "../../../../../../components/ble/peer_manager/peer_manager.h"
# 1 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 1
# 56 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
# 1 "../../../../../../components/ble/common/ble_gatt_db.h" 1
# 65 "../../../../../../components/ble/common/ble_gatt_db.h"
typedef struct
{
    ble_gattc_char_t characteristic;
    uint16_t cccd_handle;
    uint16_t ext_prop_handle;
    uint16_t user_desc_handle;
    uint16_t report_ref_handle;
} ble_gatt_db_char_t;




typedef struct
{
    ble_uuid_t srv_uuid;
    uint8_t char_count;
    ble_gattc_handle_range_t handle_range;
    ble_gatt_db_char_t charateristics[6];
} ble_gatt_db_srv_t;
# 57 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 2
# 68 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef uint16_t pm_peer_id_t;



typedef uint32_t pm_store_token_t;





typedef uint16_t pm_sec_error_code_t;
# 129 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef enum
{
    PM_PEER_DATA_ID_FIRST = 0,
    PM_PEER_DATA_ID_BONDING = 7,
    PM_PEER_DATA_ID_SERVICE_CHANGED_PENDING = 1,
    PM_PEER_DATA_ID_GATT_LOCAL = 8,
    PM_PEER_DATA_ID_GATT_REMOTE = 5,
    PM_PEER_DATA_ID_PEER_RANK = 6,
    PM_PEER_DATA_ID_CENTRAL_ADDR_RES = 9,
    PM_PEER_DATA_ID_APPLICATION = 4,
    PM_PEER_DATA_ID_LAST = 10,
    PM_PEER_DATA_ID_INVALID = 0xFF,
} pm_peer_data_id_t;




typedef enum
{
    PM_CONN_SEC_PROCEDURE_ENCRYPTION,
    PM_CONN_SEC_PROCEDURE_BONDING,
    PM_CONN_SEC_PROCEDURE_PAIRING,
} pm_conn_sec_procedure_t;




typedef struct
{
    
# 158 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 158 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
        allow_repairing;
} pm_conn_sec_config_t;




typedef struct
{
    uint8_t own_role;
    ble_gap_id_key_t peer_ble_id;
    ble_gap_enc_key_t peer_ltk;
    ble_gap_enc_key_t own_ltk;
} pm_peer_data_bonding_t;




typedef struct
{
    uint32_t flags;
    uint16_t len;
    uint8_t data[1];
} pm_peer_data_local_gatt_db_t;
# 199 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef ble_gap_privacy_params_t pm_privacy_params_t;




typedef enum
{
    PM_EVT_BONDED_PEER_CONNECTED,
    PM_EVT_CONN_SEC_START,
    PM_EVT_CONN_SEC_SUCCEEDED,
    PM_EVT_CONN_SEC_FAILED,
    PM_EVT_CONN_SEC_CONFIG_REQ,
    PM_EVT_CONN_SEC_PARAMS_REQ,
    PM_EVT_STORAGE_FULL,
    PM_EVT_ERROR_UNEXPECTED,
    PM_EVT_PEER_DATA_UPDATE_SUCCEEDED,
    PM_EVT_PEER_DATA_UPDATE_FAILED,
    PM_EVT_PEER_DELETE_SUCCEEDED,
    PM_EVT_PEER_DELETE_FAILED,
    PM_EVT_PEERS_DELETE_SUCCEEDED,
    PM_EVT_PEERS_DELETE_FAILED,
    PM_EVT_LOCAL_DB_CACHE_APPLIED,
    PM_EVT_LOCAL_DB_CACHE_APPLY_FAILED,
    PM_EVT_SERVICE_CHANGED_IND_SENT,
    PM_EVT_SERVICE_CHANGED_IND_CONFIRMED,
    PM_EVT_SLAVE_SECURITY_REQ,
    PM_EVT_FLASH_GARBAGE_COLLECTED,
    PM_EVT_FLASH_GARBAGE_COLLECTION_FAILED,
} pm_evt_id_t;




typedef struct
{
    pm_conn_sec_procedure_t procedure;
} pm_conn_sec_start_evt_t;




typedef struct
{
    pm_conn_sec_procedure_t procedure;
    
# 243 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 243 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
                           data_stored;
} pm_conn_secured_evt_t;




typedef struct
{
    pm_conn_sec_procedure_t procedure;
    pm_sec_error_code_t error;
    uint8_t error_src;
} pm_conn_secure_failed_evt_t;




typedef struct
{
    ble_gap_sec_params_t const * p_peer_params;
    void const * p_context;
} pm_conn_sec_params_req_evt_t;




typedef enum
{
    PM_PEER_DATA_OP_UPDATE,
    PM_PEER_DATA_OP_DELETE,
} pm_peer_data_op_t;




typedef struct
{
    pm_peer_data_id_t data_id;
    pm_peer_data_op_t action;
    pm_store_token_t token;
    uint8_t flash_changed : 1;
} pm_peer_data_update_succeeded_evt_t;




typedef struct
{
    pm_peer_data_id_t data_id;
    pm_peer_data_op_t action;
    pm_store_token_t token;
    ret_code_t error;
    
# 294 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 294 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
                     fds_error;
} pm_peer_data_update_failed_t;




typedef struct
{
    ret_code_t error;
    
# 303 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 303 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
              fds_error;
} pm_failure_evt_t;




typedef struct
{
    
# 311 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 311 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
        bond;
    
# 312 "../../../../../../components/ble/peer_manager/peer_manager_types.h" 3 4
   _Bool 
# 312 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
        mitm;
} pm_evt_slave_security_req_t;






typedef struct
{
    pm_evt_id_t evt_id;
    uint16_t conn_handle;
    pm_peer_id_t peer_id;
    union
    {
        pm_conn_sec_start_evt_t conn_sec_start;
        pm_conn_secured_evt_t conn_sec_succeeded;
        pm_conn_secure_failed_evt_t conn_sec_failed;
        pm_conn_sec_params_req_evt_t conn_sec_params_req;
        pm_peer_data_update_succeeded_evt_t peer_data_update_succeeded;
        pm_peer_data_update_failed_t peer_data_update_failed;
        pm_failure_evt_t peer_delete_failed;
        pm_failure_evt_t peers_delete_failed_evt;
        pm_failure_evt_t error_unexpected;
        pm_evt_slave_security_req_t slave_security_req;
        pm_failure_evt_t garbage_collection_failed;
    } params;
} pm_evt_t;
# 348 "../../../../../../components/ble/peer_manager/peer_manager_types.h"
typedef void (*pm_evt_handler_t)(pm_evt_t const * p_event);
# 68 "../../../../../../components/ble/peer_manager/peer_manager.h" 2
# 1 "../../../../../../components/ble/peer_manager/peer_database.h" 1
# 45 "../../../../../../components/ble/peer_manager/peer_database.h"
# 1 "../../../../../../components/ble/peer_manager/peer_manager_internal.h" 1
# 63 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
struct semicolon_swallower;





typedef struct
{
    uint16_t length_words;
    pm_peer_data_id_t data_id;
    union
    {
        pm_peer_data_bonding_t * p_bonding_data;
        uint32_t * p_peer_rank;
        uint32_t * p_central_addr_res;
        
# 78 "../../../../../../components/ble/peer_manager/peer_manager_internal.h" 3 4
       _Bool 
# 78 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
                                    * p_service_changed_pending;
        pm_peer_data_local_gatt_db_t * p_local_gatt_db;
        ble_gatt_db_srv_t * p_remote_gatt_db;
        uint8_t * p_application_data;
        void * p_all_data;
    };
} pm_peer_data_t;






typedef struct
{
    uint16_t length_words;
    pm_peer_data_id_t data_id;
    union
    {
        pm_peer_data_bonding_t const * p_bonding_data;
        uint32_t const * p_peer_rank;
        uint32_t const * p_central_addr_res;
        
# 100 "../../../../../../components/ble/peer_manager/peer_manager_internal.h" 3 4
       _Bool 
# 100 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
                                    const * p_service_changed_pending;
        pm_peer_data_local_gatt_db_t const * p_local_gatt_db;
        ble_gatt_db_srv_t const * p_remote_gatt_db;
        uint8_t const * p_application_data;
        void const * p_all_data;
    };
} pm_peer_data_const_t;

struct semicolon_swallower;






typedef pm_peer_data_const_t pm_peer_data_flash_t;
# 124 "../../../../../../components/ble/peer_manager/peer_manager_internal.h"
typedef void (*pm_evt_handler_internal_t)(pm_evt_t * p_event);
# 46 "../../../../../../components/ble/peer_manager/peer_database.h" 2
# 79 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_init(void);
# 90 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_peer_free(pm_peer_id_t peer_id);
# 106 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_peer_data_ptr_get(pm_peer_id_t peer_id,
                                 pm_peer_data_id_t data_id,
                                 pm_peer_data_flash_t * const p_peer_data);
# 144 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_write_buf_get(pm_peer_id_t peer_id,
                             pm_peer_data_id_t data_id,
                             uint32_t n_bufs,
                             pm_peer_data_t * p_peer_data);
# 160 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_write_buf_release(pm_peer_id_t peer_id, pm_peer_data_id_t data_id);
# 179 "../../../../../../components/ble/peer_manager/peer_database.h"
ret_code_t pdb_write_buf_store(pm_peer_id_t peer_id,
                               pm_peer_data_id_t data_id,
                               pm_peer_id_t new_peer_id);
# 69 "../../../../../../components/ble/peer_manager/peer_manager.h" 2
# 78 "../../../../../../components/ble/peer_manager/peer_manager.h"
typedef struct
{
    uint8_t connected : 1;
    uint8_t encrypted : 1;
    uint8_t mitm_protected : 1;
    uint8_t bonded : 1;
} pm_conn_sec_status_t;



typedef enum
{
    PM_PEER_ID_LIST_ALL_ID,
    PM_PEER_ID_LIST_SKIP_NO_ID_ADDR = 0x01,
    PM_PEER_ID_LIST_SKIP_NO_IRK = 0x02,
    PM_PEER_ID_LIST_SKIP_NO_CAR = 0x04,
    PM_PEER_ID_LIST_SKIP_ALL = PM_PEER_ID_LIST_SKIP_NO_IRK |
                                      PM_PEER_ID_LIST_SKIP_NO_CAR
} pm_peer_id_list_skip_t;
# 106 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_init(void);
# 120 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_register(pm_evt_handler_t event_handler);
# 138 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_sec_params_set(ble_gap_sec_params_t * p_sec_params);
# 182 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_secure(uint16_t conn_handle, 
# 182 "../../../../../../components/ble/peer_manager/peer_manager.h" 3 4
                                               _Bool 
# 182 "../../../../../../components/ble/peer_manager/peer_manager.h"
                                                    force_repairing);
# 195 "../../../../../../components/ble/peer_manager/peer_manager.h"
void pm_conn_sec_config_reply(uint16_t conn_handle, pm_conn_sec_config_t * p_conn_sec_config);
# 214 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_sec_params_reply(uint16_t conn_handle,
                                    ble_gap_sec_params_t * p_sec_params,
                                    void const * p_context);
# 232 "../../../../../../components/ble/peer_manager/peer_manager.h"
void pm_local_database_has_changed(void);
# 245 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_sec_status_get(uint16_t conn_handle, pm_conn_sec_status_t * p_conn_sec_status);
# 265 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_lesc_public_key_set(ble_gap_lesc_p256_pk_t * p_public_key);
# 290 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_whitelist_set(pm_peer_id_t const * p_peers,
                            uint32_t peer_cnt);
# 325 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_whitelist_get(ble_gap_addr_t * p_addrs,
                            uint32_t * p_addr_cnt,
                            ble_gap_irk_t * p_irks,
                            uint32_t * p_irk_cnt);
# 353 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_device_identities_list_set(pm_peer_id_t const * p_peers,
                                         uint32_t peer_cnt);
# 386 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_id_addr_set(ble_gap_addr_t const * p_addr);
# 401 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_id_addr_get(ble_gap_addr_t * p_addr);
# 423 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_privacy_set(pm_privacy_params_t const * p_privacy_params);
# 437 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_privacy_get(pm_privacy_params_t * p_privacy_params);
# 449 "../../../../../../components/ble/peer_manager/peer_manager.h"

# 449 "../../../../../../components/ble/peer_manager/peer_manager.h" 3 4
_Bool 
# 449 "../../../../../../components/ble/peer_manager/peer_manager.h"
    pm_address_resolve(ble_gap_addr_t const * p_addr, ble_gap_irk_t const * p_irk);
# 462 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_conn_handle_get(pm_peer_id_t peer_id, uint16_t * p_conn_handle);
# 475 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_id_get(uint16_t conn_handle, pm_peer_id_t * p_peer_id);
# 500 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_id_list(pm_peer_id_t * p_peer_list,
                           uint32_t * const p_list_size,
                           pm_peer_id_t first_peer_id,
                           pm_peer_id_list_skip_t skip_id);
# 530 "../../../../../../components/ble/peer_manager/peer_manager.h"
pm_peer_id_t pm_next_peer_id_get(pm_peer_id_t prev_peer_id);
# 539 "../../../../../../components/ble/peer_manager/peer_manager.h"
uint32_t pm_peer_count(void);
# 576 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_data_load(pm_peer_id_t peer_id,
                             pm_peer_data_id_t data_id,
                             void * p_data,
                             uint16_t * p_len);



ret_code_t pm_peer_data_bonding_load(pm_peer_id_t peer_id,
                                     pm_peer_data_bonding_t * p_data);



ret_code_t pm_peer_data_remote_db_load(pm_peer_id_t peer_id,
                                       ble_gatt_db_srv_t * p_data,
                                       uint16_t * p_len);



ret_code_t pm_peer_data_app_data_load(pm_peer_id_t peer_id,
                                      void * p_data,
                                      uint16_t * p_len);
# 635 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_data_store(pm_peer_id_t peer_id,
                              pm_peer_data_id_t data_id,
                              void const * p_data,
                              uint16_t len,
                              pm_store_token_t * p_token);



ret_code_t pm_peer_data_bonding_store(pm_peer_id_t peer_id,
                                      pm_peer_data_bonding_t const * p_data,
                                      pm_store_token_t * p_token);



ret_code_t pm_peer_data_remote_db_store(pm_peer_id_t peer_id,
                                        ble_gatt_db_srv_t const * p_data,
                                        uint16_t len,
                                        pm_store_token_t * p_token);



ret_code_t pm_peer_data_app_data_store(pm_peer_id_t peer_id,
                                       void const * p_data,
                                       uint16_t len,
                                       pm_store_token_t * p_token);
# 688 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_data_delete(pm_peer_id_t peer_id, pm_peer_data_id_t data_id);
# 712 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_new(pm_peer_id_t * p_new_peer_id,
                       pm_peer_data_bonding_t * p_bonding_data,
                       pm_store_token_t * p_token);
# 734 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_delete(pm_peer_id_t peer_id);
# 753 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peers_delete(void);
# 787 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_ranks_get(pm_peer_id_t * p_highest_ranked_peer,
                             uint32_t * p_highest_rank,
                             pm_peer_id_t * p_lowest_ranked_peer,
                             uint32_t * p_lowest_rank);
# 823 "../../../../../../components/ble/peer_manager/peer_manager.h"
ret_code_t pm_peer_rank_highest(pm_peer_id_t peer_id);
# 73 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/libraries/bsp/bsp_btn_ble.h" 1
# 60 "../../../../../../components/libraries/bsp/bsp_btn_ble.h"
# 1 "../../../../../../components/libraries/bsp/bsp.h" 1
# 58 "../../../../../../components/libraries/bsp/bsp.h"
# 1 "../../../../../../components/boards/boards.h" 1
# 43 "../../../../../../components/boards/boards.h"
# 1 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 1
# 44 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
# 1 "../../../../../../modules/nrfx/nrfx.h" 1
# 44 "../../../../../../modules/nrfx/nrfx.h"
# 1 "../../../../../../integration/nrfx/nrfx_config.h" 1
# 45 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 1
# 49 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
# 1 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 1
# 61 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h"
# 1 "../../../../../../modules/nrfx/mdk/nrf52832_peripherals.h" 1
# 62 "../../../../../../modules/nrfx/mdk/nrf_peripherals.h" 2
# 50 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 2
# 184 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
typedef void (* nrfx_irq_handler_t)(void);




typedef enum
{
    NRFX_DRV_STATE_UNINITIALIZED,
    NRFX_DRV_STATE_INITIALIZED,
    NRFX_DRV_STATE_POWERED_ON,
} nrfx_drv_state_t;
# 209 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline 
# 209 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 209 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object);
# 218 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline IRQn_Type nrfx_get_irq_number(void const * p_reg);
# 234 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_bitpos_to_event(uint32_t bit);
# 250 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
static inline uint32_t nrfx_event_to_bitpos(uint32_t event);




static inline 
# 255 "../../../../../../modules/nrfx/drivers/nrfx_common.h" 3 4
               _Bool 
# 255 "../../../../../../modules/nrfx/drivers/nrfx_common.h"
                    nrfx_is_in_ram(void const * p_object)
{
    return ((((uint32_t)p_object) & 0xE0000000u) == 0x20000000u);
}

static inline IRQn_Type nrfx_get_irq_number(void const * p_reg)
{
    return (IRQn_Type)(uint8_t)((uint32_t)(p_reg) >> 12);
}

static inline uint32_t nrfx_bitpos_to_event(uint32_t bit)
{
    static const uint32_t event_reg_offset = 0x100u;
    return event_reg_offset + (bit * sizeof(uint32_t));
}

static inline uint32_t nrfx_event_to_bitpos(uint32_t event)
{
    static const uint32_t event_reg_offset = 0x100u;
    return (event - event_reg_offset) / sizeof(uint32_t);
}
# 46 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../integration/nrfx/nrfx_glue.h" 1
# 57 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../integration/nrfx/legacy/apply_old_config.h" 1
# 58 "../../../../../../integration/nrfx/nrfx_glue.h" 2

# 1 "../../../../../../modules/nrfx/soc/nrfx_irqs.h" 1
# 49 "../../../../../../modules/nrfx/soc/nrfx_irqs.h"
# 1 "../../../../../../modules/nrfx/soc/nrfx_irqs_nrf52832.h" 1
# 50 "../../../../../../modules/nrfx/soc/nrfx_irqs.h" 2
# 60 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 104 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline void _NRFX_IRQ_PRIORITY_SET(IRQn_Type irq_number,
                                          uint8_t priority)
{
    if (0) { if (((((priority) > 1) && ((priority) < 4)) || (((priority) > 4) && ((priority) < 8)))) { } else { assert_nrf_callback((uint16_t)107, (uint8_t *)"../../../../../../integration/nrfx/nrfx_glue.h"); } };
    NVIC_SetPriority(irq_number, priority);
}







static inline void _NRFX_IRQ_ENABLE(IRQn_Type irq_number)
{
    NVIC_ClearPendingIRQ(irq_number);
    NVIC_EnableIRQ(irq_number);
}
# 132 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 132 "../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 132 "../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_ENABLED(IRQn_Type irq_number)
{
    return 0 != (((NVIC_Type *) ((0xE000E000UL) + 0x0100UL) )->ISER[irq_number / 32] & (1UL << (irq_number % 32)));
}







static inline void _NRFX_IRQ_DISABLE(IRQn_Type irq_number)
{
    NVIC_DisableIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_SET(IRQn_Type irq_number)
{
    NVIC_SetPendingIRQ(irq_number);
}







static inline void _NRFX_IRQ_PENDING_CLEAR(IRQn_Type irq_number)
{
    NVIC_ClearPendingIRQ(irq_number);
}
# 177 "../../../../../../integration/nrfx/nrfx_glue.h"
static inline 
# 177 "../../../../../../integration/nrfx/nrfx_glue.h" 3 4
             _Bool 
# 177 "../../../../../../integration/nrfx/nrfx_glue.h"
                  _NRFX_IRQ_IS_PENDING(IRQn_Type irq_number)
{
    return (NVIC_GetPendingIRQ(irq_number) == 1);
}
# 204 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../modules/nrfx/soc/nrfx_coredep.h" 1
# 84 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us);
# 128 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
static inline void nrfx_coredep_delay_us(uint32_t time_us)
{
    if (time_us == 0)
    {
        return;
    }
# 152 "../../../../../../modules/nrfx/soc/nrfx_coredep.h"
    __attribute__((aligned(16)))
    static const uint16_t delay_bytecode[] = {
        0x3803,
        0xd8fd,
        0x4770
        };


    typedef void (* delay_func_t)(uint32_t);

    const delay_func_t delay_cycles = (delay_func_t)((((uint32_t)delay_bytecode) | 1));
    uint32_t cycles = time_us * 64;
    delay_cycles(cycles);
}
# 205 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 219 "../../../../../../integration/nrfx/nrfx_glue.h"
typedef ret_code_t nrfx_err_t;
# 241 "../../../../../../integration/nrfx/nrfx_glue.h"
# 1 "../../../../../../components/libraries/util/sdk_resources.h" 1
# 52 "../../../../../../components/libraries/util/sdk_resources.h"
# 1 "../../../../../../components/softdevice/s132/headers/nrf_sd_def.h" 1
# 53 "../../../../../../components/libraries/util/sdk_resources.h" 2
# 242 "../../../../../../integration/nrfx/nrfx_glue.h" 2
# 47 "../../../../../../modules/nrfx/nrfx.h" 2
# 1 "../../../../../../modules/nrfx/drivers/nrfx_errors.h" 1
# 48 "../../../../../../modules/nrfx/nrfx.h" 2
# 45 "../../../../../../modules/nrfx/hal/nrf_gpio.h" 2
# 76 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
typedef enum
{
    NRF_GPIO_PIN_DIR_INPUT = (0UL),
    NRF_GPIO_PIN_DIR_OUTPUT = (1UL)
} nrf_gpio_pin_dir_t;




typedef enum
{
    NRF_GPIO_PIN_INPUT_CONNECT = (0UL),
    NRF_GPIO_PIN_INPUT_DISCONNECT = (1UL)
} nrf_gpio_pin_input_t;




typedef enum
{
    NRF_GPIO_PIN_NOPULL = (0UL),
    NRF_GPIO_PIN_PULLDOWN = (1UL),
    NRF_GPIO_PIN_PULLUP = (3UL),
} nrf_gpio_pin_pull_t;




typedef enum
{
    NRF_GPIO_PIN_S0S1 = (0UL),
    NRF_GPIO_PIN_H0S1 = (1UL),
    NRF_GPIO_PIN_S0H1 = (2UL),
    NRF_GPIO_PIN_H0H1 = (3UL),
    NRF_GPIO_PIN_D0S1 = (4UL),
    NRF_GPIO_PIN_D0H1 = (5UL),
    NRF_GPIO_PIN_S0D1 = (6UL),
    NRF_GPIO_PIN_H0D1 = (7UL),
} nrf_gpio_pin_drive_t;




typedef enum
{
    NRF_GPIO_PIN_NOSENSE = (0UL),
    NRF_GPIO_PIN_SENSE_LOW = (3UL),
    NRF_GPIO_PIN_SENSE_HIGH = (2UL),
} nrf_gpio_pin_sense_t;
# 137 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_range_cfg_output(uint32_t pin_range_start, uint32_t pin_range_end);
# 152 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_range_cfg_input(uint32_t pin_range_start,
                                              uint32_t pin_range_end,
                                              nrf_gpio_pin_pull_t pull_config);
# 168 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg(
    uint32_t pin_number,
    nrf_gpio_pin_dir_t dir,
    nrf_gpio_pin_input_t input,
    nrf_gpio_pin_pull_t pull,
    nrf_gpio_pin_drive_t drive,
    nrf_gpio_pin_sense_t sense);
# 184 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_output(uint32_t pin_number);
# 195 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config);






static inline void nrf_gpio_cfg_default(uint32_t pin_number);







static inline void nrf_gpio_cfg_watcher(uint32_t pin_number);







static inline void nrf_gpio_input_disconnect(uint32_t pin_number);
# 229 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_sense_input(uint32_t pin_number,
                                              nrf_gpio_pin_pull_t pull_config,
                                              nrf_gpio_pin_sense_t sense_config);
# 240 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_cfg_sense_set(uint32_t pin_number, nrf_gpio_pin_sense_t sense_config);
# 249 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction);
# 258 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_set(uint32_t pin_number);
# 268 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_clear(uint32_t pin_number);
# 278 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_toggle(uint32_t pin_number);
# 292 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_pin_write(uint32_t pin_number, uint32_t value);
# 304 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_read(uint32_t pin_number);
# 313 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_out_read(uint32_t pin_number);
# 322 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline nrf_gpio_pin_sense_t nrf_gpio_pin_sense_get(uint32_t pin_number);
# 331 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline nrf_gpio_pin_dir_t nrf_gpio_pin_dir_get(uint32_t pin_number);
# 340 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask);
# 349 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask);
# 358 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t dir_mask);
# 367 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_dir_read(NRF_GPIO_Type const * p_reg);
# 376 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_in_read(NRF_GPIO_Type const * p_reg);
# 385 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_port_out_read(NRF_GPIO_Type const * p_reg);
# 394 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value);
# 403 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask);
# 412 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask);
# 421 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_ports_read(uint32_t start_port, uint32_t length, uint32_t * p_masks);
# 431 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline void nrf_gpio_latches_read(uint32_t start_port, uint32_t length,
                                           uint32_t * p_masks);
# 441 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline uint32_t nrf_gpio_pin_latch_get(uint32_t pin_number);







static inline void nrf_gpio_pin_latch_clear(uint32_t pin_number);
# 462 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
static inline NRF_GPIO_Type * nrf_gpio_pin_port_decode(uint32_t * p_pin)
{
    if (0) { if (*p_pin < (32)) { } else { assert_nrf_callback((uint16_t)464, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_gpio.h"); } };


    return ((NRF_GPIO_Type*) 0x50000000UL);
# 479 "../../../../../../modules/nrfx/hal/nrf_gpio.h"
}


static inline void nrf_gpio_range_cfg_output(uint32_t pin_range_start, uint32_t pin_range_end)
{

    for (; pin_range_start <= pin_range_end; pin_range_start++)
    {
        nrf_gpio_cfg_output(pin_range_start);
    }
}


static inline void nrf_gpio_range_cfg_input(uint32_t pin_range_start,
                                              uint32_t pin_range_end,
                                              nrf_gpio_pin_pull_t pull_config)
{

    for (; pin_range_start <= pin_range_end; pin_range_start++)
    {
        nrf_gpio_cfg_input(pin_range_start, pull_config);
    }
}


static inline void nrf_gpio_cfg(
    uint32_t pin_number,
    nrf_gpio_pin_dir_t dir,
    nrf_gpio_pin_input_t input,
    nrf_gpio_pin_pull_t pull,
    nrf_gpio_pin_drive_t drive,
    nrf_gpio_pin_sense_t sense)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    reg->PIN_CNF[pin_number] = ((uint32_t)dir << (0UL))
                               | ((uint32_t)input << (1UL))
                               | ((uint32_t)pull << (2UL))
                               | ((uint32_t)drive << (8UL))
                               | ((uint32_t)sense << (16UL));
}


static inline void nrf_gpio_cfg_output(uint32_t pin_number)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_OUTPUT,
        NRF_GPIO_PIN_INPUT_DISCONNECT,
        NRF_GPIO_PIN_NOPULL,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_CONNECT,
        pull_config,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_default(uint32_t pin_number)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_DISCONNECT,
        NRF_GPIO_PIN_NOPULL,
        NRF_GPIO_PIN_S0S1,
        NRF_GPIO_PIN_NOSENSE);
}


static inline void nrf_gpio_cfg_watcher(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    uint32_t cnf = reg->PIN_CNF[pin_number] & ~(0x1UL << (1UL));

    reg->PIN_CNF[pin_number] = cnf | ((0UL) << (1UL));
}


static inline void nrf_gpio_input_disconnect(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    uint32_t cnf = reg->PIN_CNF[pin_number] & ~(0x1UL << (1UL));

    reg->PIN_CNF[pin_number] = cnf | ((1UL) << (1UL));
}


static inline void nrf_gpio_cfg_sense_input(uint32_t pin_number,
                                              nrf_gpio_pin_pull_t pull_config,
                                              nrf_gpio_pin_sense_t sense_config)
{
    nrf_gpio_cfg(
        pin_number,
        NRF_GPIO_PIN_DIR_INPUT,
        NRF_GPIO_PIN_INPUT_CONNECT,
        pull_config,
        NRF_GPIO_PIN_S0S1,
        sense_config);
}


static inline void nrf_gpio_cfg_sense_set(uint32_t pin_number, nrf_gpio_pin_sense_t sense_config)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);


    reg->PIN_CNF[pin_number] &= ~(0x3UL << (16UL));
    reg->PIN_CNF[pin_number] |= (sense_config << (16UL));
}


static inline void nrf_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction)
{
    if (direction == NRF_GPIO_PIN_DIR_INPUT)
    {
        nrf_gpio_cfg(
            pin_number,
            NRF_GPIO_PIN_DIR_INPUT,
            NRF_GPIO_PIN_INPUT_CONNECT,
            NRF_GPIO_PIN_NOPULL,
            NRF_GPIO_PIN_S0S1,
            NRF_GPIO_PIN_NOSENSE);
    }
    else
    {
        NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);
        reg->DIRSET = (1UL << pin_number);
    }
}


static inline void nrf_gpio_pin_set(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    nrf_gpio_port_out_set(reg, 1UL << pin_number);
}


static inline void nrf_gpio_pin_clear(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    nrf_gpio_port_out_clear(reg, 1UL << pin_number);
}


static inline void nrf_gpio_pin_toggle(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);
    uint32_t pins_state = reg->OUT;

    reg->OUTSET = (~pins_state & (1UL << pin_number));
    reg->OUTCLR = (pins_state & (1UL << pin_number));
}


static inline void nrf_gpio_pin_write(uint32_t pin_number, uint32_t value)
{
    if (value == 0)
    {
        nrf_gpio_pin_clear(pin_number);
    }
    else
    {
        nrf_gpio_pin_set(pin_number);
    }
}


static inline uint32_t nrf_gpio_pin_read(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return ((nrf_gpio_port_in_read(reg) >> pin_number) & 1UL);
}


static inline uint32_t nrf_gpio_pin_out_read(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return ((nrf_gpio_port_out_read(reg) >> pin_number) & 1UL);
}


static inline nrf_gpio_pin_sense_t nrf_gpio_pin_sense_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (nrf_gpio_pin_sense_t)((reg->PIN_CNF[pin_number] &
                                   (0x3UL << (16UL))) >> (16UL));
}


static inline nrf_gpio_pin_dir_t nrf_gpio_pin_dir_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (nrf_gpio_pin_dir_t)((reg->PIN_CNF[pin_number] &
                                 (0x1UL << (0UL))) >> (0UL));
}


static inline void nrf_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask)
{
    p_reg->DIRSET = out_mask;
}


static inline void nrf_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask)
{
    p_reg->DIRCLR = in_mask;
}


static inline void nrf_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t value)
{
    p_reg->DIR = value;
}


static inline uint32_t nrf_gpio_port_dir_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->DIR;
}


static inline uint32_t nrf_gpio_port_in_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->IN;
}


static inline uint32_t nrf_gpio_port_out_read(NRF_GPIO_Type const * p_reg)
{
    return p_reg->OUT;
}


static inline void nrf_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value)
{
    p_reg->OUT = value;
}


static inline void nrf_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask)
{
    p_reg->OUTSET = set_mask;
}


static inline void nrf_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask)
{
    p_reg->OUTCLR = clr_mask;
}


static inline void nrf_gpio_ports_read(uint32_t start_port, uint32_t length, uint32_t * p_masks)
{
    NRF_GPIO_Type * gpio_regs[1] = {((NRF_GPIO_Type*) 0x50000000UL)};

    if (0) { if (start_port + length <= 1) { } else { assert_nrf_callback((uint16_t)753, (uint8_t *)"../../../../../../modules/nrfx/hal/nrf_gpio.h"); } };
    uint32_t i;

    for (i = start_port; i < (start_port + length); i++)
    {
        *p_masks = nrf_gpio_port_in_read(gpio_regs[i]);
        p_masks++;
    }
}



static inline void nrf_gpio_latches_read(uint32_t start_port, uint32_t length, uint32_t * p_masks)
{
    NRF_GPIO_Type * gpio_regs[1] = {((NRF_GPIO_Type*) 0x50000000UL)};
    uint32_t i;

    for (i = start_port; i < (start_port + length); i++)
    {
        *p_masks = gpio_regs[i]->LATCH;
        p_masks++;
    }
}


static inline uint32_t nrf_gpio_pin_latch_get(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    return (reg->LATCH & (1 << pin_number)) ? 1 : 0;
}


static inline void nrf_gpio_pin_latch_clear(uint32_t pin_number)
{
    NRF_GPIO_Type * reg = nrf_gpio_pin_port_decode(&pin_number);

    reg->LATCH = (1 << pin_number);
}
# 44 "../../../../../../components/boards/boards.h" 2
# 65 "../../../../../../components/boards/boards.h"
# 1 "../../../../../../components/boards/pca10040.h" 1
# 66 "../../../../../../components/boards/boards.h" 2
# 107 "../../../../../../components/boards/boards.h"

# 107 "../../../../../../components/boards/boards.h" 3 4
_Bool 
# 107 "../../../../../../components/boards/boards.h"
    bsp_board_led_state_get(uint32_t led_idx);






void bsp_board_led_on(uint32_t led_idx);






void bsp_board_led_off(uint32_t led_idx);






void bsp_board_led_invert(uint32_t led_idx);



void bsp_board_leds_off(void);




void bsp_board_leds_on(void);
# 147 "../../../../../../components/boards/boards.h"
void bsp_board_init(uint32_t init_flags);
# 156 "../../../../../../components/boards/boards.h"
uint32_t bsp_board_pin_to_led_idx(uint32_t pin_number);
# 165 "../../../../../../components/boards/boards.h"
uint32_t bsp_board_led_idx_to_pin(uint32_t led_idx);
# 174 "../../../../../../components/boards/boards.h"

# 174 "../../../../../../components/boards/boards.h" 3 4
_Bool 
# 174 "../../../../../../components/boards/boards.h"
    bsp_board_button_state_get(uint32_t button_idx);
# 183 "../../../../../../components/boards/boards.h"
uint32_t bsp_board_pin_to_button_idx(uint32_t pin_number);
# 193 "../../../../../../components/boards/boards.h"
uint32_t bsp_board_button_idx_to_pin(uint32_t button_idx);
# 59 "../../../../../../components/libraries/bsp/bsp.h" 2


# 1 "../../../../../../components/libraries/button/app_button.h" 1
# 82 "../../../../../../components/libraries/button/app_button.h"
typedef void (*app_button_handler_t)(uint8_t pin_no, uint8_t button_action);


typedef struct
{
    uint8_t pin_no;
    uint8_t active_state;



    nrf_gpio_pin_pull_t pull_cfg;
    app_button_handler_t button_handler;
} app_button_cfg_t;
# 111 "../../../../../../components/libraries/button/app_button.h"
uint32_t app_button_init(app_button_cfg_t const * p_buttons,
                         uint8_t button_count,
                         uint32_t detection_delay);





uint32_t app_button_enable(void);





uint32_t app_button_disable(void);








# 133 "../../../../../../components/libraries/button/app_button.h" 3 4
_Bool 
# 133 "../../../../../../components/libraries/button/app_button.h"
    app_button_is_pushed(uint8_t button_id);
# 62 "../../../../../../components/libraries/bsp/bsp.h" 2
# 77 "../../../../../../components/libraries/bsp/bsp.h"
typedef uint8_t bsp_button_action_t;
# 111 "../../../../../../components/libraries/bsp/bsp.h"
typedef enum
{
    BSP_INDICATE_FIRST = 0,
    BSP_INDICATE_IDLE = BSP_INDICATE_FIRST,
    BSP_INDICATE_SCANNING,
    BSP_INDICATE_ADVERTISING,
    BSP_INDICATE_ADVERTISING_WHITELIST,
    BSP_INDICATE_ADVERTISING_SLOW,
    BSP_INDICATE_ADVERTISING_DIRECTED,
    BSP_INDICATE_BONDING,
    BSP_INDICATE_CONNECTED,
    BSP_INDICATE_SENT_OK,
    BSP_INDICATE_SEND_ERROR,
    BSP_INDICATE_RCV_OK,
    BSP_INDICATE_RCV_ERROR,
    BSP_INDICATE_FATAL_ERROR,
    BSP_INDICATE_ALERT_0,
    BSP_INDICATE_ALERT_1,
    BSP_INDICATE_ALERT_2,
    BSP_INDICATE_ALERT_3,
    BSP_INDICATE_ALERT_OFF,
    BSP_INDICATE_USER_STATE_OFF,
    BSP_INDICATE_USER_STATE_0,
    BSP_INDICATE_USER_STATE_1,
    BSP_INDICATE_USER_STATE_2,
    BSP_INDICATE_USER_STATE_3,
    BSP_INDICATE_USER_STATE_ON,
    BSP_INDICATE_LAST = BSP_INDICATE_USER_STATE_ON
} bsp_indication_t;





typedef enum
{
    BSP_EVENT_NOTHING = 0,
    BSP_EVENT_DEFAULT,
    BSP_EVENT_CLEAR_BONDING_DATA,
    BSP_EVENT_CLEAR_ALERT,
    BSP_EVENT_DISCONNECT,
    BSP_EVENT_ADVERTISING_START,
    BSP_EVENT_ADVERTISING_STOP,
    BSP_EVENT_WHITELIST_OFF,
    BSP_EVENT_BOND,
    BSP_EVENT_RESET,
    BSP_EVENT_SLEEP,
    BSP_EVENT_WAKEUP,
    BSP_EVENT_SYSOFF,
    BSP_EVENT_DFU,
    BSP_EVENT_KEY_0,
    BSP_EVENT_KEY_1,
    BSP_EVENT_KEY_2,
    BSP_EVENT_KEY_3,
    BSP_EVENT_KEY_4,
    BSP_EVENT_KEY_5,
    BSP_EVENT_KEY_6,
    BSP_EVENT_KEY_7,
    BSP_EVENT_KEY_LAST = BSP_EVENT_KEY_7,
} bsp_event_t;


typedef struct
{
    bsp_event_t push_event;
    bsp_event_t long_push_event;
    bsp_event_t release_event;
} bsp_button_event_cfg_t;
# 187 "../../../../../../components/libraries/bsp/bsp.h"
typedef void (* bsp_event_callback_t)(bsp_event_t);
# 207 "../../../../../../components/libraries/bsp/bsp.h"
uint32_t bsp_init(uint32_t type, bsp_event_callback_t callback);
# 220 "../../../../../../components/libraries/bsp/bsp.h"

# 220 "../../../../../../components/libraries/bsp/bsp.h" 3 4
_Bool 
# 220 "../../../../../../components/libraries/bsp/bsp.h"
    bsp_button_is_pressed(uint32_t button);
# 235 "../../../../../../components/libraries/bsp/bsp.h"
uint32_t bsp_event_to_button_action_assign(uint32_t button, bsp_button_action_t action, bsp_event_t event);
# 251 "../../../../../../components/libraries/bsp/bsp.h"
uint32_t bsp_indication_set(bsp_indication_t indicate);
# 263 "../../../../../../components/libraries/bsp/bsp.h"
uint32_t bsp_buttons_enable(void);
# 275 "../../../../../../components/libraries/bsp/bsp.h"
uint32_t bsp_buttons_disable(void);
# 288 "../../../../../../components/libraries/bsp/bsp.h"
uint32_t bsp_wakeup_button_enable(uint32_t button_idx);
# 298 "../../../../../../components/libraries/bsp/bsp.h"
uint32_t bsp_wakeup_button_disable(uint32_t button_idx);
# 61 "../../../../../../components/libraries/bsp/bsp_btn_ble.h" 2






typedef void (*bsp_btn_ble_error_handler_t) (uint32_t nrf_error);
# 84 "../../../../../../components/libraries/bsp/bsp_btn_ble.h"
uint32_t bsp_btn_ble_init(bsp_btn_ble_error_handler_t error_handler, bsp_event_t * p_startup_bsp_evt);






uint32_t bsp_btn_ble_sleep_mode_prepare(void);
# 74 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/libraries/sensorsim/sensorsim.h" 1
# 61 "../../../../../../components/libraries/sensorsim/sensorsim.h"
typedef struct
{
    uint32_t min;
    uint32_t max;
    uint32_t incr;
    
# 66 "../../../../../../components/libraries/sensorsim/sensorsim.h" 3 4
   _Bool 
# 66 "../../../../../../components/libraries/sensorsim/sensorsim.h"
            start_at_max;
} sensorsim_cfg_t;


typedef struct
{
    uint32_t current_val;
    
# 73 "../../../../../../components/libraries/sensorsim/sensorsim.h" 3 4
   _Bool 
# 73 "../../../../../../components/libraries/sensorsim/sensorsim.h"
            is_increasing;
} sensorsim_state_t;






void sensorsim_init(sensorsim_state_t * p_state,
                        const sensorsim_cfg_t * p_cfg);
# 91 "../../../../../../components/libraries/sensorsim/sensorsim.h"
uint32_t sensorsim_measure(sensorsim_state_t * p_state,
                               const sensorsim_cfg_t * p_cfg);
# 101 "../../../../../../components/libraries/sensorsim/sensorsim.h"
void sensorsim_increment(sensorsim_state_t * p_state,
                         const sensorsim_cfg_t * p_cfg);
# 111 "../../../../../../components/libraries/sensorsim/sensorsim.h"
void sensorsim_decrement(sensorsim_state_t * p_state,
                         const sensorsim_cfg_t * p_cfg);
# 75 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/ble/common/ble_conn_state.h" 1
# 70 "../../../../../../components/ble/common/ble_conn_state.h"
# 1 "../../../../../../components/libraries/atomic/nrf_atomic.h" 1
# 59 "../../../../../../components/libraries/atomic/nrf_atomic.h"
typedef volatile uint32_t nrf_atomic_u32_t;




typedef volatile uint32_t nrf_atomic_flag_t;
# 80 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_store(nrf_atomic_u32_t * p_data, uint32_t value);
# 90 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_store(nrf_atomic_u32_t * p_data, uint32_t value);
# 100 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_or(nrf_atomic_u32_t * p_data, uint32_t value);
# 110 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_or(nrf_atomic_u32_t * p_data, uint32_t value);
# 120 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_and(nrf_atomic_u32_t * p_data, uint32_t value);
# 130 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_and(nrf_atomic_u32_t * p_data, uint32_t value);
# 140 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_xor(nrf_atomic_u32_t * p_data, uint32_t value);
# 150 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_xor(nrf_atomic_u32_t * p_data, uint32_t value);
# 160 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_add(nrf_atomic_u32_t * p_data, uint32_t value);
# 170 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_add(nrf_atomic_u32_t * p_data, uint32_t value);
# 180 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_sub(nrf_atomic_u32_t * p_data, uint32_t value);
# 190 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_sub(nrf_atomic_u32_t * p_data, uint32_t value);
# 206 "../../../../../../components/libraries/atomic/nrf_atomic.h"

# 206 "../../../../../../components/libraries/atomic/nrf_atomic.h" 3 4
_Bool 
# 206 "../../../../../../components/libraries/atomic/nrf_atomic.h"
    nrf_atomic_u32_cmp_exch(nrf_atomic_u32_t * p_data,
                             uint32_t * p_expected,
                             uint32_t desired);
# 218 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_fetch_sub_hs(nrf_atomic_u32_t * p_data, uint32_t value);
# 228 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_u32_sub_hs(nrf_atomic_u32_t * p_data, uint32_t value);
# 239 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_set_fetch(nrf_atomic_flag_t * p_data);
# 248 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_set(nrf_atomic_flag_t * p_data);
# 257 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_clear_fetch(nrf_atomic_flag_t * p_data);
# 266 "../../../../../../components/libraries/atomic/nrf_atomic.h"
uint32_t nrf_atomic_flag_clear(nrf_atomic_flag_t * p_data);
# 71 "../../../../../../components/ble/common/ble_conn_state.h" 2







typedef enum
{
    BLE_CONN_STATUS_INVALID,
    BLE_CONN_STATUS_DISCONNECTED,
    BLE_CONN_STATUS_CONNECTED,
} ble_conn_state_status_t;







typedef struct
{
    uint32_t len;
    uint16_t conn_handles[(20)];
} ble_conn_state_conn_handle_list_t;





typedef enum
{
    BLE_CONN_STATE_USER_FLAG0 = 0,
    BLE_CONN_STATE_USER_FLAG1,
    BLE_CONN_STATE_USER_FLAG2,
    BLE_CONN_STATE_USER_FLAG3,
    BLE_CONN_STATE_USER_FLAG4,
    BLE_CONN_STATE_USER_FLAG5,
    BLE_CONN_STATE_USER_FLAG6,
    BLE_CONN_STATE_USER_FLAG7,
    BLE_CONN_STATE_USER_FLAG8,
    BLE_CONN_STATE_USER_FLAG9,
    BLE_CONN_STATE_USER_FLAG10,
    BLE_CONN_STATE_USER_FLAG11,
    BLE_CONN_STATE_USER_FLAG12,
    BLE_CONN_STATE_USER_FLAG13,
    BLE_CONN_STATE_USER_FLAG14,
    BLE_CONN_STATE_USER_FLAG15,
    BLE_CONN_STATE_USER_FLAG16,
    BLE_CONN_STATE_USER_FLAG17,
    BLE_CONN_STATE_USER_FLAG18,
    BLE_CONN_STATE_USER_FLAG19,
    BLE_CONN_STATE_USER_FLAG20,
    BLE_CONN_STATE_USER_FLAG21,
    BLE_CONN_STATE_USER_FLAG22,
    BLE_CONN_STATE_USER_FLAG23,
    BLE_CONN_STATE_USER_FLAG_INVALID,
} ble_conn_state_user_flag_id_t;
# 137 "../../../../../../components/ble/common/ble_conn_state.h"
typedef void (*ble_conn_state_user_function_t)(uint16_t conn_handle, void * p_context);
# 150 "../../../../../../components/ble/common/ble_conn_state.h"
void ble_conn_state_init(void);
# 164 "../../../../../../components/ble/common/ble_conn_state.h"

# 164 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 164 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_valid(uint16_t conn_handle);
# 174 "../../../../../../components/ble/common/ble_conn_state.h"
uint8_t ble_conn_state_role(uint16_t conn_handle);
# 184 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_status_t ble_conn_state_status(uint16_t conn_handle);
# 194 "../../../../../../components/ble/common/ble_conn_state.h"

# 194 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 194 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_encrypted(uint16_t conn_handle);
# 206 "../../../../../../components/ble/common/ble_conn_state.h"

# 206 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 206 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_mitm_protected(uint16_t conn_handle);






uint32_t ble_conn_state_conn_count(void);
# 222 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_central_conn_count(void);
# 231 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_peripheral_conn_count(void);
# 240 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_conn_handle_list_t ble_conn_state_conn_handles(void);
# 251 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_conn_handle_list_t ble_conn_state_central_handles(void);
# 262 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_conn_handle_list_t ble_conn_state_periph_handles(void);
# 277 "../../../../../../components/ble/common/ble_conn_state.h"
uint16_t ble_conn_state_conn_idx(uint16_t conn_handle);
# 290 "../../../../../../components/ble/common/ble_conn_state.h"
ble_conn_state_user_flag_id_t ble_conn_state_user_flag_acquire(void);
# 300 "../../../../../../components/ble/common/ble_conn_state.h"

# 300 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
_Bool 
# 300 "../../../../../../components/ble/common/ble_conn_state.h"
    ble_conn_state_user_flag_get(uint16_t conn_handle, ble_conn_state_user_flag_id_t flag_id);
# 309 "../../../../../../components/ble/common/ble_conn_state.h"
void ble_conn_state_user_flag_set(uint16_t conn_handle,
                                  ble_conn_state_user_flag_id_t flag_id,
                                  
# 311 "../../../../../../components/ble/common/ble_conn_state.h" 3 4
                                 _Bool 
# 311 "../../../../../../components/ble/common/ble_conn_state.h"
                                                               value);
# 321 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_for_each_connected(ble_conn_state_user_function_t user_function,
                                           void * p_context);
# 333 "../../../../../../components/ble/common/ble_conn_state.h"
uint32_t ble_conn_state_for_each_set_user_flag(ble_conn_state_user_flag_id_t flag_id,
                                               ble_conn_state_user_function_t user_function,
                                               void * p_context);
# 76 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h" 1
# 82 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
typedef enum
{
  NRF_BLE_GATT_EVT_ATT_MTU_UPDATED = 0xA77,
  NRF_BLE_GATT_EVT_DATA_LENGTH_UPDATED = 0xDA7A,
} nrf_ble_gatt_evt_id_t;


typedef struct
{
    nrf_ble_gatt_evt_id_t evt_id;
    uint16_t conn_handle;
    union
    {
        uint16_t att_mtu_effective;

        uint8_t data_length;

    } params;
} nrf_ble_gatt_evt_t;


typedef struct nrf_ble_gatt_s nrf_ble_gatt_t;





typedef void (*nrf_ble_gatt_evt_handler_t) (nrf_ble_gatt_t * p_gatt, nrf_ble_gatt_evt_t const * p_evt);


typedef struct
{
    uint16_t att_mtu_desired;
    uint16_t att_mtu_effective;
    
# 116 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h" 3 4
   _Bool 
# 116 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
            att_mtu_exchange_pending;
    
# 117 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h" 3 4
   _Bool 
# 117 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
            att_mtu_exchange_requested;

    uint8_t data_length_desired;
    uint8_t data_length_effective;

} nrf_ble_gatt_link_t;



struct nrf_ble_gatt_s
{
    uint16_t att_mtu_desired_periph;
    uint16_t att_mtu_desired_central;
    uint8_t data_length;
    nrf_ble_gatt_link_t links[(1 + 0)];
    nrf_ble_gatt_evt_handler_t evt_handler;
};
# 144 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_init(nrf_ble_gatt_t * p_gatt, nrf_ble_gatt_evt_handler_t evt_handler);
# 158 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_att_mtu_periph_set(nrf_ble_gatt_t * p_gatt, uint16_t desired_mtu);
# 172 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_att_mtu_central_set(nrf_ble_gatt_t * p_gatt, uint16_t desired_mtu);
# 186 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_data_length_set(nrf_ble_gatt_t * p_gatt,
                                        uint16_t conn_handle,
                                        uint8_t data_length);
# 209 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
ret_code_t nrf_ble_gatt_data_length_get(nrf_ble_gatt_t const * p_gatt,
                                        uint16_t conn_handle,
                                        uint8_t * p_data_length);
# 221 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
void nrf_ble_gatt_on_ble_evt(ble_evt_t const * p_ble_evt, void * p_context);
# 233 "../../../../../../components/ble/nrf_ble_gatt/nrf_ble_gatt.h"
uint16_t nrf_ble_gatt_eff_mtu_get(nrf_ble_gatt_t const * p_gatt, uint16_t conn_handle);
# 77 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2

# 1 "../../../../../../components/libraries/log/nrf_log.h" 1
# 53 "../../../../../../components/libraries/log/nrf_log.h"
# 1 "../../../../../../components/libraries/experimental_section_vars/nrf_section.h" 1
# 54 "../../../../../../components/libraries/log/nrf_log.h" 2
# 81 "../../../../../../components/libraries/log/nrf_log.h"
# 1 "../../../../../../components/libraries/log/src/nrf_log_internal.h" 1
# 48 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
# 1 "../../../../../../components/libraries/log/nrf_log_instance.h" 1
# 45 "../../../../../../components/libraries/log/nrf_log_instance.h"
# 1 "../../../../../../components/libraries/log/nrf_log_types.h" 1
# 48 "../../../../../../components/libraries/log/nrf_log_types.h"
typedef enum
{
    NRF_LOG_SEVERITY_NONE,
    NRF_LOG_SEVERITY_ERROR,
    NRF_LOG_SEVERITY_WARNING,
    NRF_LOG_SEVERITY_INFO,
    NRF_LOG_SEVERITY_DEBUG,
    NRF_LOG_SEVERITY_INFO_RAW,
} nrf_log_severity_t;






typedef struct
{
    uint16_t order_idx;
    uint16_t filter;
} nrf_log_module_dynamic_data_t;






typedef struct
{
    uint32_t filter_lvls;
} nrf_log_module_filter_data_t;






typedef struct
{
    const char * p_module_name;
    uint8_t info_color_id;
    uint8_t debug_color_id;
    nrf_log_severity_t compiled_lvl;
    nrf_log_severity_t initial_lvl;
} nrf_log_module_const_data_t;
# 46 "../../../../../../components/libraries/log/nrf_log_instance.h" 2
# 76 "../../../../../../components/libraries/log/nrf_log_instance.h"
extern nrf_log_module_dynamic_data_t * __start_log_dynamic_data; extern void * __stop_log_dynamic_data;
extern nrf_log_module_filter_data_t * __start_log_filter_data; extern void * __stop_log_filter_data;
extern nrf_log_module_const_data_t * __start_log_const_data; extern void * __stop_log_const_data;
# 49 "../../../../../../components/libraries/log/src/nrf_log_internal.h" 2
# 1 "../../../../../../components/libraries/log/nrf_log_types.h" 1
# 50 "../../../../../../components/libraries/log/src/nrf_log_internal.h" 2
# 310 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
extern nrf_log_module_dynamic_data_t m_nrf_log_app_logs_data_dynamic;
extern const nrf_log_module_const_data_t m_nrf_log_app_logs_data_const;
# 363 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t data : 29;
} nrf_log_generic_header_t;

typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t severity : 3;
    uint32_t nargs : 4;
    uint32_t addr : 22;
} nrf_log_std_header_t;

typedef struct
{
    uint32_t type : 2;
    uint32_t in_progress: 1;
    uint32_t severity : 3;
    uint32_t offset : 10;
    uint32_t reserved : 6;
    uint32_t len : 10;
} nrf_log_hexdump_header_t;

typedef union
{
    nrf_log_generic_header_t generic;
    nrf_log_std_header_t std;
    nrf_log_hexdump_header_t hexdump;
    uint32_t raw;
} nrf_log_main_header_t;

typedef struct
{
    nrf_log_main_header_t base;
    uint16_t module_id;
    uint16_t dropped;
    uint32_t timestamp;
} nrf_log_header_t;
# 414 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_0(uint32_t severity_mid, char const * const p_str);
# 423 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_1(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0);
# 434 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_2(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1);
# 446 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_3(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2);
# 459 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_4(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3);
# 473 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_5(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3,
                            uint32_t val4);
# 488 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_std_6(uint32_t severity_mid,
                            char const * const p_str,
                            uint32_t val0,
                            uint32_t val1,
                            uint32_t val2,
                            uint32_t val3,
                            uint32_t val4,
                            uint32_t val5);
# 506 "../../../../../../components/libraries/log/src/nrf_log_internal.h"
void nrf_log_frontend_hexdump(uint32_t severity_mid,
                              const void * const p_data,
                              uint16_t length);






uint8_t nrf_log_getchar(void);
# 82 "../../../../../../components/libraries/log/nrf_log.h" 2
# 262 "../../../../../../components/libraries/log/nrf_log.h"
char const * nrf_log_push(char * const p_str);
# 79 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 1
# 58 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
# 1 "../../../../../../components/libraries/log/src/nrf_log_ctrl_internal.h" 1
# 59 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 2
# 1 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 1
# 71 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
typedef void nrf_log_entry_t;



typedef struct nrf_log_backend_s nrf_log_backend_t;




typedef struct
{



    void (*put)(nrf_log_backend_t const * p_backend, nrf_log_entry_t * p_entry);




    void (*panic_set)(nrf_log_backend_t const * p_backend);




    void (*flush)(nrf_log_backend_t const * p_backend);
} nrf_log_backend_api_t;




typedef struct
{
    nrf_log_backend_t const * p_next;
    uint8_t id;
    
# 105 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
   _Bool 
# 105 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                             enabled;
} nrf_log_backend_cb_t;




struct nrf_log_backend_s
{
    nrf_log_backend_api_t const * p_api;
    void * p_ctx;
    char * p_name;
    nrf_log_backend_cb_t * p_cb;
};
# 128 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
extern nrf_log_backend_t * __start_log_backends; extern void * __stop_log_backends;
# 158 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_put(nrf_log_backend_t const * const p_backend,
                                         nrf_log_entry_t * p_msg);






static inline void nrf_log_backend_panic_set(nrf_log_backend_t const * const p_backend);
# 175 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_flush(nrf_log_backend_t const * const p_backend);
# 186 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline void nrf_log_backend_id_set(nrf_log_backend_t const * const p_backend, uint8_t id);
# 196 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline uint8_t nrf_log_backend_id_get(nrf_log_backend_t const * const p_backend);






static inline void nrf_log_backend_enable(nrf_log_backend_t const * const p_backend);






static inline void nrf_log_backend_disable(nrf_log_backend_t const * const p_backend);
# 219 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
static inline 
# 219 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
               _Bool 
# 219 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                    nrf_log_backend_is_enabled(nrf_log_backend_t const * const p_backend);


static inline void nrf_log_backend_put(nrf_log_backend_t const * const p_backend,
                                         nrf_log_entry_t * p_msg)
{
    p_backend->p_api->put(p_backend, p_msg);
}

static inline void nrf_log_backend_panic_set(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_api->panic_set(p_backend);
}

static inline void nrf_log_backend_flush(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_api->flush(p_backend);
}

static inline void nrf_log_backend_id_set(nrf_log_backend_t const * const p_backend, uint8_t id)
{
    p_backend->p_cb->id = id;
}

static inline uint8_t nrf_log_backend_id_get(nrf_log_backend_t const * const p_backend)
{
    return p_backend->p_cb->id;
}

static inline void nrf_log_backend_enable(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_cb->enabled = 
# 250 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
                              1
# 250 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                                  ;
}

static inline void nrf_log_backend_disable(nrf_log_backend_t const * const p_backend)
{
    p_backend->p_cb->enabled = 
# 255 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
                              0
# 255 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                                   ;
}

static inline 
# 258 "../../../../../../components/libraries/log/nrf_log_backend_interface.h" 3 4
               _Bool 
# 258 "../../../../../../components/libraries/log/nrf_log_backend_interface.h"
                    nrf_log_backend_is_enabled(nrf_log_backend_t const * const p_backend)
{
    return p_backend->p_cb->enabled;
}
# 60 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 2
# 69 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
typedef uint32_t (*nrf_log_timestamp_func_t)(void);
# 124 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
ret_code_t nrf_log_init(nrf_log_timestamp_func_t timestamp_func, uint32_t timestamp_freq);
# 134 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
int32_t nrf_log_backend_add(nrf_log_backend_t const * p_backend, nrf_log_severity_t severity);







void nrf_log_backend_remove(nrf_log_backend_t const * p_backend);







void nrf_log_panic(void);
# 161 "../../../../../../components/libraries/log/nrf_log_ctrl.h"

# 161 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
_Bool 
# 161 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
    nrf_log_frontend_dequeue(void);






uint32_t nrf_log_module_cnt_get(void);
# 177 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
const char * nrf_log_module_name_get(uint32_t module_id, 
# 177 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
                                                        _Bool 
# 177 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
                                                             is_ordered_idx);
# 187 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
uint8_t nrf_log_color_id_get(uint32_t module_id, nrf_log_severity_t severity);
# 198 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
void nrf_log_module_filter_set(uint32_t backend_id,
                               uint32_t module_id,
                               nrf_log_severity_t severity);
# 214 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
nrf_log_severity_t nrf_log_module_filter_get(uint32_t backend_id,
                                             uint32_t module_id,
                                             
# 216 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
                                            _Bool 
# 216 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
                                                     is_ordered_idx,
                                             
# 217 "../../../../../../components/libraries/log/nrf_log_ctrl.h" 3 4
                                            _Bool 
# 217 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
                                                     dynamic);






ret_code_t nrf_log_config_store(void);
# 233 "../../../../../../components/libraries/log/nrf_log_ctrl.h"
ret_code_t nrf_log_config_load(void);
# 80 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 1 "../../../../../../components/libraries/log/nrf_log_default_backends.h" 1
# 73 "../../../../../../components/libraries/log/nrf_log_default_backends.h"
void nrf_log_default_backends_init(void);
# 81 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 2
# 114 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
static nrf_ble_gatt_t m_gatt; _Static_assert(1, "NRF_SDH_BLE_ENABLED not set!"); _Static_assert(1 < 4, "Priority level unavailable."); static nrf_sdh_ble_evt_observer_t m_gatt_obs __attribute__ ((section("." "sdh_ble_observers1"))) __attribute__((used)) = { .handler = nrf_ble_gatt_on_ble_evt, .p_context = &m_gatt };
static ble_advertising_t m_advertising; _Static_assert(1, "NRF_SDH_BLE_ENABLED not set!"); _Static_assert(1 < 4, "Priority level unavailable."); static nrf_sdh_ble_evt_observer_t m_advertising_ble_obs __attribute__ ((section("." "sdh_ble_observers1"))) __attribute__((used)) = { .handler = ble_advertising_on_ble_evt, .p_context = &m_advertising }; _Static_assert(1, "NRF_SDH_SOC_ENABLED not set!"); _Static_assert(1 < 2, "Priority level unavailable."); static nrf_sdh_soc_evt_observer_t m_advertising_soc_obs __attribute__ ((section("." "sdh_soc_observers1"))) __attribute__((used)) = { .handler = ble_advertising_on_sys_evt, .p_context = &m_advertising };

static uint16_t m_conn_handle = 0xFFFF;






static ble_uuid_t m_adv_uuids[] =
{
    {0x180A, 0x01}
};


static void advertising_start();







static void gap_params_init(void)
{
    ble_gap_conn_params_t gap_conn_params;
    ble_gap_conn_sec_mode_t sec_mode;

    do {(&sec_mode)->sm = 1; (&sec_mode)->lv = 1;} while(0);

    sd_ble_gap_device_name_set(&sec_mode,
                               (const uint8_t *)"Nordic_Template",
                               strlen("Nordic_Template"));





    memset(&gap_conn_params, 0, sizeof(gap_conn_params));

    gap_conn_params.min_conn_interval = (((100) * 1000) / (UNIT_1_25_MS));
    gap_conn_params.max_conn_interval = (((200) * 1000) / (UNIT_1_25_MS));
    gap_conn_params.slave_latency = 0;
    gap_conn_params.conn_sup_timeout = (((4000) * 1000) / (UNIT_10_MS));

    sd_ble_gap_ppcp_set(&gap_conn_params);
}




static void gatt_init(void)
{
    ret_code_t err_code = nrf_ble_gatt_init(&m_gatt, 
# 168 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 3 4
                                                    0
# 168 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
                                                        );
    do { const uint32_t LOCAL_ERR_CODE = (err_code); if (LOCAL_ERR_CODE != ((0x0) + 0)) { do { app_error_handler_bare((LOCAL_ERR_CODE)); } while (0); } } while (0);
}
# 201 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
static void services_init(void)
{
# 226 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
}
# 239 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
static void on_conn_params_evt(ble_conn_params_evt_t * p_evt)
{
    ret_code_t err_code;

    if (p_evt->evt_type == BLE_CONN_PARAMS_EVT_FAILED)
    {
        err_code = sd_ble_gap_disconnect(m_conn_handle, 0x3B);
        do { const uint32_t LOCAL_ERR_CODE = (err_code); if (LOCAL_ERR_CODE != ((0x0) + 0)) { do { app_error_handler_bare((LOCAL_ERR_CODE)); } while (0); } } while (0);
    }
}






static void conn_params_error_handler(uint32_t nrf_error)
{
    do { app_error_handler_bare((nrf_error)); } while (0);
}




static void conn_params_init(void)
{
    ble_conn_params_init_t cp_init;

    memset(&cp_init, 0, sizeof(cp_init));

    cp_init.p_conn_params = 
# 269 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 3 4
                                            0
# 269 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
                                                ;
    cp_init.first_conn_params_update_delay = ((uint32_t)((((5000) * (uint64_t)32768) + ((1000 * (0 + 1)) / 2)) / (1000 * (0 + 1))));
    cp_init.next_conn_params_update_delay = ((uint32_t)((((30000) * (uint64_t)32768) + ((1000 * (0 + 1)) / 2)) / (1000 * (0 + 1))));
    cp_init.max_conn_params_update_count = 3;
    cp_init.start_on_notify_cccd_handle = 0x0000;
    cp_init.disconnect_on_fail = 
# 274 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 3 4
                                            0
# 274 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
                                                 ;
    cp_init.evt_handler = on_conn_params_evt;
    cp_init.error_handler = conn_params_error_handler;

    ble_conn_params_init(&cp_init);
}







static void sleep_mode_enter(void)
{
    bsp_indication_set(BSP_INDICATE_IDLE);


    bsp_btn_ble_sleep_mode_prepare();


    sd_power_system_off();
}
# 305 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
static void on_adv_evt(ble_adv_evt_t ble_adv_evt)
{

    switch (ble_adv_evt)
    {
        case BLE_ADV_EVT_FAST:
            bsp_indication_set(BSP_INDICATE_ADVERTISING);
            break;

        case BLE_ADV_EVT_IDLE:
            sleep_mode_enter();
            break;

        default:
            break;
    }
}







static void ble_evt_handler(ble_evt_t const * p_ble_evt, void * p_context)
{
    switch (p_ble_evt->header.evt_id)
    {
        case BLE_GAP_EVT_DISCONNECTED:
            break;

        case BLE_GAP_EVT_CONNECTED:
            bsp_indication_set(BSP_INDICATE_CONNECTED);
            m_conn_handle = p_ble_evt->evt.gap_evt.conn_handle;
            break;

        case BLE_GATTC_EVT_TIMEOUT:

            sd_ble_gap_disconnect(p_ble_evt->evt.gattc_evt.conn_handle,
                                  0x13);
            break;

        case BLE_GATTS_EVT_TIMEOUT:

            sd_ble_gap_disconnect(p_ble_evt->evt.gatts_evt.conn_handle,
                                  0x13);
            break;

        case BLE_EVT_USER_MEM_REQUEST:
            sd_ble_user_mem_reply(p_ble_evt->evt.gattc_evt.conn_handle, 
# 354 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 3 4
                                                                       0
# 354 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
                                                                           );
            break;

        case BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST:
        {
            ble_gatts_evt_rw_authorize_request_t req;
            ble_gatts_rw_authorize_reply_params_t auth_reply;

            req = p_ble_evt->evt.gatts_evt.params.authorize_request;

            if (req.type != 0x00)
            {
                if ((req.request.write.op == 0x04) ||
                    (req.request.write.op == 0x06) ||
                    (req.request.write.op == 0x05))
                {
                    if (req.type == 0x02)
                    {
                        auth_reply.type = 0x02;
                    }
                    else
                    {
                        auth_reply.type = 0x01;
                    }
                    auth_reply.params.write.gatt_status = 0x0180 + 2;
                    sd_ble_gatts_rw_authorize_reply(p_ble_evt->evt.gatts_evt.conn_handle,
                                                    &auth_reply);
                }
            }
        } break;

        default:

            break;
    }
}






static void ble_stack_init(void)
{

    nrf_sdh_enable_request();



    uint32_t ram_start = 0;
    nrf_sdh_ble_default_cfg_set(1, &ram_start);


    nrf_sdh_ble_enable(&ram_start);


    _Static_assert(1, "NRF_SDH_BLE_ENABLED not set!"); _Static_assert(3 < 4, "Priority level unavailable."); static nrf_sdh_ble_evt_observer_t m_ble_observer __attribute__ ((section("." "sdh_ble_observers3"))) __attribute__((used)) = { .handler = ble_evt_handler, .p_context = 
# 410 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 3 4
   0 
# 410 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
   };
}




static void advertising_init(void)
{
    ble_advertising_init_t init;

    memset(&init, 0, sizeof(init));

    init.advdata.name_type = BLE_ADVDATA_FULL_NAME;
    init.advdata.include_appearance = 
# 423 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 3 4
                                          1
# 423 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
                                              ;
    init.advdata.flags = ((0x02) | (0x04));
    init.advdata.uuids_complete.uuid_cnt = sizeof(m_adv_uuids) / sizeof(m_adv_uuids[0]);
    init.advdata.uuids_complete.p_uuids = m_adv_uuids;

    init.config.ble_adv_fast_enabled = 
# 428 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c" 3 4
                                       1
# 428 "/Users/guntherhuebler/Development/nRF52/SDK_15.2.0/examples/Logisteps/LogiSteps/pca10040/s132/ses/logi_ble_handler.c"
                                           ;
    init.config.ble_adv_fast_interval = 300;
    init.config.ble_adv_fast_timeout = 180;

    init.evt_handler = on_adv_evt;

    ble_advertising_init(&m_advertising, &init);

    ble_advertising_conn_cfg_tag_set(&m_advertising, 1);
}




static void advertising_start()
{
    ble_advertising_start(&m_advertising, BLE_ADV_MODE_FAST);
}
