#include <iostream>
//This group of functions compute the user input and tosses out the binary digits
//There is one function for everyone of the 8-bits
int bitone(int x)
{
int first{};
    if ((x>=128) && (x<256))
        first = 1;
    else
        first = 0;
return first;
}

int bittwo(int x)
{
int second{};
    if ((x>=64) && (x<128))
        second = 1;
    else
        second = 0;
return second;
}

int bitthree(int x)
{
int third{};
    if ((x>=32) && (x<64))
        third = 1;
    else
        third = 0;
return third;
}

int bitfour(int x)
{
int four{};
    if ((x>=16) && (x<32))
        four = 1;
    else
        four = 0;
return four;
}

int bitfive(int x)
{
int five{};
    if ((x>=8) && (x<16))
        five = 1;
    else
        five = 0;
return five;
}

int bitsix(int x)
{
int six{};
    if ((x>=4) && (x<8))
        six = 1;
    else
        six = 0;
return six;
}

int bitseven(int x)
{
int seven{};
    if ((x>=2) && (x<4))
        seven = 1;
    else
        seven = 0;
return seven;
}

int biteight(int x)
{
int eight{};
    if ((x>=1) && (x<2))
        eight = 1;
    else
        eight = 0;
return eight;
}
