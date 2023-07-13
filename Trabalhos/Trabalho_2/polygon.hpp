// Trabalho de Alisson e Deivid
#ifndef POLYGON
#define POLYGON
#include "point2D.hpp"

class Polygon
{
private:
    int cont;                        // Contador 
    Point2D *m_minhaListaDeVertices; // Ponteiro que contem os vertices

public:
    Polygon();                              // Construtor que inicia os valores em 0
    Polygon(Point2D *lista, int numVertex); // Construtor que inicia a lista de vertices e o numero de vertices
    ~Polygon();                             // Destrutor

    void SetVertex(Point2D *lista, int numVertex); // Recebe um ponteiro e o numero de vertices
    double CalcPerimeter();                        // Calcula o Permietro
    double CalcArea();                             // Calcula a Area
};

#endif 