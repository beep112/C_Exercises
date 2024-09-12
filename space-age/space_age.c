#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
  double years = seconds / 31557600.0f;
  switch (planet) {
  case MERCURY:
    return years * 0.2408467;
  case VENUS:
    return years * 0.61519726;
  case EARTH:
    return years;
  case MARS:
    return years * 1.8808158;
  case JUPITER:
    return years * 11.862615;
  case SATURN:
    return years * 29.447498;
  case URANUS:
    return years * 84.016846;
  case NEPTUNE:
    return years * 164.79132;
  default:
    return -1;
  }
}
