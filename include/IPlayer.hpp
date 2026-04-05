#pragma once

class IPlayer {
public:
    virtual ~IPlayer() = default;
    virtual int getMove() = 0;  //* Returns column (0-6)
};