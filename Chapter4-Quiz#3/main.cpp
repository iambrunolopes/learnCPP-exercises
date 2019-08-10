#include <iostream>
#include "declaredfunc.h"

int main()
{
    double a{askUser()};
    double b{askUser()};
    char c{askOperator()};

    if (c == '+')
        std::cout << a << " + " << b << " is " << a+b << '\n';
    else if (c == '-')
        std::cout << a << " - " << b << " is " << a-b << '\n';
    else if (c == '*')
        std::cout << a << " * " << b << " is " << a*b << '\n';
    else if (c == '/')
        std::cout << a << " / " << b << " is " << a/b << '\n';
    else
        {};

    return 0;
}
