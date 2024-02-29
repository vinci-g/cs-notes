#include <stdio.h>

int main(void) {
    int digits = 0, n;

    printf("Enter a non negative integer: ");
    scanf("%d", &n);

    // The implementation of a do while statement here is the
    // right one. If we use a while statement:
    // while (n > 0) {
    //    n /= 10;
    //    digits++;
    // }
    // In case we input 0 (which does have a single digit), the
    // while statement will quit and we will get:
    // "The number has 0 digits."
    
    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digits.\n", digits);

    return 0;
}
