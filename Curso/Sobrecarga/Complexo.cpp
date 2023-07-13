#include <iostream>
#include "Complexo.hpp"

using namespace std;

Complexo::Complexo(float r, float i)
{
    real = r;
    imag = i;
}

void Complexo::print()
{
    cout << real << " + " << imag << "i\n";
}

Complexo Complexo::add(Complexo &par)
{
    float x = this->real + par.real;
    float y = this->imag + par.imag;
    return Complexo{x, y};
}
Complexo Complexo::sub(Complexo &par)
{
    float x = this->real - par.real;
    float y = this->imag - par.imag;
    return Complexo{x, y};
}

// Sobrecarga de operadores
Complexo Complexo::operator+(Complexo &par) // a = b.operator+(c) ou a = b + cComplexo::
{
    float x = this->real + par.real;
    float y = this->imag + par.imag;
    return Complexo{x, y};
}

Complexo Complexo::operator-(Complexo &par)
{
    float x = this->real - par.real;
    float y = this->imag - par.imag;
    return Complexo{x, y};
}

bool Complexo::operator!()
{
    if( real == 0 && imag == 00)
    {
        return true;
    }
return false;
}

// Pre-incremento
Complexo& Complexo::operator++()
{
    this->real = this-> real + 1;
    this->imag = this-> imag + 1;
    return *this;
}

// Pos-incremento
Complexo Complexo::operator++(int value)
{
    Complexo temp = *this;
    this->real = this-> real + 1;
    this->imag = this-> imag + 1;
    return temp;
}