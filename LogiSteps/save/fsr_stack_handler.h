#ifndef FSR_STACK_HANDLER_H__
#define FSR_STACK_HANDLER_H__


#define fsr_stack_size 10

typedef struct {

  uint8_t top;
  uint8_t fsr1_values[fsr_stack_size];
  uint8_t fsr2_values[fsr_stack_size];

} fsr_stack;


#endif