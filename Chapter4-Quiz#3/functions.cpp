#include <iostream>

double askUser()
{
    std::cout << "Enter a floating point number: ";
    double x{};
    std::cin >> x;
    return x;
}

char askOperator()
{
    std::cout << "Enter a mathematical operator +, -, * or /: ";
    char x{};
    std:: cin >> x;
    return x;
}
