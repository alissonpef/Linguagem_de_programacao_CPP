#include <iostream>
#include "Clerk_menu.hpp"
#include "Clerk.hpp"
#include "Manager.hpp"
#include "Trainee.hpp"

ClerkMenu::ClerkMenu() {}

ClerkMenu::~ClerkMenu()
{
    for (Clerk *clerk : clerks)
    {
        delete clerk;
    }
}

void ClerkMenu::run()
{
    int option;
    do
    {
        cout << "-----------MENU DE FUNCIONARIOS-----------" << endl;
        cout << "1. Criar funcionario" << endl;
        cout << "2. Excluir funcionario" << endl;
        cout << "3. Lista de funcionarios" << endl;
        cout << "0. Voltar ao menu principal" << endl;
        cout << "Escolha uma opcao: ";
        cin >> option;

        switch (option)
        {
        case 1:
            createClerk();
            break;
        case 2:
            deleteClerk();
            break;
        case 3:
            listClerks();
            break;
        case 0:
            cout << "\nSaindo!" << endl;
            break;
        default:
            cout << "\nDigite uma opcao valida!" << endl;
            break;
        }
        cout << endl;
    } while (option != 0);
}

void ClerkMenu::createClerk()
{
    string name, position;
    double salary;

    cout << "\nNome do funcionario: ";
    cin >> name;
    cout << "Cargo do funcionario: ";
    cin >> position;
    cout << "Salario do funcionario em R$: ";
    cin >> salary;

    if (position == "Gerente")
    {
        clerks.push_back(new Manager(name, position, salary));
        *clerks.back() % 0.25; // Aumenta o salário do gerente em 25%
    }
    else if (position == "Estagiario")
    {
        clerks.push_back(new Trainee(name, position, salary)); 
    }
    else
    {
        clerks.push_back(new Clerk(name, position, salary));
    }

    cout << endl << "Funcionario criado!" << endl;
}

void ClerkMenu::deleteClerk()
{
    if (clerks.empty())
    {
        cout << endl << "Nao tem funcionarios cadastrados." << endl;
    }
    else
    {
        cout << endl << "\nFuncionarios cadastrados:" << endl;
        for (int i = 0; i < clerks.size(); i++)
        {
            cout << "\n\nFuncionario " << i << ":";
            clerks[i]->print_clerk();
        }
        int index;
        cout << "\nDigite o numero do funcionario a ser excluido: ";
        cin >> index;

        if (index >= 0 && index < clerks.size())
        {
            delete clerks[index];
            clerks.erase(clerks.begin() + index);
            cout << "\nFuncionario excluido!" << endl;
        }
        else
        {
            cout << "\nDigite uma opcao valida!" << endl;
        }
    }
}

void ClerkMenu::listClerks()
{
    if (clerks.empty())
    {
        cout << "\nNao tem funcionarios cadastrados." << endl;
    }
    else
    {
        for (int i = 0; i < clerks.size(); i++)
        {
            cout << "\nFuncionario " << i + 1 << ":";
            clerks[i]->print_clerk();
            cout << endl;
        }
    }
}
