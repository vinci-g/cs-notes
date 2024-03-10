#include <stdio.h>

int main(void) {
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(short));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));

    // another method using C89 convention
    printf("%lu, %lu, %lu, %lu, %lu, %lu\n", 
           (unsigned long) sizeof(int), (unsigned long) sizeof(short),
           (unsigned long) sizeof(long), (unsigned long) sizeof(float),
           (unsigned long) sizeof(double), (unsigned long) sizeof(long double));
    
    return 0;
}
