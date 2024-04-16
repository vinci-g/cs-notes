#include <stdio.h>

int main(void) {
  int n, day, weekday, i;

  printf("Enter number of days in month: ");
  scanf("%d", &n);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &weekday);

  for (i = 1, day = 1; i < n + weekday; i++) {
    if (i < weekday) {
      printf("   ");
    } else {
      printf("%3d", day++);
    }
    if (i % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}
