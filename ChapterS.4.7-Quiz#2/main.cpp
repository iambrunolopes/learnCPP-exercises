#include <iostream>

struct Fraction
{
    int numerator;
    int denominator;
};

Fraction askUser()
{
    Fraction input;
    std::cout << "Enter a integer: ";
    std::cin >> input.numerator;
    std::cout << "Enter a second integer: ";
    std::cin >> input.denominator;
    return input;
}

double multiply(Fraction x, Fraction y)
{
    double result = static_cast<double>(x.numerator*y.numerator)/(x.denominator*y.denominator);
    return result;
}

int main()
{
    Fraction x = askUser();
    Fraction y = askUser();

    std::cout << multiply(x,y);

    return 0;
}
