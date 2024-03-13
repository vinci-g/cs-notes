#include <stdio.h>

int main(void) {
    int arr[5][5], rsum[5] = {0}, asum[5] = {0}, n;

    for (int i = 0; i < 5; i++) {
        printf("Student %d grades: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf(" %d", &n);
            arr[i][j] = n;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rsum[i] += arr[i][j];
        }
        printf("Student %d Total Grade: %d\n", i + 1, rsum[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            asum[i] += arr[i][j];
        }
        double ave = (double) rsum[i]/5;
        printf("Student %d Average Grade: %.2lf\n", i + 1, ave);
    }

    return 0;
}
