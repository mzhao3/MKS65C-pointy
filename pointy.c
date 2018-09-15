// Maggie Zhao
// 09-15-2018
// Pointers

#include <stdio.h>

int main() {
  // Declares and initializes an unsigned int to some value > 2.1 billion.
  unsigned int a = 9177568000;

  //Declare a char * that points to the address of your unsigned int.
  char *c = & a;

  //Print out your int in hex.
  printf ("Trump's phone number in hex: %x \n", a);

  //Use your pointer to print out each individual byte of your int.
  for (int r = 0; r < sizeof(a); ++r)
    printf("Printing byte %d: %hhx \n", r, *(r+c));

  printf("============================================\n");

  //Using your pointer, modify the individual bytes of your int and print out the resulting value in hex and decimal after each modification.

    //Increment each byte by 1
  for (int s = 0; s < sizeof(a); ++s)
    printf("Incremented byte %d by 1: %hhx \n", s, ++*(s+c));

  printf("Integer: %d \n", a);
  printf("Hex: %x \n", a);
  printf("============================================\n");

    //Increment each byte by 16
  for (int t = 0; t < sizeof(a) ; ++t)
    printf("Incremeted byte %d by 16: %hhx \n", t, *(t+c) += 16);

  printf("Integer: %d \n", a);
  printf("Hex: %x \n", a);
  printf("============================================\n");

}
