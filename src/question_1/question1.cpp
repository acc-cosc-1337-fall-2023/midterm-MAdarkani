#include "question1.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    int points_earned = 0;

    if (sold>=1 && sold<=5)
    {
        points_earned = 1*sold;
    }
    else if (sold>=6 && sold<=10)
    {
        points_earned = 5*sold;
    }
    else if (sold>=11 && sold<=15)
    {
        points_earned = 10*sold;
    }
    else if (sold>=16)
    {
        points_earned = 15*sold;
    }
    
    return points_earned;
    
}