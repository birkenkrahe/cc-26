#include <stdio.h>






#include <stdio.h>
#include <stdlib.h>

int main() {
  // variables
  int gold = 100; // Example: starting gold amount
  int choice;     // To store the player's choice (1 for deposit, 2 for withdraw)
  int amount;     // Amount to deposit or withdraw

  // Print balance and ask for action
  printf("Your gold: %d\n", gold);
  printf("Choose an action (1 to deposit, 2 to withdraw):\n");
  // Get action (print confirmation)
  scanf("%d", &choice);
  printf("Your choice: %d\n", choice);
  // Get amount (print confirmation)
  printf("Enter amount:\n");
  scanf("%d", &amount);
  printf("Your amount: %d\n", amount);

  // If (deposit chosen)
  if (choice == 1) {
    // add gold to the account
    gold = gold + amount;
    printf("Deposited %d gold. New balance: %d\n", amount, gold);
  } else {   // Else if (withdrawal chosen)
    // if amount exceeds gold
    if (amount > gold) {
      // print error message
      printf("Error: Withdrawal %d too large. Only %d in account.\n", amount, gold);
      return EXIT_FAILURE;
    }
    // subtract gold from the account
    gold = gold - amount;
    printf("Withdrew %d gold. New balance: %d\n", amount, gold);
  }

  return 0;
}
