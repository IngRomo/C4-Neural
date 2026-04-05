#pragma once

#include "IPlayer.hpp"

class HumanPlayer : public IPlayer {
public:
    HumanPlayer();
    ~HumanPlayer();
    int getMove() override;
};