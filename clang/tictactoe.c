#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))

enum GameState {
  isPlaying = 0,
  player1Won = 1,
  player2Won = 2,
};

struct Player {
  char playerChar;
};

enum Players {
  X = 1,
  O = 2
};

struct GameTable {
  int cells[3][3];
};

struct GameTable invert3by3Array(struct GameTable *oldGameTable);

struct Game {
  enum GameState gameState;

  struct Player players[3];
  enum Players currentPlayer;

  struct GameTable gameTable;
};

void printGameTable(struct Game* game);
void getGameState(struct Game* game);

bool compareIntArray(int array[]);

size_t getSizeOfArray(int array[]);

int main() {
  struct Game game = {
    .gameTable.cells = {0,0,0,0,0,0,0,0,0},
    .gameState = isPlaying,
    .currentPlayer = X
  };

  strcpy(&game.players[0].playerChar, " ");
  strcpy(&game.players[1].playerChar, "X");
  strcpy(&game.players[2].playerChar, "O");

  while (game.gameState == isPlaying) {
    printf("\n");
    printGameTable(&game);
    printf("\n");

    char move[6];

    printf("Player %d (%c), choose a cell to play (row,collumn): ", game.currentPlayer, game.players[game.currentPlayer].playerChar);
    fgets(move, 6, stdin);

    move[strlen(move) - 1] = '\0';

    int row = atoi(&move[0]);
    int col = atoi(&move[2]);

    if (row > 2 || col > 2 || game.gameTable.cells[row][col] != 0) {
      printf("Please pick a cell that is available.");
      continue;
    }

    printf("You picked the cell at (%d, %d),", row, col);

    game.gameTable.cells[row][col] = game.currentPlayer;

    getGameState(&game);

    printf("Game State: %d", game.gameState);

    if (game.gameState != isPlaying) {
      break;
    }

    game.currentPlayer = (game.currentPlayer == X) ? O : X;
  }

  return 0;
}

void getGameState(struct Game* game){

  if (game->gameState != isPlaying) return;

  //check for a win in each row.
  for (int row; row <= 2; row++) {
    if (compareIntArray(game->gameTable.cells[row])) {
      game->gameState = game->gameTable.cells[row][0];
    }
  }

  if (game->gameState != isPlaying) return;

  //check for a win in each column.
  for (int col; col <= 2; col++) {
    struct GameTable inverseGameTable = invert3by3Array(&game->gameTable);

    if (compareIntArray(inverseGameTable.cells[col])) {
      game->gameState = inverseGameTable.cells[col][0];
    }
  }

  if (game->gameState != isPlaying) return;

  if ((game->gameTable.cells[1][1] == game->gameTable.cells[0][0] &&
      game->gameTable.cells[1][1] == game->gameTable.cells[2][2]) 
      ||
      (game->gameTable.cells[1][1] == game->gameTable.cells[0][2] &&
      game->gameTable.cells[1][1] == game->gameTable.cells[2][0]))
  {
      game->gameState = game->gameTable.cells[1][1];
  }
}

void printGameTable(struct Game* game) {
  for (int row = 0; row <= 2; row++) {
    for (int col = 0; col <= 2; col++) {
      printf(" %c ", game->players[game->gameTable.cells[row][col]].playerChar);

      if (col < 2) printf("|");
    }

    if (row < 2) printf("\n---|---|---\n");
  }
}

bool compareIntArray(int array[]){
  int prev = array[0];

  for (int i = 0; i <= getSizeOfArray(array); i++) {
    if (array[i] != prev) return false;
    prev = array[i];
  }

  return true;
}

struct GameTable invert3by3Array(struct GameTable *oldGameTable) {
  struct GameTable newGameTable;

  for (int row = 0; row <= LEN(oldGameTable->cells); row++) {
    for (int col = 0; col <= LEN(oldGameTable->cells[0]); col++) {
      newGameTable.cells[row][col] = oldGameTable->cells[col][row];
    }
  }

  return newGameTable;
}

size_t getSizeOfArray(int array[]){
  return sizeof(&array) / sizeof(array[0]);
}
