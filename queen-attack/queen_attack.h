#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <stdint.h>

typedef enum { CAN_NOT_ATTACK, CAN_ATTACK, INVALID_POSITION } attack_status_t;

typedef struct {
   uint8_t row;
   uint8_t column;
} position_t;

attack_status_t can_attack(position_t queen_1, position_t queen_2);
int valid_position(position_t queen);
int has_valid_position(position_t queen_1, position_t queen_2);
int is_on_straight_or_diagonal(position_t queen_1, position_t queen_2);

#endif
