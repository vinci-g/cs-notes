#include <stdio.h>

int main(void) {
    char sentence[100];
    char c;
    int i = 0, j = 0, n = 0;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c == '.' || c == '?' || c == '!') {
            break;
        }
        sentence[i++] = c;
        n++;
    }

    for (i = n - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            for (j = i + 1; j <= n - 1; j++) {
                printf("%c", sentence[j]);
            }
            printf(" ");
            n = i + 1;
        }
    }
    printf("\n");
    return 0;
}
