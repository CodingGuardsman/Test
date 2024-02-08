/* main.c */
// original declaration of function greeting
void greeting(void);

// main's definition of function greeting
#include <stdio.h>

void greeting(void) {
  printf("Hello World!\n");
}

int main(void) {
  greeting();
  return 0;
}