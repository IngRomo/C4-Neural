#include <iostream>

#include "Game.hpp"
#include "Player/HumanPlayer.hpp"
#include "Player/RandomPlayer.hpp"

int main(int argc, const char** argv) {
    std::cout << "\n===== C4 ENGINE =====\n\n";
    
    HumanPlayer humanPlayer;
    RandomPlayer randomPlayer;
    RandomPlayer randomPlayer2;

    int p1Wins = 0, p2Wins = 0, draws = 0;
    int numGames = 100'000;
    // int numGames = 1;

    for (size_t i = 0; i < numGames; i++) {
        Game mGame(randomPlayer, randomPlayer2);
        
        int winner = mGame.getWinner();
        if (winner == 0) {
            p1Wins++;
        } else if (winner == 1) {
            p2Wins++;
        } else {
            draws++;
        }
    }

    std::cout << "\n===== RESULTS =====\n";
    std::cout << "Player 1 wins: " << p1Wins << "\n";
    std::cout << "Player 2 wins: " << p2Wins << "\n";
    std::cout << "Draws: " << draws << "\n";

    return 0;
}