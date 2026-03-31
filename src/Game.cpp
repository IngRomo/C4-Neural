#include <iostream>

#include "Game.hpp"
#include "Board.hpp"
#include "Render.hpp"

Game::Game() : mGameState(true), playerTurn(0) {
    std::cout << " + Game created" << std::endl;

    Board mBoard;
    init();
    Render::printBoardWin(mBoard.pieces[0], mBoard.pieces[1]);
    
}

Game::~Game() {
    std::cout << " - Game ended" << std::endl;
}

void Game::init(){
    while(mGameState){
        if(playerTurn) {
            
        } else {

        }
    }
}