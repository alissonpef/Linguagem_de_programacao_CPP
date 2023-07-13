#include "Circulo.hpp"
#include <iostream>

using namespace std;

    Circulo::Circulo(double xx, double yy, double rr) : Forma {xx, yy}
    {
        r = rr;
    }

    double Circulo::area()
    {
        return 3.141592 * r * r;
    }

    void Circulo::imprime_dados()
    {
        cout << "Raio = " << r << endl;
        cout << "Area = " << area() << endl;
    }