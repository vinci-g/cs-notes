#include <stdio.h>
#include <ctype.h>

int main(void) {
    int vowel_count = 0;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        switch (toupper(c)) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            vowel_count++;
            break;
        default:
            break;
        }
    }

    printf("Your sentence contains %d vowels.\n", vowel_count);
    return 0;
}
