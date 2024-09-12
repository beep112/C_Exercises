#include "resistor_color_duo.h"

// this pointer is an array
uint16_t color_code(resistor_band_t *color) {
  return (color[0] * 10) + (color[1]);
}
