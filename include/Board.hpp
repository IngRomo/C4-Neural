#pragma once

#include <cstdint>
#include <array>

class Board {
private:
    uint64_t allPieces;

    bool isColumnFull(int);
    void dropPiece(bool, int);
public:
    std::array<uint64_t, 2> pieces;

    Board();
    ~Board();
    
    bool checkWin(uint64_t bitboard);
    
    // TODO: implement these
    // bool makeMove(int column, bool player);
    // bool isValidMove(int column);
    // void reset();
};