#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"

class Aluno : public Pessoa
{
    private:
    string curso;
    int matricula;

    public:
    Aluno(string, string, string, int);
    ~Aluno() {}
    void setCurso(string);
    void print();
};

#endif