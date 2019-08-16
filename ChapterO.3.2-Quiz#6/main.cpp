#include <iostream>
#include "declaredfunctions.h"

int main()
{
    std::cout << "Lets convert a decimal number into its binary form!\n";
    int input{userInput()};

    int one{bitone(input)};                                     //returns the binary digit 0 or 1 (through file if1)
    int new_input_one{oneReturned(one,input)};                  //returns the new decimal number based on the first binary digit  (through file if2)

    int two{bittwo(new_input_one)};
    int new_input_two{twoReturned(two,new_input_one)};

    int three{bitthree(new_input_two)};
    int new_input_three{threeReturned(three,new_input_two)};

    int four{bitfour(new_input_three)};
    int new_input_four{fourReturned(four,new_input_three)};

    int five{bitfive(new_input_four)};
    int new_input_five{fiveReturned(five,new_input_four)};

    int six{bitsix(new_input_five)};
    int new_input_six{sixReturned(six,new_input_five)};

    int seven{bitseven(new_input_six)};
    int new_input_seven{sevenReturned(seven,new_input_six)};

    int eight{biteight(new_input_seven)};
    int new_input_eight{eightReturned(eight,new_input_seven)};





    //std::cout << "User input: " << input << '\n';
    //std::cout << "1st Bit: " << one << '\n';
    std::cout << "New input: " << new_input_eight << '\n';
    std::cout << "Printing the binary version of it: " << one << " " << two << " " << three << " " << four << "   " << five << " " << six << " " << seven << " " << eight << '\n';
    return 0;
}
