#include <iostream>
#include "declaredfunctions.h"
#include "constants.h"

int main()
{
    double x {towerHeight()};

    print(0,x,distanceFallen(0));
    print(1,x,distanceFallen(1));
    print(2,x,distanceFallen(2));
    print(3,x,distanceFallen(3));
    print(4,x,distanceFallen(4));
    print(5,x,distanceFallen(5));

    return 0;
}
