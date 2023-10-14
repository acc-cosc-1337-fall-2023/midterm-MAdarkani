#include <iostream>
#include "question2.h"

using::std::cout; using::std::cin;

int main()
{  
    char option;

    do
    {
        double celsius;
        double fahrenheit;

        cout<<"Enter the temperature in Celsius: \n";
        cin>>celsius;

        fahrenheit = get_fahrenheit(celsius);
        
        cout<<"Temperature in Fahrenheit: "<<fahrenheit<<'\n';
        cout<<"Do you want to convert another temperature? y/n \n";
        cin>>option;

    } while (option == 'Y' || option == 'y');
    
    return 0;
}