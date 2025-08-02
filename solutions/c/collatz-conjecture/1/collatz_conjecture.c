#include "collatz_conjecture.h"

int steps(int start) {
  if (start > 0) {
    return steps_helper(start, 0);
  } else {
    return ERROR_VALUE;
  }
}

int steps_helper(int curr, int count) {
  if (curr == 1) {
    return count;
  } else if (curr % 2 == 0) {
    curr = curr / 2;
  } else {
    curr = (curr * 3) + 1;
  }
  return steps_helper(curr, ++count);
}
