#include <stdio.h>
#include <math.h>

int main(void) {
    double y = 1, x, new_y;
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    new_y = (y + (x/y)) / 2;

    while (fabs(new_y - y) > (0.00001 * y)) {
        y = new_y;
        new_y = (y + (x/y)) / 2;
    }

    printf("Square root: %lf\n", y);
    return 0;
}
