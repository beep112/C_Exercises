#include "collatz_conjecture.h"
// a while loop is better than doing this solution recursively
int steps(int start) {
  if (start < 1) {
    return ERROR_VALUE;
  }
  int step_count = 0;
  while (start != 1) {
    // bitwise and, odd numbers always end in with a 1 in the last bit
    // so we check if the number does or doesnt
    if (!(start & 1)) {
      // bitshifting to the left is the same as multiplying  by 2
      start = start >> 1;
    } else {
      start = (start * 3) + 1;
    }
    step_count++;
  }

  return step_count;
}
