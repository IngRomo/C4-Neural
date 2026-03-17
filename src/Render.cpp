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
    for (int i = (6 * 8) - 1; i >= 0; i--) {
        if (i % 8 == 0) continue;
        if ((p1 >> i) & 1)
            std::cout << "\U0001F534";
        else if ((p2 >> i) & 1)
            std::cout << "\U0001F7E1";
        else
            std::cout << "\U000026AA";
        if (i % 8 == 1) std::cout << '\n';
    }
}