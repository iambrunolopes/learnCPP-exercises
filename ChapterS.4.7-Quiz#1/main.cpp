#include <iostream>
//we want to keep track of advertising revenue

// we need to know (read from input):
//  1) how many adds were shown to users;
//  2) percentage that was clicked by users;
//  3) how much was earned on average from each click
// print all the data trough a print function fed by advertise + calculate how much we made per day

struct Advertising
{
    int addsShown;
    double percentageClicked;
    double averageEarningsClick;
};

void print (Advertising today)
{
    std::cout << today.addsShown << " adds were shown today!\n";
    std::cout << today.percentageClicked << " % of adds shown were clicked!\n";
    std::cout << today.averageEarningsClick << " Euros was our average earnings per click!\n";
}

int main()
{
    std::cout << "How many adds were shown today? ";
    int x {};
    std::cin >> x;

    std::cout << "Which percentage (%) got clicked? ";
    double y {};
    std::cin >> y;

    std::cout << "Type in the average earnings per click (in euros) ";
    double z {};
    std::cin >> z;

    Advertising today {x,y,z};

    print(today);

    std::cout << "Our add revenue today was: " << x*(y/100)*z << " Euros\n";


    return 0;
}
