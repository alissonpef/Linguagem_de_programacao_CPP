#include "Retangulo.hpp"
#include <iostream>

using namespace std;

Retangulo::Retangulo(double xx, double yy, double bb, double hh) : Forma{xx, yy}
{
    b = bb;
    h = hh;
}

void Retangulo::imprime_dados()
{
    Forma::imprime_dados();
    cout << "Base: " << b << "\nAltura: " << h << endl;
    cout << "Area: " << area() << endl;
}
double Retangulo::area()
{
    return b * h;
}
