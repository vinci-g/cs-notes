#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;

  printf("Enter first 12 digits of EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

  int first_sum = n2 + n4 + n6 + n8 + n10 + n12;
  int second_sum = n1 + n3 + n5 + n7 + n9 + n11;
  int total = 3 * first_sum + second_sum;

  int check_digit = 9 - ((total - 1) % 10);

  printf("Check Digit: %d\n", check_digit);
  return 0;
}

