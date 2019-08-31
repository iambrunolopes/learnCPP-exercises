#include <iostream>
#include <string>

enum class Race //declaring monster races
{
    OGRE,
    DRAGON,
    ORC,
    GIANTSPIDER,
    SLIME
};

struct Monster //declaring our monster variables
{
    std::string name;
    int hp;
    Race type;
};

void printInfo(Monster monster)
{
    int race {static_cast<int>(monster.type)};
    //I couldn't figure out a way to convert the integer coming from monster.type (since I had to convert it)
    // to then be used by std::cout
    if (race == 0)
        std::cout << "This Ogre is named " << monster.name << " and has " << monster.hp << " health." << "\n";
    if (race == 1)
        std::cout << "This Dragon is named " << monster.name << " and has " << monster.hp << " health." << "\n";
    if (race == 2)
        std::cout << "This Orc is named " << monster.name << " and has " << monster.hp << " health." << "\n";
    if (race == 3)
        std::cout << "This Giant Spider is named " << monster.name << " and has " << monster.hp << " health." << "\n";
    if (race == 4)
        std::cout << "This Slime is named " << monster.name << " and has " << monster.hp << " health." << "\n";
}

int main()
{
    Monster torg {"Torg", 145, Race::OGRE};
    Monster blurp {"Blurp", 23, Race::SLIME};

    printInfo(torg);
    printInfo(blurp);

    return 0;
}
