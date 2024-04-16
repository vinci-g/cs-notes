#include <stdio.h>

int main(void) {
    int i1, i2, gcd, r;

    printf("Enter two integers: ");
    scanf("%d%d", &i1, &i2);

    while (i2 != 0) {
        r = i1 % i2;
        i1 = i2;
        i2 = r;
    }

    printf("GCD: %d\n", i1);
    return 0;
}
