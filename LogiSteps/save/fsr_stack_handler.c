#define fsr_buffer_size 1024

#include <stdint.h>
#include <stdbool.h>
#include "fsr_stack_handler.h"

/*
* Save fsr reading values in stack form. Need to check that stack has room before adding.
*/
void save_fsr_readings( fsr_stack buffer, uint8_t fsr1_value, uint8_t fsr2_value) {

  //save values into appropriate buffer
  buffer.fsr1_values[buffer.top] = fsr1_value;
  buffer.fsr2_values[buffer.top] = fsr2_value;

  //increment buffer head
  buffer.top = buffer.top + 1;

}

bool fsr_full( fsr_stack buffer ) {
  
  if( buffer.top = fsr_stack_size ) {
    return true;
  } else {
    return false;
  }

}