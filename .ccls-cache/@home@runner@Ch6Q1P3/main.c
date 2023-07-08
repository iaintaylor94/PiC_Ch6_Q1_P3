// Program to determine if a number is even or odd

#include <stdio.h>

int main(void) {

  int numberToTest, remainder;

  printf ("Enter your number: ");
  scanf ("%d", &numberToTest);

  remainder = numberToTest % 2;

  if (remainder == 0) {
    printf ("The number is even\n");
  }

  if (remainder != 0) {
    printf ("The number is odd");
  }
  
  return 0;
}