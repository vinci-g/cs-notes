#include <stdio.h>

int main(void) {
    float e = 1;
    int factorial = 1, n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += (1.0/factorial);
    }
    printf("e = %f\n", e);
    return 0;
}
