#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4, max1, max2, min1, min2;
    int smallest, largest;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    if (i1 < i2) {
        min1 = i1;
        max1 = i2;
    } else {
        min1 = i2;
        max1 = i1;
    }

    if (i3 < i4) {
        min2 = i3;
        max2 = i4;
    } else {
        min2 = i4;
        max2 = i3;
    }

    if (min1 < min2) smallest = min1;
    else smallest = min2;

    if (max1 < max2) largest = max2;
    else largest = max1;


    printf("Smallest: %d, Largest: %d\n", smallest, largest);

    return 0;
}
