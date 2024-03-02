#include <stdio.h>

int main(void) {
    float n, max = 0;

    while (n != 0) {
        printf("Enter a number: ");
        scanf("%f", &n);

        if (n > max) {
            max = n;
        }
    }

    printf("The largest number entered was: %.2f", max);
    return 0;
}
