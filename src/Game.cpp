#include "Game.hpp"

#include <iostream>

#include "IPlayer.hpp"

Game::Game(IPlayer& p1, IPlayer& p2) : mGameState(true),
                                       playerTurn(0),
                                       mBoard(),
                                       mPlayer1(p1),
                                       mPlayer2(p2),
                                       mWinner(-1) {
    std::cout << " + Game created\n";

    init();
    Render::printBoard(mBoard.pieces[0], mBoard.pieces[1]);
}

Game::~Game() {
    std::cout << " - Game ended\n";
}

void Game::finishTurn(){
    if(mBoard.checkWin(mBoard.pieces[playerTurn])){
        if (!playerTurn) {
            std::cout << "\033[1;31mPlayer 1 (red) wins!\033[0m\n";
            mWinner = 0;
        } else {
            std::cout << "\033[1;33mPlayer 2 (yellow) wins!\033[0m\n";
            mWinner = 1;
        }

        mGameState = false;
    }
    playerTurn = !playerTurn;
}

void Game::init(){
    while(mGameState){
        Render::printBoard(mBoard.pieces[0], mBoard.pieces[1]);
        
        IPlayer& currentPlayer = playerTurn == 0 ? mPlayer1 : mPlayer2;
        
        if (!playerTurn) {
            std::cout << "\033[1;31mTurn:\033[0m";
            std::cout << "\U0001F534\n";
        } else {
            std::cout << "\033[1;33mTurn:\033[0m";
            std::cout << "\U0001F7E1\n";
        }

        int col = currentPlayer.getMove();
        
        if (mBoard.dropPiece(playerTurn, col)) {
            finishTurn();
        } else if (mBoard.isGameOver()) {
            std::cout << "\033[1;37mDraw! Board is full.\033[0m\n";
            mWinner = -1;
            mGameState = false;
        }
    }
}