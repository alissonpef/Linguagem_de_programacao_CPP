#include "Date.hpp"
#include <iostream>

using namespace std;

int main()
{
    Date date1(28, 02, 2004);
    date1.imprime();
    date1.set_day(03); 
    date1.imprime();
    date1.set_month(02);
    date1.imprime();
    date1.set_year(2002);
    date1.imprime();

    cout << "\nDay: " << date1.get_day() << endl;
    cout << "Month: " << date1.get_month() << endl;
    cout << "Year: " << date1.get_year() << endl;
    return 0;
} 