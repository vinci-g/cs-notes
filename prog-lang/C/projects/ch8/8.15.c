#include <stdio.h>

int main(void) {
  char message[80] = {0};
  char ch;
  int shift, i = 0;

  printf("Enter a message to be encrypted: ");
  while ((ch = getchar()) != '\n') {
    message[i++] = ch;
  }

  printf("Enter shift amount: ");
  scanf("%d", &shift);

  for (i = 0; i < 80; i++) {
    if (message[i]) {
      putchar(message[i]);      
    }
  }
  printf("\n");

  // we will be using ASCII character codes to determine the letters
  // 'A' = 65, 'Z' = 90
  // 'a' = '97', 'z' = 122

  for (i = 0; i < 80; i++) {
    if (message[i]) {
      // determine if it is uppercase
      if (message[i] >= 65 && message[i] <= 90) {

        if (message[i] + shift > 90) {
          int n = (message[i] + shift) - 90 + 64;
          putchar(n);
        }
        else {
          putchar(message[i] + shift);
        }
      }
        // determine if it is lowercase
      else if (message[i] >= 97 && message[i] <= 122) {
        if (message[i] + shift > 122) {
          int n = (message[i] + shift) - 122 + 96;
          putchar(n);
        }
        else {
          putchar(message[i] + shift);
        }
      }

      else {
        putchar(message[i]);
      }      
    }
  }

  printf("\n");
  return 0;
} 
