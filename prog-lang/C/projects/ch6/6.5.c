#include <stdio.h>

int main(void) {
    int number, digit;
    int reversed = 0;

    printf("Enter number to be reversed: ");
    scanf("%d", &number);

    do {
        digit = number % 10;
        number /= 10;
        reversed = (reversed * 10) + digit;
        
    } while (number != 0);

    printf("Reversed: %d\n", reversed);

    return 0;
}
