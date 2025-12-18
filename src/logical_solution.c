#include <stdio.h>
int main(void) {
  int i, j, k;

  // 1. Check if i is greater than j
  i = 10, j = 5;
  printf("%d = %d\n", i > j, 1); // 10 > 5 is TRUE (1)

  // 2. Check if i AND j are both true (non-zero)
  i = 5, j = 0;
  printf("%d = %d\n", i && j, 0); // 5 && 0 is FALSE (0)

  // 3. Check if NOT i OR j is true
  i = 0, j = 2;
  printf("%d = %d\n", !i || j, 1); // !0 is 1, 1 || 2 is TRUE (1)

  return 0;
}
