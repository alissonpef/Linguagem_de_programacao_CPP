#include <iostream>
#include "Trainee.hpp"

Trainee::Trainee(string name, string position, double salary) : Clerk(name, position, salary)
{
    if (salary != 0.0)
    {
        this->salary = 0.0;
    }
}

void Trainee::print_clerk()
{
    cout << "\nNome do estagiario: " << name_clerk << endl;
    cout << "Cargo: " << position << endl;
    cout << "Salario: R$ " << salary << " (Estagiario)" << endl;
}
