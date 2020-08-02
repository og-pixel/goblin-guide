#include "stdafx.h"
#include "Settings.h"
#include "window/Window.h"
#include "window/MainWindow.h"
#include "window/TickTackToeWindow.h"


int main() {
  //TODO This is meant to be run at least once
  initscr();
  keypad(stdscr, true);
  noecho();

  TickTackToeWindow* board = new TickTackToeWindow();
  board->navigation();

  std::unordered_map<std::string, Window*> mymap;


  // for(int i = 0; i < 5; i++)
  //   for(int j = 0; j < 5; j++){
  //     board->chooseBoardField(j, i, 1);
  //     board->render();
  //     board->getInput();
  //   }

  board->close();
  return 0;
}
