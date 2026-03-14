#include <iostream>

#include "Game.hpp"

Game::Game() {
    std::cout << " + Game created" << std::endl;
}

Game::~Game() {
    std::cout << " - Game ended" << std::endl;
}
