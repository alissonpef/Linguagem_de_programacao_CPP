#include "Pessoa.hpp"
#include <string>
#include <iostream>

using namespace std;

Pessoa::Pessoa(string n, string e) : nome{n}, endereco{e} {}

Pessoa::~Pessoa() {}

void Pessoa::setEndereco(string e)
{
    endereco = e;
}
void Pessoa::print()
{
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
}