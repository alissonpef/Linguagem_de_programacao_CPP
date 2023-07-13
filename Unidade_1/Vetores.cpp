#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

void print(vector<int> v, int n);

int main()
{
    vector<int> vetA;                         // Vetor vazio
    vector<int> vetB(10);                     // Vetor com tamanho 10
    vector<int> vetC(10, 1);                  // Vetor com tamanho 10 e valores 1
    vector<int> vetC_1(10, 2);                // Vetor com tamanho 10 e valores 2
    vector<int> vetD{10, 20, 30, 40};         // Vetor declado com valores
    vector<vector<int>> a(2, vector<int>(3)); // Vetor multidimensional
    a[0][0] = 5;
    a[0][1] = 19;
    a[0][2] = 3;
    a[1][0] = 22;
    a[1][1] = -8;
    a[1][2] = 10;
    vector<vector<int>> a{{5, 19, 3}, // Ou tambem assim
                          {22, -8, 10}};

    int n = vetC.size(); // Atribuindo o tamanho do vetor a N
    print(vetC, n);      // Chamado da funcao
    cout << "\n";

    int m = vetC_1.size();
    for (int i = m - 1; i >= 0; i--)
    {
        cout << vetC_1[i] << ' ';
    }

    vector<int> lista;   // Declara a lista como um vetor
    lista.push_back(5);  // Adiciona 5 ao final da lista
    lista.push_back(-3); // Adiciona -3 ao final da lista
    lista.push_back(12); // Adiciona 12 ao final da lista
    lista.pop_back();    //
    lista.pop_back();    // Remove 12 da lista e remove -3 da lista

    return 0;
}

void print(vector<int> vetC, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << vetC[i] << ' ';
    }
}
