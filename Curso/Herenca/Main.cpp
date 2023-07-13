#include "Pessoa.hpp"
#include "Aluno.hpp"
#include "Professor.hpp"
#include <iostream>

using namespace std;

int main()
{
    Pessoa p1{"Alisson", "Santa Catarina"};
    cout << "\nPessoa: " << endl;
    p1.print();

    Aluno a1{"Alisson", "Santa Catarina", "ENG COMP", 25};
    cout << "\nAluno: " << endl;
    a1.print();

    Professor pr1{"Jose", "Santa Catarina", 123, 3, "UFSC"};
    cout << "\nProfessor: " << endl;
    pr1.print();
    
    return 0;
}