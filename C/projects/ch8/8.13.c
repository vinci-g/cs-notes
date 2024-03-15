#include <stdio.h>

int main(void) {
    char c, initial;
    char last_name[20] = {0};
    int i = 0;

    printf("Enter a first name and last name: ");
    scanf(" %c", &initial);

    while ((c = getchar()) != ' ') {
        ;
    }

    while ((c = getchar()) == ' ') {
        ;
    }

    do {
        last_name[i++] = c;
    } while (((c = getchar()) != '\n') && (c != ' '));

    for (i = 0; i < 20; i++) {
        if (last_name[i]) {
            printf("%c", last_name[i]);            
        }
    }
    printf(", %c.\n", initial);
    return 0;
}
