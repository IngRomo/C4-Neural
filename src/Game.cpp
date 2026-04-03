#include <iostream>

#include "Game.hpp"
#include "Board.hpp"
#include "Render.hpp"

Game::Game() : mGameState(true), playerTurn(0), mBoard() {
    std::cout << " + Game created" << std::endl;

    init();
    Render::printBoard(mBoard.pieces[0], mBoard.pieces[1]);
}

Game::~Game() {
    std::cout << " - Game ended" << std::endl;
}

void Game::finishTurn(){
    playerTurn = !playerTurn;
}

void Game::init(){
    while(mGameState){
        if(!playerTurn) {
            std::cout << "p1 turn" << std::endl;

            if(mBoard.checkWin(mBoard.pieces[playerTurn])) {
                std::cout << "Player " << (playerTurn ? 2 : 1) << " wins!" << std::endl;
                mGameState = false;
            }

            finishTurn();
        } else {
            std::cout << "p2 turn" << std::endl;
            
            if(mBoard.checkWin(mBoard.pieces[playerTurn])) {
                std::cout << "Player " << (playerTurn ? 2 : 1) << " wins!" << std::endl;
                mGameState = false;
            }
            
            finishTurn();
            
            //!DEBUGGING
            mGameState = 0;
        }
    }
}