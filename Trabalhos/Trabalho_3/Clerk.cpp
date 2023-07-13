#include <iostream>
#include "Clerk.hpp"

Clerk::Clerk(string name, string position, double salary)
{
    this->name_clerk = name;
    this->position = position;
    this->salary = salary;
}

Clerk::~Clerk() {}

void Clerk::print_clerk()
{
    cout << "\nNome do funcionario: " << name_clerk << endl;
    cout << "Cargo: " << position << endl;
    cout << "Salario em R$: " << salary << endl;
}

Clerk& Clerk::operator%(double percentage)
{
    if (position == "Gerente")
    {
        salary+= salary * percentage;
    }
    return *this;
}
