#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
  return !(has_valid_position(queen_1, queen_2))        ? INVALID_POSITION
         : is_on_straight_or_diagonal(queen_1, queen_2) ? CAN_ATTACK
                                                        : CAN_NOT_ATTACK;
}
int is_on_straight_or_diagonal(position_t queen_1, position_t queen_2) {
  return queen_1.row == queen_2.row || queen_1.column == queen_2.column ||
         abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column);
}
int has_valid_position(position_t queen_1, position_t queen_2) {
  if (!valid_position(queen_1) || !valid_position(queen_2)) {
    return 0;
  }
  return !(queen_1.row == queen_2.row && queen_1.column == queen_2.column);
}
int valid_position(position_t queen) {
  return queen.row < 8 && queen.column < 8;
}
