#include "leap.h"
#include <stdbool.h>
#include <stdio.h>

bool leap_year(int year) {
  printf("Mod 4: %d, mod 100: %d, mod 400: %d\n", year % 4, year % 100,
         year % 400);
  if (year % 100 == 0) {
    if (year % 400 == 0) {
      return true;
    } else {
      return false;
    }
  } else if (year % 4 == 0) {
    return true;
  } else {
    return false;
  }
}
