// Trabalho de Alisson e Deivid
#ifndef POINT2D
#define POINT2D
#include <iostream>

using namespace std;

class Point2D
{
private:
    double *m_x, *m_y; // Coordernadas do plano X e Y

public:
    Point2D();                                // Construtor que inicia os valores m_x e m_y em 0
    Point2D(double x, double y);              // Construtor que inicia os valores de m_x e m_y declarados
    ~Point2D();                               // Destrutor

    void SetXY(double x, double y); // Seta o valor de X e Y
    double GetX();                  // Retorna o valor da coodernada X
    double GetY();                  // Retorna o valor da coodernada Y
};

#endif 