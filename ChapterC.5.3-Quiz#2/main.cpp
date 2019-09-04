#include <iostream>
#include <string>

enum class Animal
{
    PIG,
    CHICKEN,
    GOAT,
    CAT,
    DOG,
    OSTRICH,
};

std::string getAnimalName(Animal animal)
{
    switch(animal)
    {
        case Animal::PIG:
            return "Pig";
            break;
        case Animal::CHICKEN:
            return "Chicken";
            break;
        case Animal::GOAT:
            return "Goat";
            break;
        case Animal::CAT:
            return "Cat";
            break;
        case Animal::DOG:
            return "Dog";
            break;
        case Animal::OSTRICH:
            return "Ostrich";
            break;
        default:
            std::cout << "Error! That's not a valid animal\n";
            return 0;
    }
}

void printNumberOfLegs(Animal animal)
{
    switch (animal)
    {
        case Animal::PIG:
        case Animal::GOAT:
        case Animal::CAT:
        case Animal::DOG:
            std::cout << "A " << getAnimalName(animal) << " has 4 legs\n";
            break;
        case Animal::CHICKEN:
        case Animal::OSTRICH:
            std::cout << "A " << getAnimalName(animal) << " has 2 legs\n";
            break;
        default:
            std::cout << "Error! That might not be a animal!";
            break;

    }
}

int main()
{
    printNumberOfLegs(Animal::CAT);
    printNumberOfLegs(Animal::CHICKEN);
    return 0;
}
