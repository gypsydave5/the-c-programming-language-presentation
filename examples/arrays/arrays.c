#include <stdio.h>

int main() {
  int numbers[10];
  int i;

  for (i = 0; i < 10; i++) {
    numbers[i] = i * i;
  }

  for (i = 0; i < 10; i++) {
    printf("numbers[%d]: %d\n", i, numbers[i]);
  }
}