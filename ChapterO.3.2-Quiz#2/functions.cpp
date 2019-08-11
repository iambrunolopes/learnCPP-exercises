#include <iostream>

int askUser()
{
    std::cout << "Insert a integer: ";
    int input{};
    std::cin >> input;
    return input;
}

void isEven(int input)
{
   if (input % 2 == 0)
        std::cout << "The integer is even!\n";
   else
        std::cout << "The integer is odd!\n";
}
