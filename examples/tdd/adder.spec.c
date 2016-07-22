#include <assert.h>
// assert is my best friend for TDD in C. It checks whether an expression is
// true or not, and blows up the program if it's not. It was designed to be used
// inside your code and then turned off in production, but we (and everyone else
// who invented TDD) can coopt it for testing.
#include <stdio.h>
// stdio so we know when we pass
#include "adder.h"
// including the library under test

// this is our test. It's just a function. In order to make it run we must
// execute it inside main below.
void test_add_0_and_0() {
  // Given
  int a, b, result;
  a = b = 0;

  // When
  result = (adder(a, b));

  // Then
  assert(result == 0);
}

int main() {
  // here we're running a test;
  test_add_0_and_0();

  // this is just a pretty string that prints when the tests pass
  printf("[1;32m\tAll tests all pass\n[0;m");
  // (wow. much RSpec. So terminal. Very green)
}

// Now write a failing test! Write some code! Refactor, rinse, repeat!
//
// Reflect, if you will, exactly how little you really need to do TDD