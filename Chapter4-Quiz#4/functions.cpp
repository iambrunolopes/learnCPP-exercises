#include <iostream>
#include "constants.h"

double towerHeight() //asking user for input
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;
    return towerHeight;
}

double distanceFallen(double sec) // calculating distance fallen after sec seconds
{
    double distanceFallen{gravity*(sec*sec)/2};
    return distanceFallen;
}

void print(int seconds, double towerHeight, double distanceFallen)
{
    if (distanceFallen < towerHeight)
        std::cout << "At " << seconds << " seconds, " << " the ball is at height: " << towerHeight - distanceFallen << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, " << " the ball in on the ground\n";
}
