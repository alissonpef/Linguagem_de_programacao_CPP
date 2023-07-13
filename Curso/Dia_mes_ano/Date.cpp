#include "Date.hpp"
#include <iostream>

using namespace std;

Date::Date(int d, int m, int y)
{
    cout << "Objeto inicializado" << endl;
    day = d;
    month = m;
    year = y;
}

Date::~Date()
{
    cout << "Objeto destruido" << endl;
}

int Date::get_day()
{
    return day;
}

int Date::get_month()
{
    return month;
}

int Date::get_year()
{
    return year;
}

void Date::set_day(int d)
{
    if (d >= 0 && d <= 31)
        day = d;
}

void Date::set_month(int m)
{
    if (m >= 0 && m <= 12)
        month = m;
}

void Date::set_year(int y)
{
    if (y >= 0)
        year = y;
}

void Date::imprime()
{
    cout << "Date: " << day << ":" << month << ":" << year << endl;
}