// So, this is your first C program!
//
// In C, comments start with // ... obviously
//
// This `#include` business at the top is just the way we tell C that we want to
// use
// a function from the standard library's io functions - standard io - stdio.
// The h is for header, which is a file that contains information about the
// functions, not the functions themselves.
//
// The lines at the top of a C file starting with `#` aren't really ar part of
// the program - they're a bit special, but can mostly be ignored.
#include <stdio.h>

// This is a function called `main`. All C programs start with a main function.
// A function takes arguments inside the parentheses after its name - main takes
// no arguments below. In C you declare a function by declaring the type it
// returns. The `int` at the beginning tells us that the function main returns
// an integer.
//
// The block inside the curly braces runs when `main` is called. Here we are
// calling the function `printf` with the argument "hello, world\n". This is
// just a string with a new line character at the end.
//
// All statements in C, apart from expressions, end in a semicolon.
int main() { printf("hello, world\n"); }

// to compile this into something you can run, use the command:
//
//    `gcc hello-world.c`
//
// which produces an executable called `a.out`. To run this we type:
//
//    `./a.out`
//
// `./a.out` isn't very expressive however. In order to give the output file
// a better name, pass a flag to gcc:
//
//    `gcc hello-world.c -o hello-world`
//
// now we can just run:
//
//     `./hello-world`