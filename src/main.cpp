#include <iostream>

#include "Game.hpp"

#include <iostream>
#include <cstdint>

void printBitboard(uint64_t bitboard, int size) {
    //* Print bitboard as bits
    for (int i = size - 1; i >= 0; i--) {
        // if (i % 8 == 0) continue;
        std::cout << ((bitboard >> i) & 1);
        if (i % 8 == 0) std::cout << '\n';
    }
    std::cout << '\n';

}

bool checkWin(uint64_t bitboard){
    uint8_t offset = 1;
    //* Check horizontal    
    uint64_t m = (bitboard >> offset) & bitboard;
    if((m >> offset * 2) & m){
        std::cout << "Horizontal win" << std::endl;
        return true;
    }

    //* Check vertical
    offset = 7;
    m = (bitboard >> offset) & bitboard;
    if((m >> (offset * 2)) & m){
        std::cout << "Vertical win" << std::endl;
        return true;
    }

    //* Check diagonal '/'
    offset = 6;
    m = (bitboard >> offset) & bitboard;
    if((m >> (offset * 2)) & m){
        std::cout << "Diagonal / win" << std::endl;
        return true;
    }

    //* Check diagonal '\'
    offset = 8;
    m = (bitboard >> offset) & bitboard;
    if((m >> (offset * 2)) & m){
        std::cout << "Diagonal \\ win" << std::endl;
        return true;
    }

    return false;
}

int main() {
    // constexpr uint64_t bitboard = 0B000000'0000000'0000000'0000000'0000000'0000000'1000001'0000010'0000100;
    constexpr uint64_t bitboard = 0B0'1111111'0'1111111'0'1111111'0'1111111'0'1111111'0'1111111'0; //*add stones
    constexpr int bitSize = 6 * 8;

    printBitboard(bitboard, bitSize);
    if(checkWin(bitboard)){
        std::cout << "Won!" << std::endl;
    }

    return 0;
}


// int main(int argc, const char** argv) {
//     std::cout << "Init" << '\n';

//     Game mGame;

//     return 0;
// }