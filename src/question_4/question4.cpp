#include"question4.h"
//
bool test_config()
{
    return true;
}


std::vector<double> get_cookie_ingredients(int cookies)
{
    const double SUGAR_PER_COOKIE = 1.5/48;
    const double BUTTER_PER_COOKIE = 1.0/48;
    const double FLOUR_PER_COOKIE = 2.75/48;

    double sugar = SUGAR_PER_COOKIE*cookies;
    double butter = BUTTER_PER_COOKIE*cookies;
    double flour = FLOUR_PER_COOKIE*cookies;

    return {sugar,butter,flour};
}