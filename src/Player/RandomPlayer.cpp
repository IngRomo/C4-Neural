#include "Player/RandomPlayer.hpp"
#include "Board.hpp"

#include <random>
#include <iostream>

RandomPlayer::RandomPlayer() {
}

RandomPlayer::~RandomPlayer() {
}

int RandomPlayer::getMove() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 6);
    
    int col = dis(gen);
    std::cout << "Random player chose column: " << (col + 1) << std::endl;
    return col;
}

