#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ROW 10
#define COL 10
#define MOVES 4

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {
  char a[ROW][COL];

  generate_random_walk(a);
  print_array(a);

  return 0;
}

void generate_random_walk(char walk[ROW][COL]) {
  char letter;
  int row, col, direction, possible_move_count;
  bool possible_moves[4];
  
  srand((unsigned) time(NULL));
  
  for (int i =0; i < ROW; i++) {
    for (int j = 0; j < COL; j++) {
      walk[i][j] = '.';
    }
  }

  // Randomize position of letter 'A'
  row = rand() % ROW;
  col = rand() % COL;
  
  for (letter = 'A'; letter <= 'Z'; letter++) {
    walk[row][col] = letter;

    // Reset the possible moves after placing a letter
    for (int i = 0; i < MOVES; i++) {
      possible_moves[i] = false;
    }
    possible_move_count = 0;
    
    // Check position of the last placed letter and update the possible moves
    if (col - 1 >= 0 && walk[row][col - 1] == '.') {
      possible_moves[LEFT] = true;
      possible_move_count++;
    }
    if (col + 1 < COL && walk[row][col + 1] == '.') {
      possible_moves[RIGHT] = true;
      possible_move_count++;
    }
    if (row - 1 >= 0 && walk[row - 1][col] == '.') {
      possible_moves[UP] = true;
      possible_move_count++;
    }
    if (row + 1 < ROW && walk[row + 1][col] == '.') {
      possible_moves[DOWN] = true;
      possible_move_count++;
    }

    // Exit the loop to place letters on the grid when there are no possible moves
    if (possible_move_count == 0) break;

    while (true) {
      direction = rand() % MOVES;
      if (possible_moves[direction]) {
        switch(direction) {
        case UP:
          row--;
          break;
        case RIGHT:
          col++;
          break;
        case DOWN:
          row++;
          break;
        case LEFT:
          col--;
          break;
        }
        // Move is generated, break out of the while loop
        break;
      }
        // Move is not possible, continue the while loop
      else continue;
    }
  }
}

void print_array(char walk[COL][ROW]) {
  for (int i =0; i < ROW; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%2c ", walk[i][j]);
    }
    printf("\n");
  }
}
