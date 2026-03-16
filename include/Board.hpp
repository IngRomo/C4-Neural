#pragma once

class Board {
private:
public:
    bool team;

    uint64_t pieces[2];

    Board();
    ~Board();
};