#include <stdio.h>

int main(void) {
    int m, lm, d, ld, y, ly;
    
    for (int i = 1; ; i++) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &m, &d, &y);

        if (m == 0 && d == 0 && y == 0) {
            printf("%02d/%02d/%02d is the earliest date\n", lm, ld, ly);
            return 0;
        }

        if (i == 1) {
            lm = m;
            ld = d;
            ly = y;
        }
        else {
            if ((y < ly) || (y == ly && m < lm) || (m == ly && d < ld)) {
                lm = m;
                ld = d;
                ly = y;
            }
        }
    }
    return 0;
}
