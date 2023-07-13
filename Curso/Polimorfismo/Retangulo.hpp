#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "Forma.hpp"

class Retangulo : public Forma
{
    private:
    double b, h;

    public:
    Retangulo(double, double, double, double);
    ~Retangulo() {}

    virtual void imprime_dados();
    virtual double area();
};

#endif