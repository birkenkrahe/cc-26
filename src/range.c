
/* 2) Open ~range.c~ in ~nano~. */
/* 3) Complete the code to check if ~i~ is in the interval ~[m,n)~: */

/* [[file:~/GitHub/admin/spring25/csc100/org/8_operators_practice_solutions.org::*Range Check (10 min)][Range Check (10 min):1]] */
#include <stdio.h>






#include <stdio.h>
int main(void) {
  int i, m, n;
  printf("Enter i, m, n: ");
  scanf("%d %d %d", &i, &m, &n);
  if (m <= i && i < n) {
    printf("%d is in [%d,%d).\n", i, m, n);
  } else {
    printf("%d is NOT in [%d,%d).\n", i, m, n);
  }
  return 0;
}
/* Range Check (10 min):1 ends here */
