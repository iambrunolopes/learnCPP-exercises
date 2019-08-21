#include <iostream>

int main()
{   //asking the user for two integers
    std::cout << "Enter two integers! The second larger than the first:  " << '\n';
    int first{};                            //Variable first is created
    std::cin >> first;
    int second{};                           //Variable second is created
    std::cin >> second;

    if (first>second)
    {
        int change{};                       //Variable change is created while first and second still exists
        change=first;
        first=second;
        second=change;
    }
                                            //Variable change is destroyed here
    std::cout << "The smaller integer is: " << first << '\n';
    std::cout << "The bigger integer is : " << second << '\n';

    return 0;
}                                           //Variables first and second are destroyed here
