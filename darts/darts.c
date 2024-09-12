#include "darts.h"
#include <stdio.h>

u_int8_t score(coordinate_t dart) {
  int radius = (int)sqrt((dart.x * dart.x) + (dart.y * dart.y));
  printf("Radius is: %d, for dart x: %f, y: %f\n", radius, dart.x, dart.y);
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
