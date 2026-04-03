#include "InputHandler.hpp"

#include <iostream>

InputHandler::InputHandler()
{
}

InputHandler::~InputHandler()
{
}

int InputHandler::getColumn() {
    int col;
    std::cout << "Enter column (1-7): ";
    std::cin >> col;
    if (col < 1 || col > 7) {
        std::cout << "Invalid column!" << std::endl;
        return -1;
    }
    return col;
}
