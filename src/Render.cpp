#include <iostream>

#include "Render.hpp"

Render::Render() {
    std::cout << "\U000026AA"; //* white
    std::cout << "\U0001F534"; //* red
    std::cout << "\U0001F7E1" << '\n'; //* yellow
}

Render::~Render() {
}

void Render::printBoard(uint64_t p1, uint64_t p2) {
    for (int row = 5; row >= 0; row--) {
        for (int col = 0; col < 7; col++) {
            int pos = row * 8 + col;
            if ((p1 >> pos) & 1)
                std::cout << "\U0001F534";
            else if ((p2 >> pos) & 1)
                std::cout << "\U0001F7E1";
            else
                std::cout << "\U000026AA";
        }
        std::cout << '\n';
    }
}

void Render::printBoardASCII(uint64_t p1, uint64_t p2) {
    for (int row = 5; row >= 0; row--) {
        for (int col = 0; col < 7; col++) {
            int pos = row * 8 + col;
            if ((p1 >> pos) & 1)
                std::cout << "X";
            else if ((p2 >> pos) & 1)
                std::cout << "O";
            else
                std::cout << ".";
        }
        std::cout << '\n';
    }
}