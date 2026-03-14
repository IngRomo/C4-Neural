#include <iostream>

int main(int argc, const char** argv) {
    std::cout << "Init" << '\n';
    
    //* 6 rows
    //* 7 cols
    //TODO: Testing different versions of Unicode characters to see how to display the rows.

    //? emoji usage (dont like this) 
    // std::cout << "\U0001F534" << std::endl;
    // std::cout << "\U0001F7E1" << std::endl;

    //? unicode too small?
    std::cout << "\033[37m●\033[0m "; //* white
    std::cout << "\033[31m●\033[0m "; //* red
    std::cout << "\033[93m●\033[0m "; //* yellow

    //? unicode gets stretched on some terminals
    std::cout << "\033[37m\u2B24\033[0m "; //* white
    std::cout << "\033[31m\u2B24\033[0m "; //* red
    std::cout << "\033[93m\u2B24\033[0m "; //* yellow


    return 0;
}