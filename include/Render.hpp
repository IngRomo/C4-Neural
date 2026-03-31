#pragma once
#include <cstdint>

class Render {
private:
public:
    Render();
    ~Render();
    static void printBoard(uint64_t p1, uint64_t p2);
    static void printBoardWin(uint64_t p1, uint64_t p2);
};