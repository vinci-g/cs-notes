#include <stdio.h>

int main(void)
{
  int num, reversal, first_digit, second_digit, third_digit;
  printf("Enter a three-digit number: ");
  scanf("%3d", &num);

  first_digit = num / 100;
  second_digit = (num / 10) % 10;
  third_digit = num % 10;

  reversal = (third_digit * 100) + (second_digit * 10) + first_digit;
  printf("The reversal of %d is %d\n", num, reversal);

  return 0;
}

