#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LEN(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))

typedef enum {
  isPlaying,
  player1Won,
  player2Won,
} GameState;

typedef enum {
  none,
  X,
  O
} Players;

typedef struct {
  char playerChar;
} Player;

typedef struct {
  Players cells[3][3];
} GameTable;

GameTable invert3by3Array(GameTable *oldGameTable);

typedef struct {
  GameState gameState;

  Player players[3]; //3 players because player 0 is the not set;
  Players currentPlayer;

  GameTable gameTable;
} Game;

void printGameTable(Game* game);
void getGameState(Game* game);

bool checkWinCondition(Players array[]);

int main() {
  Game game = {
    .gameTable.cells = {0,0,0,0,0,0,0,0,0},
    .gameState = isPlaying,
    .currentPlayer = X
  };

  strcpy(&game.players[0].playerChar, " ");
  strcpy(&game.players[1].playerChar, "X");
  strcpy(&game.players[2].playerChar, "O");

  while (game.gameState == isPlaying) {
    printGameTable(&game);

    char move[6];

    printf("Player %d (%c), choose a cell to play (row,collumn): ", game.currentPlayer, game.players[game.currentPlayer].playerChar);
    fgets(move, 6, stdin);
    printf("\n");

    move[strlen(move) - 1] = '\0';

    int row = atoi(&move[0]);
    int col = atoi(&move[2]);

    if (row > 2 || col > 2 || game.gameTable.cells[row][col] != 0) {
      printf("Please pick a cell that is available.");
      continue;
    }

    game.gameTable.cells[row][col] = game.currentPlayer;

    getGameState(&game);

    if (game.gameState != isPlaying) {
      printGameTable(&game);

      printf("Player %d (%c) Won!\n", game.currentPlayer, game.players[game.currentPlayer].playerChar);
      break;
    }

    game.currentPlayer = (game.currentPlayer == X) ? O : X;
  }

  return 0;
}

void getGameState(Game* game){

  if (game->gameState != isPlaying) return;

  //check for a win in each row.
  for (int row = 0; row <= 2; row++) {
    if (checkWinCondition(game->gameTable.cells[row])) {
      game->gameState = (GameState)game->gameTable.cells[row][0];
    }
  }

  if (game->gameState != isPlaying) return;

  //check for a win in each column.
  for (int col = 0; col <= 2; col++) {
    GameTable inverseGameTable = invert3by3Array(&game->gameTable);

    if (checkWinCondition(inverseGameTable.cells[col])) {
      game->gameState = (GameState)inverseGameTable.cells[col][0];
    }
  }

  if (game->gameState != isPlaying) return;

  if ((game->gameTable.cells[1][1] == game->gameTable.cells[0][0] &&
      game->gameTable.cells[1][1] == game->gameTable.cells[2][2]) 
      ||
      (game->gameTable.cells[1][1] == game->gameTable.cells[0][2] &&
      game->gameTable.cells[1][1] == game->gameTable.cells[2][0]))
  {
      game->gameState = (GameState)game->gameTable.cells[1][1];
  }
}

void printGameTable(Game* game) {

  printf("\n");

  for (int row = 0; row <= 2; row++) {
    for (int col = 0; col <= 2; col++) {
      printf(" %c ", game->players[game->gameTable.cells[row][col]].playerChar);

      if (col < 2) printf("|");
    }

    if (row < 2) printf("\n---|---|---\n");
  }

  printf("\n");
}

bool checkWinCondition(Players array[]){
  int prev = array[0];

  for (int i = 0; i <= 2; i++) {
    if (array[i] != prev || array[i] == none) { 
      return false;
    }

    prev = array[i];
  }

  return true;
}

GameTable invert3by3Array(GameTable *oldGameTable) {
  GameTable newGameTable;

  for (int row = 0; row <= LEN(oldGameTable->cells) - 1; ++row) {
    for (int col = 0; col <= LEN(oldGameTable->cells[0]) - 1; ++col) {
      newGameTable.cells[row][col] = oldGameTable->cells[col][row];
    }
  }

  return newGameTable;
}
