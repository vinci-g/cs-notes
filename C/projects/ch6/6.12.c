#include <stdio.h>

int main(void) {
    float e = 1, term, fp;
    int factorial = 1, n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Enter a small floating point number to end approximation at this term: ");
    scanf("%f", &fp);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        term = 1.0/factorial;
        if (term < fp) {
            break;
        }
        e += term;
    }
    printf("e = %f\n", e);
    return 0;
}
