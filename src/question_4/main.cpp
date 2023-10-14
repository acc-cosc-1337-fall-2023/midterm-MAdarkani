#include"question4.h"
#include<iostream>

using::std::cout;
using::std::cin;

int main()
{
    char option;

    do
    {
        int num_cookies;
        std::vector<double> ingredients;

        cout<<"Enter the number of cookies: ";
        cin>>num_cookies;

        ingredients = get_cookie_ingredients(num_cookies);

        cout<<"Cups of sugar: "<<ingredients[0]<<"\n";
        cout<<"Cups of butter: "<<ingredients[1]<<"\n";
        cout<<"Cups of flour: "<<ingredients[2]<<"\n\n";
        
        cout<<"Do you want to calculate ingredients for different number of cookies? y/n \n";
        cin>>option;

    } while (option == 'Y' || option == 'y');
    
    return 0;
}