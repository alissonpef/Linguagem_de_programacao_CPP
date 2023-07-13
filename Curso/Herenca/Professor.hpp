#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "Pessoa.hpp"

class Professor : public Pessoa
{
    private:
    int siape, categoria;
    string instituto;

    public:
    Professor(string, string, int, int, string);
    ~Professor() {}
    void print();
    int promover() {return ++categoria;}
    void setInstituto(string i) {instituto = i;}
};

#endif