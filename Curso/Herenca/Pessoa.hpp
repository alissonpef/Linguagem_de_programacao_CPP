#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>
using namespace std;

class Pessoa{
    protected: // Basicamente um private que deixa as classes derivadas acessarem
    string nome;
    string endereco;

    public:
    Pessoa(string, string);
    ~Pessoa();
    void setEndereco(string);
    void print();
};

#endif
