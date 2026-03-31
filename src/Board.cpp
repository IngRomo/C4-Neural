#include "Board.hpp"

#include <cstdint>
#include <iostream>

Board::Board() : allPieces(0){
    pieces[0] = 0;
    pieces[1] = 0;
}

Board::~Board() {
}

bool Board::isColumnFull(int column) {
    int verticalOffset = 8;
    int topPosition = column + (verticalOffset * 5);
        return (allPieces >> topPosition) & 1; 
}

void Board::dropPiece(bool player, int column) {
    if (isColumnFull(column)){
        std::cout << "This column is full" << std::endl;
        return;
    };

    //* Update all pieces
    allPieces = pieces[0] | pieces[1];
};

bool Board::checkWin(uint64_t bitboard) {
    uint64_t m;
    int offset;
    
    //* Check horizontal
    offset = 1;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Horizontal win" << std::endl;
        return true;
    }

    //* Check vertical
    offset = 8;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Vertical win" << std::endl;
        return true;
    }

    //* Check diagonal '/'
    offset = 7;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Diagonal / win" << std::endl;
        return true;
    }

    //* Check diagonal '\'
    offset = 9;
    m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Diagonal \\ win" << std::endl;
        return true;
    }

    return false;
}