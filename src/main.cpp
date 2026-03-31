#include <iostream>

#include "Game.hpp"
#include "Render.hpp"

#include <iostream>
#include <cstdint>

// void printBitboard(uint64_t bitboard, int size) {
//     for (int i = size - 1; i >= 0; i--) {
//         if (i % 8 == 0) continue; //* skip stone bits
//         std::cout << ((bitboard >> i) & 1);
//         if (i % 8 == 1) std::cout << '\n'; //* newline after 7th column
//     }
// }

// bool checkWin(uint64_t bitboard){
//     uint64_t m;
//     uint8_t offset;
    
//     //* Check horizontal
//     offset = 1;
//     m = (bitboard >> offset) & bitboard;
//     if((m >> offset * 2) & m){
//         std::cout << "Horizontal win" << std::endl;
//         return true;
//     }

//     //* Check vertical
//     offset = 8;
//     m = (bitboard >> offset) & bitboard;
//     if((m >> offset * 2) & m){
//         std::cout << "Vertical win" << std::endl;
//         return true;
//     }

//     //* Check diagonal '/'
//     offset = 7;
//     m = (bitboard >> offset) & bitboard;
//     if((m >> offset * 2) & m){
//         std::cout << "Diagonal / win" << std::endl;
//         return true;
//     }

//     //* Check diagonal '\'
//     offset = 9;
//     m = (bitboard >> offset) & bitboard;
//     if((m >> offset * 2) & m){
//         std::cout << "Diagonal \\ win" << std::endl;
//         return true;
//     }

//     return false;
// }

// int main() {

//     constexpr uint64_t bitboard = 0B0'0000000'0'0000000'0'0001000'0'0000100'0'0000010'0'0000001'0; //*add stones
//     constexpr uint64_t bitboard2 = 0B0'0000000'0'0000000'0'0010000'0'0001000'0'0000100'0'0000010'0; //*add stones
    /*
    This bitboard is this position:
        0000000
        0000000  
        0001000
        0000100
        0000010
        0000001   
    */
    
//     constexpr int bitSize = 6 * 8;

    // printBitboard(bitboard, bitSize);
//     Render::printBoard(bitboard, bitboard2);
//     if(checkWin(bitboard)){
//         std::cout << "Won!" << std::endl;
//     }

//     return 0;
// }


int main(int argc, const char** argv) {
    std::cout << "Init" << '\n';

    Game mGame;

    return 0;
}