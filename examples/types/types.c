#include <stdio.h>

int main() {
  int int_number;
  // two billion
  int_number = 2000000000;

  printf("int_number: %d\n", int_number);

  // plus two billion
  int_number = int_number + 2000000000;

  // equals
  printf("int_number after adding: %d\n", int_number);
}