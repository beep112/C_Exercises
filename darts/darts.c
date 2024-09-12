#include "darts.h"

int8_t score(coordinate_t dart) {
  float radius = sqrt((dart.x * dart.x) + (dart.y * dart.y));
  if (radius <= 1) {
    return 10;
  } else if (radius <= 5) {
    return 5;
  } else if (radius <= 10) {
    return 1;
  } else {
    return 0;
  }
}
