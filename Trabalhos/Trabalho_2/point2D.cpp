// Trabalho de Alisson e Deivid
#include "point2D.hpp"

Point2D::Point2D()    // Contrutor
{
    m_x = m_y = NULL; // Inicia m_x e m_y com os valores NULL
}

Point2D::Point2D(double x, double y) // Construtor que recebe os parametros x e y
{
    m_x = new double;                // Aloca a quantidade dinamicamente
    m_y = new double;
    *m_x = x;                        // Adiciona o valor x a memoria *m_x
    *m_y = y;                        // Adiciona o valor x a memoria *m_y
}

Point2D::~Point2D()  //  Destrutor
{
    if (m_x != NULL) // Verifica se eh diferente de NULL antes de destruir
        delete m_x;  // Libera a memoria
    if (m_x != NULL)
        delete m_y;
}

void Point2D::SetXY(double x, double y) // Permite alterar as coordenadas
{
    if (m_x == NULL)                    // Verifica se os atributos sao NULL
        m_x = new double;               // Caso forem, ele aloca a memoria
    if (m_y == NULL)
        m_y = new double;
    *m_x = x;                           // Adiciona o valor x a memoria *m_x
    *m_y = y;                           // Adiciona o valor x a memoria *m_y
}

double Point2D::GetX()  // Metodo da classe para obter a coordenadas x
{
    return *m_x;        // Retorna o valor armazenado na memoria *m_x
}

double Point2D::GetY()  // Metodo da classe para obter a coordenadas y
{
    return *m_y;        // Retorna o valor armazenado na memoria *m_y
}
