#include <iostream>
#include "question1.h"

using::std::cout; using::std::cin;

int main()
{  
    char option;

    do
    {
        int widgets_sold;
        int earned_points;

        cout<<"Enter the number of widgets sold: \n";
        cin>>widgets_sold;
        if (widgets_sold>=0)
        {
            earned_points = get_earned_points(widgets_sold);
            cout<<"Points earned: "<<earned_points<<"\n";
        }
        else
        {
            cout<<"You entered invalid number.\n";
        }
        
        cout<<"Do you want to calculate another points? y/n \n";
        cin>>option;

    } while (option == 'Y' || option == 'y');
    
    return 0;
}