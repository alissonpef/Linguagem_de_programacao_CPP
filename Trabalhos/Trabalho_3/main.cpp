#include <iostream>
#include <vector>
#include <string>
#include "Clerk.hpp"
#include "Clerk_menu.hpp"
#include "Product.hpp"
#include "Product_menu.hpp"

using namespace std;

int main()
{
    ClerkMenu clerk_menu;
    ProductMenu product_menu;

    int option;
    do
    {
        cout << "1. Abrir menu de funcionarios" << endl;
        cout << "2. Abrir menu de produtos " << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << endl;
            clerk_menu.run();
            break;
        case 2:
            cout << endl;
            product_menu.runP();
            break;
        case 0:
            cout << endl;
            cout << "Saindo!" << endl;
            break;
        default:
            cout << "Digite uma opcao valida!" << endl;
            break;
        }
        cout << endl;
    } while (option != 0);

    return 0;
}
