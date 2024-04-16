#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void) {
    char sentence[MAX_SIZE] = {0}, ch, character;
    int n = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n') {
        sentence[n] = ch;
        n++;
    }

    printf("In B1FF-speak: ");
    for (int i = 0; i <= n; i++) {
        character = toupper(sentence[i]);
        switch (character) {
        case 'A':
            character = '4';
            break;
        case 'B':
            character = '8';
            break;
        case 'E':
            character = '3';
            break;
        case 'I':
            character = '1';
            break;
        case 'O':
            character = '0';
            break;
        case 'S':
            character = '5';
            break;
        default:
            break;
        }
        printf("%c", character);
    }
    printf("!!!!!!!!!!");
    printf("\n");
    return 0;
}
