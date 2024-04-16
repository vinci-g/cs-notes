#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hr, min;
    char c;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hr, &min, &c);
    hr += ((toupper(c) == 'P') ? 12 : 0);

    printf("Equivalrent 24-hour time: %02d:%02d\n", hr, min);
    return 0;
}
