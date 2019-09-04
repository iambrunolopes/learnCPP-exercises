#include <iostream>

int askUserInt() //asking user for integers
{
    std::cout << "Enter a integer: ";
    int x {};
    std::cin >> x;
    return x;
}

char askUserOperator()
{
    std::cout << "Enter one of the following operators +,-,*,/,%: ";
    char x{};
    std::cin >> x;
    return x;
}

int main()
{
    int one {askUserInt()};
    int two {askUserInt()};
    char op {askUserOperator()};

    switch(op)
    {
        case '+':
            std::cout << one + two << '\n';
            break;
        case '-':
            std::cout << one - two << '\n';
            break;
        case '*':
            std::cout << one * two << '\n';
            break;
        case '/':
            std::cout << one / two << '\n';
            break;
        case '%':
            std::cout << one % two << '\n';
            break;
        default:
            std::cout << "Next time we meet enter a valid operator!!\n";
            break;
    }

    return 0;
}
