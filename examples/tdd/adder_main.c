#include <stdio.h>
#include "adder.h"

// this main function utilizes the adder library we've written in this directory
// to add two numbers together. But it's pretty broken right now...
int main() {
  int first_number, second_number, result;
  printf("enter first number: ");
  scanf("%d", &first_number);

  printf("enter second number: ");
  scanf("%d", &second_number);

  result = adder(first_number, second_number);

  printf("%d + %d = %d\n", first_number, second_number, result);
}