// Trabalho de Alisson e Deivid
#include "point2D.hpp"
#include "polygon.hpp"
#include <fstream>

Point2D *ReadShape2DFile(string path, size_t &numberOfVertex); // Faz a leitura de um arquivo, armazena dinamicamente e devolve para o Main

int main()
{
    cout << "Entre com um nome de arquivo para ler (bidimensional): ";
    string path;
    cin >> path;                                                  // Armazena o nome do arquivo caminho

    size_t numberOfVertex = 0;                                    // Declara numberOfVertex = 0
    Point2D *shapeVertex = ReadShape2DFile(path, numberOfVertex); // Cria um objeto shapeVertex com os dados lidos do arquivo
    if (shapeVertex == NULL)                                     
    {                                                             
        cout << " ***Erro, confira o nome do arquivo!" << endl;   // Mostra o erro na tela caso o arquivo nao exista
        return 1;
    }
    else
    {
        cout << "Arquivo: " << path << " tem " << numberOfVertex << " pontos" << endl;                              // Mostra o nome do arquivo e seus vertex
        for (size_t i = 0; i < numberOfVertex; i++)                                                       
        {                                                                                                        
            cout << "Ponto " << i << " -> X: " << shapeVertex[i].GetX() << "  Y: " << shapeVertex[i].GetY() << endl; // Mostra valor de X e Y na posicao i
        }
    }

    Polygon calculo = Polygon(shapeVertex, numberOfVertex); // Cria um objeto Polygon com os dados lidos do arquivo
    cout << "O perimetro do poligono eh: " << calculo.CalcArea() << endl;
    cout << "A area do perimetro eh: " << calculo.CalcPerimeter() << endl;

    return 0;
};

Point2D *ReadShape2DFile(string path, size_t &numberOfVertex)
{
    ifstream fileReader(path); // fileReader para ler o "path"

    if (!fileReader.is_open())
        return NULL;                                  // Se nao conseguir abrir o arquivo retorna NULL
    
    fileReader >> numberOfVertex;                     // Le um valor a partir do arquivo e armazena em numverOfVertex
    Point2D *pointList = new Point2D[numberOfVertex]; // Aloca memoria dinamicamente com o tamanho de numberOfVertex

    int x, y;
    for (size_t i = 0; i < numberOfVertex; i++)
    {
        fileReader >> x;          // Atribui valores de X
        fileReader >> y;          // Atribui valores de Y
        pointList[i].SetXY(x, y); // Passa os valores de X e Y passa o ponteiro
    }

    return pointList;
}
