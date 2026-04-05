#pragma once

#include "Board.hpp"
#include "Render.hpp"

class IPlayer;

class Game {
private:
    bool mGameState;
    bool playerTurn; //* 0 = red(p1), 1 = yellow(p2)
    Board mBoard;
    IPlayer& mPlayer1;
    IPlayer& mPlayer2;
    int mWinner;  //* -1 = draw, 0 = p1 wins, 1 = p2 wins

    void init();
    void finishTurn();
public:

    Game(IPlayer& p1, IPlayer& p2);
    ~Game();
    int getWinner() { return mWinner; };
};