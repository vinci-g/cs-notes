#include <stdio.h>

int main(void) {
    int arr[5][5], rsum[5] = {0}, csum[5] = {0}, n;

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf(" %d", &n);
            arr[i][j] = n;
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rsum[i] += arr[i][j];
        }
        printf(" %d", rsum[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            csum[i] += arr[j][i];
        }
        printf(" %d", csum[i]);
    }
    printf("\n");

    return 0;
}
