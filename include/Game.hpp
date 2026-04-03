#pragma once

#include "Board.hpp"
#include "Render.hpp"
#include "InputHandler.hpp"

class Game {
private:
    bool mGameState;
    bool playerTurn; //* 0 = red(p1), 1 = yellow(p2)
    Board mBoard;

    void init();
    void finishGame();
    void getMove(int);
    void finishTurn();
public:

    Game();
    ~Game();
};