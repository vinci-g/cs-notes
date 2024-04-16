#include <stdio.h>

float tax_due(int income);

int main(void) {
  int income;
  float tax;

  printf("Enter taxable income: ");
  scanf("%d", &income);

  // On the book, there is a conflict for the conditions where 2 incomes, like
  // 2250, are placed on two rows, it would cause to trigger the first statement
  // that it is true. This would be okay if we want the tax to be the smaller
  // value, this would be okay but if we want it to be the larger value then
  // this would cause an issue. I coded the conditional statements based on
  // this.
  tax = tax_due(income);

  printf("Tax: %.2f\n", tax);
  return 0;
}

float tax_due(int income) {
  int tax;
  if (income < 750) {
    tax = income * 0.01;
  } else if (income >= 750 && income < 2250) {
    tax = (income - 750) * 0.02 + 7.50;
  } else if (income >= 2250 && income < 3750) {
    tax = (income - 2250) * 0.03 + 37.50;
  } else if (income >= 3750 && income < 5250) {
    tax = (income - 3750) * 0.04 + 82.50;
  } else if (income >= 5250 && income <= 7000) {
    tax = (income - 5250) * 0.05 + 142.50;
  } else if (income > 7000) {
    tax = (income - 7000) * 0.06 + 230;
  } else {
    printf("Invalid input for taxable income\n");
    return 1;
  }
  return tax;
}
