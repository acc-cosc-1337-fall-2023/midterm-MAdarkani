#include "question3.h"
#include <iostream>

int main()
{
    char option;

    std::srand(time(NULL));

    do {
        std::cout << "Roll the dice? (Y/N): ";
        std::cin >> option;

        if (option == 'Y' || option == 'y') {
            int result = roll_dice();
            std::cout<<"Dice result: "<<result<<"\n";
        }

    } while (option == 'Y' || option == 'y');

    return 0;
}