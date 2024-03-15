#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int hours, mins, user_time, difference = 0, least_diff, closest;
    int d_hour, d_min, a_hour, a_min;
    
    int d1 = 8 * 60;
    int a1 = (10 * 60) + 16;
    int d2 = (9 * 60) + 43;
    int a2 = (11 * 60) + 52;
    int d3 = (11 * 60) + 19;
    int a3 = (13 * 60) + 31;
    int d4 = (12 * 60) + 47;
    int a4 = (15 * 60);
    int d5 = (14 * 60);
    int a5 = (16 * 60) + 8;
    int d6 = (15 * 60) + 45;
    int a6 = (17 * 60) + 55;
    int d7 = (19 * 60);
    int a7 = (21 * 60) + 20;
    int d8 = (21 * 60) + 45;
    int a8 = (23 * 60) + 58;

    int arr[8] = {a1, a2, a3, a4, a5, a6, a7, a8};
    int dep[8] = {d1, d2, d3, d4, d5, d6, d7, d8};

    printf("Enter departure time (24-hour format): ");
    scanf("%2d:%2d", &hours, &mins);

    user_time = (hours * 60) + mins;

    for (int i = 0; i < 8; i++) {
        difference = abs(user_time - dep[i]);
        if (difference == 0) {
            least_diff = difference;
            closest = i;
        }
        else {
            if (difference < least_diff) {
                least_diff = difference;
                closest = i;
            } 
        }
    }
    d_hour = dep[closest] / 60;
    d_min = dep[closest] % 60;
    a_hour = arr[closest] / 60;
    a_min = arr[closest] % 60;

    printf("Closest departure time is ");
    if (d_hour >= 12) {
        d_hour -= 12;
        printf("%d:%02d p.m., ", d_hour, d_min);
    }
    else {
        printf("%d:%02d a.m., ", d_hour, d_min);
    }

    if (a_hour >= 12) {
        a_hour -= 12;
        printf("arriving at %d:%02d p.m. ", a_hour, a_min);
    }
    else {
        printf("arriving at %d:%02d a.m. ", a_hour, a_min);
    }

    printf("\n");
    return 0;
}
