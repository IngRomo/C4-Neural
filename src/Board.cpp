#include "Board.hpp"

#include <cstdint>
#include <iostream>

Board::Board() : allPieces(0){
    pieces[0] = 0;
    pieces[1] = 0;
}

Board::~Board() {
}

bool Board::isColumnFull(int col) {
    int topPosition = 5 * 8 + col;
    return (allPieces >> topPosition) & 1; 
}

bool Board::dropPiece(bool player, int col) {
    //TODO:
    //! IF THIS HAPPENS DONT SWAP PLAYERS!!!!
    if (isColumnFull(col)){
        std::cout << "This column is full" << std::endl;
        return false;
    };

    //* Lowest empty row in col
    for (size_t row = 0; row < 6; row++) {          //* Rows bottom to top
        int pos = row * 8 + col;                    //* Bit index pos [row, col]
        if (!((allPieces >> pos) & 1)) {            //* Check if bit is 0 (cell is empty)
            // uint64_t newPos = 1;                    //* 64-bit = 1
            // uint64_t mask = (newPos << pos);        //* Shift 1 to position pos (drop position)
            // pieces[player] = pieces[player] | mask; //* Apply mask for the player pieces
            pieces[player] |= (1ULL << pos);   //* Set bit for current player
            allPieces = pieces[0] | pieces[1];
            return true;
        }
    }
};

bool Board::checkWin(uint64_t bitboard) {
    uint64_t m;
    int offset;
    
    //* Check horizontal '―'
    offset = 1;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Horizontal ― win" << std::endl;
        return true;
    }

    //* Check vertical '|'
    offset = 8;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Vertical | win" << std::endl;
        return true;
    }

    //* Check diagonal '\'
    offset = 7;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Diagonal \\ win" << std::endl;
        return true;
    }

    //* Check diagonal '/'
    offset = 9;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Diagonal / win" << std::endl;
        return true;
    }

    return false;
}