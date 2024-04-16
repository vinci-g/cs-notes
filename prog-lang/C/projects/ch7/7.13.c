#include <stdio.h>

int main(void) {
    float count = 0.0, letters;
    double w_avg;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c != ' ') {
            letters++;
        }
        if (c == ' ') {
            count++;
        }
    }
    count++;
    w_avg = letters/count;
    printf("Average word length: %.1f\n", w_avg);

    return 0;
}
