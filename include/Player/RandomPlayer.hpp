#pragma once

#include "IPlayer.hpp"

class RandomPlayer : public IPlayer {
public:
    RandomPlayer();
    ~RandomPlayer();
    int getMove() override;
};