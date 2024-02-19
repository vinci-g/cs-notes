#include <stdio.h>

int main(void)
{
  int n1, n2, n3;
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &n1, &n2, &n3);

  printf("The reversal of %d%d%d is %d%d%d\n", n1, n2, n3, n3, n2, n1);

  return 0;
}
