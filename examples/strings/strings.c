#include <stdio.h>

void reading_and_printing_an_int() {
  int number;

  // scanf takes a format string, just like printf - but backwards!
  // Instead of writing a variable into a string, it writes the matching
  // part of the string into the variable
  //
  // scanf expects a pointer arguments
  // to get a pointer to number, we use '&'. This is called 'referencing'.
  printf("input a number: ");
  scanf("%d\n", &number);
  // by being passed in as a pointer, scanf can change
  // the value of number from the outside, allowing us to
  // read a number
  printf("number: %d\n", number);
}

void reading_and_printing_a_string() {
  // strings are just arrays of characters...
  char string[10];

  printf("input a string: ");
  // look - scanf is taking string without getting a reference
  // so... string is a pointer already
  scanf("%s", string);
  printf("string: %s\n", string);
  printf("second char: %c\n", string[1]);
}

void arrays_are_pointers() {
  // here we are declaring a string - an array of chars remember - with a string
  // literal. This means we don't have to give it a number of chars to put in
  // the array, it will work it out from the stuff in the double quotes.
  char string[] = "Hello, world";

  // we could also do
  // char strings[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w' ... ect};

  // an array is just a pointer to a char. We can declare pointers
  // without first &'ing a variable by writing * after the type name'
  char *pointer = string;
  // so pointer is a pointer to a char now
  //
  // when we want to get the value of the variable a pointer is pointing
  // to, we use * in front of the pointer. This is called 'dereferencing'
  // Here, we dereference pointer to get back the char it points to - the
  // letter 'H'
  printf("first character: %c\n", *pointer);

  // we can move the pointer on a character by incrementing it by one -
  // this is exactly what happens when you do string[1], it's the same
  // thing written in a different way.
  char *next_char = pointer + 1;
  printf("second character: %c\n", *next_char);

  // so you can also print the first character of a string by passing it
  // as a dereferenced pointer - the string is really just a pointer to a
  // char.
  printf("first char: %c\n", *string);
}

int main() { arrays_ }