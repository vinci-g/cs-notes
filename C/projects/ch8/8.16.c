#include <stdio.h>
#include <ctype.h>

int main(void) {
  int word[26] = {0};
  int i = 0;
  char ch;

  printf("Enter first word: ");
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      ch = tolower(ch);
      // using ASCII values 'a' = 97 to 'z' = 122
      word[ch - 97]++;      
    }
  }

  printf("Enter second word: ");
  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      ch = tolower(ch);
      word[ch - 97]--;      
    }
  }

  for (i = 0; i < 26; i++) {
    if (word[i] != 0) {
      printf("The words are not anagrams.\n");
      return 0;
    }
  }
  printf("The words are anagrams.\n");
  return 0;
}
