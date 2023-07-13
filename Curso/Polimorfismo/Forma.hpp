#ifndef FORMA_HPP
#define FORMA_HPP

class Forma
{
protected: // Para habilitar herenca
    double x, y;

public: 
    Forma(double = 0, double = 0);
    ~Forma(){};

    virtual void imprime_dados();       // Para habilitar polimorfismo
    virtual double area() { return 0; } // Para habilitar polimorfismo
};

#endif