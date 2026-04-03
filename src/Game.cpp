#include "Game.hpp"

#include <iostream>

Game::Game() : mGameState(true), playerTurn(0), mBoard() {
    std::cout << " + Game created" << std::endl;

    init();
    Render::printBoard(mBoard.pieces[0], mBoard.pieces[1]);
}

Game::~Game() {
    std::cout << " - Game ended" << std::endl;
}

void Game::finishTurn(){
    if(mBoard.checkWin(mBoard.pieces[playerTurn])){
        if (!playerTurn) {
            std::cout << "\033[1;31mPlayer 1 (red) wins!\033[0m" << std::endl;
        } else {
            std::cout << "\033[1;33mPlayer 2 (yellow) wins!\033[0m" << std::endl;
        }

        mGameState = false;
    }
    playerTurn = !playerTurn;
}

void Game::init(){
    while(mGameState){
        Render::printBoard(mBoard.pieces[0], mBoard.pieces[1]);
        
        int col = -1;

        if(!playerTurn) {
            std::cout << "p1 turn" << std::endl;

            while (col == -1) {
                col = InputHandler::getColumn();
            }
            if (mBoard.dropPiece(playerTurn, col)) {
                finishTurn();
            } else {
                col = -1;
            }
        } else {
            std::cout << "p2 turn" << std::endl;

            while (col == -1) {
                col = InputHandler::getColumn();
            }
            if (mBoard.dropPiece(playerTurn, col)) {
                finishTurn();
            } else {
                col = -1;
            }
        }
    }
}