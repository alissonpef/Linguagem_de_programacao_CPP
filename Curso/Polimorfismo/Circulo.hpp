#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Forma.hpp"
#include <iostream>

using namespace std;

class Circulo : public Forma
{
    private:
    double r;

    public:
    Circulo(double, double, double);
    ~Circulo() {}
    virtual double area();
    virtual void imprime_dados();
};

#endif