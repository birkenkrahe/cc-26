#include <stdio.h>
int main(void) {

  char letter;

  printf("Enter a letter: ");
  scanf("%c", &letter);
  printf("%c\n", letter);

  if (letter == 'b' || letter == 'B') {
    printf("You entered 'b' or 'B'.\n");
  } else {
    printf("You entered something else.\n");
  }
  return 0;
}
