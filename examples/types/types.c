#include <stdio.h>

int main() {
  // int is a type of number - but it can't handle really big numbers, something
  // bad happens if it gets too big...
  int int_number;
  // two billion
  int_number = 2000000000;

  printf("int_number: %d\n", int_number);

  // plus two billion
  int_number = int_number + 2000000000;

  // equals
  printf("int_number after adding: %d\n", int_number);

  // In order to run this file this directory includes a `makefile`, which has
  // building instructions. Take a look inside there for more details, and run
  // this code a few times to see what happens.
  //
  // The current code is broken (beautifully). Fix it by changing the type of
  // int to something bigger like a long long (remember to update the format
  // string for printf)
}