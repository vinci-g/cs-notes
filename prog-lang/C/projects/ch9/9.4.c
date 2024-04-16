#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
  int counts1[26] = {0};
  int counts2[26] = {0};
  bool anagrams;
  

  printf("Enter first word: ");
  read_word(counts1);
  
  printf("Enter second word: ");
  read_word(counts2);

  anagrams = equal_array(counts1, counts2);
  if (!anagrams) {
    printf("The words are not anagrams.\n");
    return 0;
  } else {
    printf("The words are anagrams.\n");
    return 0;
  }
  
  return 1;
}

void read_word(int counts[26]) {
  char ch;
  bool contains_letters;

  for (int i = 0; i < 26; i++) {
    if (counts[i] != 0) {
      contains_letters = true;
    }
  }
  contains_letters = false;

  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      ch = tolower(ch);
      // using ASCII values 'a' = 97 to 'z' = 122
      if (!contains_letters) {
        counts[ch - 97]++;              
      } else {
        counts[ch - 97]--;
      }
    }
  }
}

bool equal_array(int counts1[26], int counts2[26]) {
  for (int i = 0; i < 26; i++) {
    int letter_diff = counts2[i] - counts1[i];
    if (letter_diff > 0) return false;
  }
  return true;
}
