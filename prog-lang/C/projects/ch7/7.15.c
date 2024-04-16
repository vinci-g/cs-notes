// replace short with a specific data type
// a. 7
// b. 13

#include <stdio.h>

int main(void) {
    int num;
    unsigned int fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d: %u\n", num, fact);
    return 0;
}
