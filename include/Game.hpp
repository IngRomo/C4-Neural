#pragma once

class Game {
private:
    bool mGameState;
    bool playerTurn;

    void init();
    void finishGame();
    void getMove(int);
public:

    Game();
    ~Game();
};