#include <stdio.h>

int main(void) {
  int i = 0, j = 0;
  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  if (n % 2 == 0 || n > 99) {
    printf("Invalid size for the magic square.\n");
    printf("Terminating program...\n");
    return 0;
  }

  int arr[n][n];
  int total_num = n * n;
  int num = 1;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      arr[i][j] = 0;
    }
  }

  j = (n / 2);
  arr[i][j] = num++;

  while (num <= total_num) {
    if (i - 1 < 0) {
      i = n - 1;
    } else {
      i--;
    }

    if (j + 1 > n - 1) {
      j = 0;
    } else {
      j++;
    }

    if (arr[i][j] != 0) {
      if (i + 1 > n - 1) {
        i = 0;
      } else {
        i++;
      }
      i++;
      if (j - 1 < 0) {
        j = n - 1;
      } else {
        j--;
      }
      arr[i][j] = num++;
    } else {
      arr[i][j] = num++;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%4d", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}
