#include <stdio.h>

int main() {
  // arrays are made of types - here we declare an array of ints that is 10 ints
  // long
  int numbers[10];
  // we'll need this i in a minute...
  int i;

  // for loops need you to have declared their iterating variable - that's why
  // we make that i earlier. But from this point it's pretty much like
  // a language like JavaScript.
  for (i = 0; i < 10; i++) {
    // square numbers...
    numbers[i] = i * i;
  }

  // to print them all out we just iterate all over again.
  for (i = 0; i < 10; i++) {
    printf("numbers[%d]: %d\n", i, numbers[i]);
  }
}

// But what happens when we access one beyond the end of the array - at
// `numbers[10]`? Or `numbers[22]`? Or `numbers[5937]`? Try these out...