#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
  if (valid_position(queen_1) && valid_position(queen_2)) {
    return INVALID_POSITION;
  }
  if (queen1.row == queen_2.row) {
    return CAN_ATTACK;
  } else if (queen_1.column == queen_2.column) {
    return CAN_ATTACK;
  } else {
      :
  }
}
int valid_position(position_t queen) {
  if (queen.row > 8 || queen.row < 0) {
    return 0;
  }
  // valid indexes
  return 1;
}
