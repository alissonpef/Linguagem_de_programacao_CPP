#include <iostream>
#include "Manager.hpp"

Manager::Manager(string name, string position, double salary) : Clerk(name, position, salary) {}

void Manager::print_clerk()
{
    cout << "\nNome do gerente: " << name_clerk << endl;
    cout << "Cargo: " << position << endl;
    cout << "Salario com bonus de gerente em R$: " << salary << endl;
}
