#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
  if (!valid_position(queen_1) || !valid_position(queen_2)) {
    return INVALID_POSITION;
  }
  if (queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
    return INVALID_POSITION;
  }
  if (queen_1.row == queen_2.row) {
    return CAN_ATTACK;
  } else if (queen_1.column == queen_2.column) {
    return CAN_ATTACK;
  } else {
    int rowDiff = queen_1.row - queen_2.row;
    int colDiff = queen_1.column - queen_2.column;
    if (rowDiff < 0)
      rowDiff *= -1;
    if (colDiff < 0)
      colDiff *= -1;
    if (colDiff == rowDiff) {
      return CAN_ATTACK;
    }
  }

  return CAN_NOT_ATTACK;
}
int valid_position(position_t queen) {
  if (queen.row >= 80 || queen.column >= 8) {
    return 0;
  }
  // valid indexes
  return 1;
}
