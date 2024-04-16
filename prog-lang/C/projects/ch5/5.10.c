#include <stdio.h>

int main(void) {
    int grade, g1;

    printf("Enter grade: ");
    scanf("%d", &grade);

    g1 = grade / 10;

    switch (g1) {
    case 10: case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    case 5: case 4: case 3: case 2: case 1: case 0:
        printf("F");
        break;
    default:
        printf("Error! Invalid grade input!\n");
        return 1;
    }

    printf("\n");

    return 0;
}
