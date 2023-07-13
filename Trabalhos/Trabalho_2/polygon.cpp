// Trabalho de Alisson e Deivid
#include "polygon.hpp"
#include <cmath>

Polygon::Polygon()                 // Contrutor
{                               
    cont = 0;                      // Inicia cont com 0
    m_minhaListaDeVertices = NULL; // inicia m_minhaListaDeVertices com NULL
}

Polygon::Polygon(Point2D *lista, int numVertex) // Construtor que inicia a lista de vertices e o numero de vertices
{                                               
    cont = numVertex;                           // Atribui o tamanho a cont
    m_minhaListaDeVertices = lista;             // Atribui o valor do array a m_minhaListaDeVertices
}

Polygon::~Polygon()                      //  Destrutor
{                                      
    if (m_minhaListaDeVertices != NULL)  // Verifica se eh diferente de NULL antes de destruir
        delete[] m_minhaListaDeVertices; // Libera a memoria alocada
}

void Polygon::SetVertex(Point2D *lista, int numVertex) // Atualiza os vertices com os coordenadas do array
{                                                   
    if (m_minhaListaDeVertices != NULL)                // Verifica se eh diferente de NULL antes desalocar
        delete[] m_minhaListaDeVertices;               // Libera a memoria alocada
                                                    
    cont = numVertex;                                  // Define o numero de vertices do polygon
    m_minhaListaDeVertices = lista;                    // Aloca dinamicamente um array de tamanho cont
}

double Polygon::CalcPerimeter() // Calcula o perimetro a partir dos vertices
{
    double per = 0;
    int i = 0;

    for (size_t i = 0; i < cont - 1; i++) // Percorre todos os vertices do poligono e calcula a distancia entre cada um
    {
        per += sqrt((m_minhaListaDeVertices[i].GetX() - m_minhaListaDeVertices[i + 1].GetX()) * (m_minhaListaDeVertices[i].GetX() - m_minhaListaDeVertices[i + 1].GetX()) +
                    (m_minhaListaDeVertices[i].GetY() - m_minhaListaDeVertices[i + 1].GetY()) * (m_minhaListaDeVertices[i].GetY() - m_minhaListaDeVertices[i + 1].GetY()));
    }
    per += sqrt((m_minhaListaDeVertices[i].GetX() - m_minhaListaDeVertices[i + 1].GetX()) * (m_minhaListaDeVertices[i].GetX() - m_minhaListaDeVertices[i + 1].GetX()) +
                (m_minhaListaDeVertices[i].GetY() - m_minhaListaDeVertices[i + 1].GetY()) * (m_minhaListaDeVertices[i].GetY() - m_minhaListaDeVertices[i + 1].GetY()));

    return per;
}

double Polygon::CalcArea()                 // Calcula a area do poligino com base nas suas coodernadas
{
    double area = 0;
    double ox;
    double oy;
    ox = m_minhaListaDeVertices[0].GetX(); // Coordenadas do primeiro vertice
    oy = m_minhaListaDeVertices[0].GetY(); // Coordenadas do primeiro vertice

    for (size_t i = 1; i < cont; i++)      // Percorre os vertices do poligono
    {
        double x = m_minhaListaDeVertices[i].GetX();
        double y = m_minhaListaDeVertices[i].GetY();
        area += (x * oy - y * ox);         // Formula do calculo de um poligono irregular
        ox = x;
        oy = y;
    }

    return area / 2;                       // Retorna a area do poligono
}
