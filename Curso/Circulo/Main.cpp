#include <iostream>
#include "Circle.hpp"

using namespace std;

int main()
{
    Circle c1; // {0, 0, 0}
    Circle c2(15.7, 8.9, -5);
    Circle c3(7.7); // {0, 0}

    cout << endl << "Circle c1: " << endl;
    c1.imprime();

    c1.set_radius(10);
    c1.set_origin(5, 7);
    cout << endl << "Circle c1 atualizado: " << endl;
    c1.imprime();
    cout << "Area = " << c1.area() << endl;
    cout << "Diametro = " << c1.diameter() << endl;


    cout << endl << "Circle c2: " << endl;
    c2.imprime();

    cout << endl << "Circle c3: " << endl;
    c3.imprime();

    return 0;
}