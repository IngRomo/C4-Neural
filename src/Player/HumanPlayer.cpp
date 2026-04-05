#include "Player/HumanPlayer.hpp"

#include <iostream>

HumanPlayer::HumanPlayer() {
}

HumanPlayer::~HumanPlayer() {
}

int HumanPlayer::getMove() {
    int col;
    std::cout << "Enter column (1-7): ";
    std::cin >> col;
    if (col < 1 || col > 7) {
        std::cout << "Invalid column!\n";
        return -1;
    }
    return col - 1;
}
