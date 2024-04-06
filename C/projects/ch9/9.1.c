#include <stdio.h>

void selection_sort(int n, int a[n]);

int main(void) {
  int n;
  
  printf("Enter how many numbers you want to sort: ");
  scanf("%d ", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("Enter number %d: ", i);
    scanf("%d", &a[i]);
  }

  selection_sort(n, a);

  return 0;
}

void selection_sort(int n, int a[n]) {
  return;
}
