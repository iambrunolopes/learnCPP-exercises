#include <iostream>

int userInput()
{
    std::cout << "Insert a integer from 0 to 255: ";
    int input{};
    std::cin >> input;
    return input;
}
