#include <stdio.h>

int main(void) {
    int n, square, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (square < n) {
        square = i * i;
        i += 2;
        printf("%d\n", square);
    }

    return 0;
}
