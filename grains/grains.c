#include "grains.h"
#include <stdint.h>

uint64_t square(uint8_t index) {
  if (index > 0 && index <= 64) {
    return (uint64_t)1 << (index - 1);
  } else {
    return 0;
  }
}

uint64_t total(void) { return ((((uint64_t)1 << 63) - 1) << 1) + 1; }
