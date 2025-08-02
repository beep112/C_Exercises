#include "hamming.h"

int compute(const char *lhs, const char *rhs) {
  int lenLhs = strlen(lhs);
  int lenRhs = strlen(rhs);
  if (lenLhs == lenRhs) {
    int count = 0;
    for (int i = 0; i < lenLhs; i++) {
      if (lhs[i] != rhs[i]) {
        count++;
      }
    }

    return count;
  }
  return -1;
}
