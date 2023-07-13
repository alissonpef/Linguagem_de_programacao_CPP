#include "Forma.hpp"
#include "Retangulo.hpp"
#include "Circulo.hpp"
#include <iostream>

using namespace std;

int main()
{
    Forma *p1 = new Forma{10.0, 20.0};
    cout << "Forma: \n";
    p1->imprime_dados();
    cout << "Area =" << p1->area() << endl;

    Forma *r1 = new Retangulo{0, 0, 10, 50};
    cout << "\nRetangulo: " << endl;
    r1->imprime_dados();

    Forma *c1 = new Circulo{2, 3, 5};
    cout << "\nCirculo: " << endl;
    c1->imprime_dados();

    // Fazendo um vetor de diferentes formas
    Forma *vetor_formas[5];
    vetor_formas[0] = new Retangulo{10, 20, 30, 20};
    vetor_formas[1] = new Forma{100, 200};
    vetor_formas[2] = new Circulo{0, 0, 25};
    vetor_formas[3] = new Circulo{0.75, 10, 7};
    vetor_formas[4] = new Retangulo{20, 10, 30, 40};

    for (auto x : vetor_formas)
    {
        cout << "Forma: " << endl;
        x->imprime_dados();
        cout << "\n\n";
    }
    
    return 0;
}