#include "Professor.hpp"
#include <iostream>

using namespace std;

    Professor::Professor(string n, string e, int s, int c, string i) : Pessoa{n, e}
    {
        siape = s;
        categoria = c;
        instituto = i;
    }

    void Professor::print()
    {
        Pessoa::print();
        cout << "Siape: " << siape << "\n";
        cout << "Categoria: " << categoria << "\n";
        cout << "Instituto: " << instituto << "\n";
    }
