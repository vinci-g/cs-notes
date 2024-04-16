#include <stdio.h>

void selection_sort(int n, int a[n]);

int main(void) {
  int n;
  
  printf("Enter how many numbers you want to sort: ");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &a[i]);
  }

  selection_sort(n, a);
  
  printf("Sorted array: \n");
  
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}

void selection_sort(int n, int a[n]) {
  if (n < 1) return;

  int max_index = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] > a[max_index]) {
      max_index = i;
    }
  }
  int high_num = a[max_index];
  // get the location of the greatest value then replace it with the value of the last element
  a[max_index] = a[n - 1];
  // replace the value of the last element with the greatest value
  a[n - 1] = high_num;

  selection_sort(n - 1, a);
}
