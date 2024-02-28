#include <stdio.h>

int main(void) {
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
  int input_cd, check_digit;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);
  printf("Enter the first group if five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter the second group if five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
  printf("Enter check_digit (single): ");
  scanf("%d", &input_cd);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = d + i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  check_digit = 9 - ((total - 1) % 10);

  if (input_cd == check_digit)
    printf("VALID\n");
  else
    printf("INVALID\n");

  return 0;
}
