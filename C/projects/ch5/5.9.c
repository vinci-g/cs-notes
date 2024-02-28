#include <stdio.h>

int main(void) {
    int f_yy, f_mm, f_dd, s_yy, s_mm, s_dd;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &f_mm, &f_dd, &f_yy);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &s_mm, &s_dd, &s_yy);

    if (s_yy < f_yy) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", s_mm, s_dd, s_yy, f_mm, f_dd, f_yy);
        return 0;
    } else {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", f_mm, f_dd, f_yy, s_mm, s_dd, s_yy);
        return 0;
    }

    if (s_mm < f_mm) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", s_mm, s_dd, s_yy, f_mm, f_dd, f_yy);
        return 0;
    } else {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", f_mm, f_dd, f_yy, s_mm, s_dd, s_yy);
        return 0;
    }

    if (s_dd < f_dd) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", s_mm, s_dd, s_yy, f_mm, f_dd, f_yy);
        return 0;
    } else {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", f_mm, f_dd, f_yy, s_mm, s_dd, s_yy);
        return 0;
    }

    return 1;
}
