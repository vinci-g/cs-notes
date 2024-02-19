#include <stdio.h>

int main(void)
{
  int num, reversal, first_digit, last_digit;
  printf("Enter a two-digit number: ");
  scanf("%2d", &num);

  first_digit = num / 10;
  last_digit = num % 10;

  reversal = (last_digit * 10) + first_digit;
  printf("The reversal of %d is %d\n", num, reversal);

  return 0;
}
