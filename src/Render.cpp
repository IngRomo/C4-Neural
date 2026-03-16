#include <iostream>

#include "Render.hpp"

Render::Render() {
    std::cout << "\U000026AA"; //* white
    std::cout << "\U0001F534"; //* red
    std::cout << "\U0001F7E1" << '\n'; //* yellow
}

Render::~Render() {
}
