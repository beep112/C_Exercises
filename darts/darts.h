#ifndef DARTS_H
#define DARTS_H
#include <stdint.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} coordinate_t;

int8_t score(coordinate_t dart);
#endif
