#include <stdio.h>

int main(void)
{
  int decimal, n1, n2, n3, n4, n5;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &decimal);

  n5 = decimal % 8;
  decimal /= 8;
  n4 = decimal % 8;
  decimal /= 8;
  n3 = decimal % 8;
  decimal /= 8;
  n2 = decimal % 8;
  decimal /= 8;
  n1 = decimal % 8;

  printf("The octal of %d is %d%d%d%d%d\n", decimal, n1, n2, n3, n4, n5);

  return 0;
}
