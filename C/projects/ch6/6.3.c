#include <stdio.h>

int main(void) {
    int numerator, denominator, gcd;

    printf("Enter a fraction (x/y): ");
    scanf("%d/%d", &numerator, &denominator);

    int i1 = numerator;
    int i2 = denominator;
    int r;

    // computing the gcd
    while (i2 != 0) {
        r = i1 % i2;
        i1 = i2;
        i2 = r;
    }

    gcd = i1;
    numerator /= i1;
    denominator /= i1;

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}
