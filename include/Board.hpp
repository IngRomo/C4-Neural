#pragma once

#include <cstdint>
#include <array>

class Board {
private:
    uint64_t allPieces;

    bool isColumnFull(int);
public:
    std::array<uint64_t, 2> pieces;
    
    Board();
    ~Board();
    
    bool dropPiece(bool, int);
    bool checkWin(uint64_t bitboard);
};