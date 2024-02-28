#include <stdio.h>

int main(void) {
  int twenty_four_hour, minutes, twelve_hour;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &twenty_four_hour, &minutes);

  if (twenty_four_hour >= 0 && minutes >= 0 && minutes < 60) {
    if (twenty_four_hour > 12) {
      twelve_hour = twenty_four_hour - 12;
      printf("Equivalent 12-hour time: %02d:%02d\n", twelve_hour, minutes);
    }
    else {
      printf("Time is in 12-hour format: %02d:%02d\n", twenty_four_hour, minutes);
    }
  }
  else {
    printf("Invalid input for 24-hour time!\n");
    return 1;
  }

  return 0;
}
