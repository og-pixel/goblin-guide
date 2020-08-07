#ifndef GOBLINGUIDE_TICKTACKTOEWINDOW_H
#define GOBLINGUIDE_TICKTACKTOEWINDOW_H

#include "../stdafx.h"
#include "Window.h"

//The most basic form of the game, not even considering special
// cases or anything like that.
class TickGame: public Window {

public:
  //Constructor
  TickGame();
  TickGame(int width, int height);

  //0 Empty
  //1 Player
  //2 AI
  int board[5][5] = {
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 },
                     { 0, 0, 0, 0, 0 }
  };

  bool chooseBoardField(int x, int y, int player);
  bool checkConditions();
  void render();
  void navigation();

  void testFunction() override;

private:
  //Variables
  bool playerTurn = true;

  int xPos = 2;
  int yPos = 2;

  int gameWidth = 30;
  int gameHeight = 30;

  //Functions
  bool createBoard();
  bool computerMove();
  bool playerMove(int x, int y);
  bool isTerminalSizeSufficient();
};

#endif //GOBLINGUIDE_TICKTACKTOEWINDOW_H