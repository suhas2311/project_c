#include <stdio.h>
void rev () {

  int n, reverse = 0, remainder;

  printf("\nEnter an integer to reverse: ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("\nReversed number = %d", reverse);

  //return 0;
}
