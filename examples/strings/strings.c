#include <stdio.h>

int main() {
  char string[10];

  scanf("%s", string);
  printf("string: %s\n", string);
  printf("\n\n");
  printf("second char: %c\n", string[1]);

  /*int number;*/

  /*scanf("%d\n", &number);*/
  /*printf("\n\n");*/
  /*printf("number: %d\n", number);*/

  /*printf("\n\n");*/
  /*char *pointer = string;*/
  /*printf("first character: %c\n", *pointer);*/

  /*char *next_char = pointer + 1;*/
  /*printf("second character: %c\n", *next_char);*/

  printf("first char: %c\n", *string);
}