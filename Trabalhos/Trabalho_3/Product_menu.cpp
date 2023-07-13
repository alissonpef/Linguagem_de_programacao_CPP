#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Product.hpp"
#include "Product_menu.hpp"

using namespace std;

ProductMenu::ProductMenu()
{
}

void ProductMenu::runP()
{
    int option;
    do
    {
        cout << "-----------MENU DE PRODUTOS-----------" << endl;
        cout << "1. Adicionar itens" << endl;
        cout << "2. Excluir itens" << endl;
        cout << "3. Listar itens" << endl;
        cout << "4. Adicionar ao estoque" << endl;
        cout << "5. Retirar do estoque" << endl;
        cout << "6. Desconto no produto" << endl;
        cout << "7. Aumento no produto" << endl;
        cout << "0. Voltar ao menu principal" << endl;
        cout << "Escolha uma opcao: ";
        cin >> option;

        switch (option)
        {
        case 1:
            createProduct();
            break;
        case 2:
            deleteProduct();
            break;
        case 3:
            listProduct();
            break;
        case 4:
            addStock();
            break;
        case 5:
            removeStock();
            break;
        case 6:
            applyDiscount();
            break;
        case 7:
            applyIncrease();
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

void ProductMenu::createProduct()
{
    string nameP;
    double price;
    int amount;

    cout << "\nNome do produto: ";
    cin >> nameP;
    cout << "Preco do produto em R$: ";
    cin >> price;
    cout << "Quantidade de itens: ";
    cin >> amount;

    Product newProduct(nameP, price, amount);
    products.push_back(newProduct);

    cout << endl << "Produto criado!" << endl;
}

void ProductMenu::deleteProduct()
{
    if (products.empty())
    {
        cout << endl << "Nao tem produtos cadastrados." << endl;
    }
    else
    {
        cout << endl << "Produtos cadastrados:" << endl;
        for (int i = 0; i < products.size(); i++)
        {
            cout << "\nProduto " << i << ":";
            products[i].print_product();
        }

        int index;
        cout << endl << "\nDigite o numero do produto a ser excluido: ";
        cin >> index;

        if (index >= 0 && index < products.size())
        {
            products.erase(products.begin() + index);
            cout << "\nProduto excluido!" << endl;
        }
        else
        {
            cout << "\nDigite uma opcao valida!" << endl;
        }
    }
}

void ProductMenu::listProduct()
{
    if (products.empty())
    {
        cout << endl << "Nao tem produtos cadastrados." << endl;
    }
    else
    {
        for (int i = 0; i < products.size(); i++)
        {
            cout << "\nProduto " << i << ":";
            products[i].print_product();
            cout << endl;
        }
    }
}

void ProductMenu::addStock()
{
    if (products.empty())
    {
        cout << endl << "Nao ha produtos cadastrados." << endl;
    }
    else
    {
        cout << endl << "Produtos disponiveis para adicionar estoque:" << endl;
        for (int i = 0; i < products.size(); i++)
        {
            cout << "\nProduto " << i << ":";
            products[i].print_product();
        }

        int index;
        cout << endl << "\nDigite o numero do produto para aumentar o estoque: ";
        cin >> index;

        if (index >= 0 && index < products.size())
        {
            int quantity;
            cout << "Quantidade a adicionar: ";
            cin >> quantity;

            products[index] += quantity;
            cout << "Estoque adicionado!" << endl;
        }
        else
        {
            cout << "\nDigite uma opcao valida!" << endl;
        }
    }
}

void ProductMenu::removeStock()
{
    if (products.empty())
    {
        cout << endl << "Nao tem produtos cadastrados." << endl;
    }
    else
    {
        cout << endl << "Produtos disponiveis para diminuir o estoque:" << endl;
        for (int i = 0; i < products.size(); i++)
        {
            cout << "\nProduto " << i << ":";
            products[i].print_product();
        }

        int index;
        cout << endl << "\nDigite o numero do produto para diminuir o estoque: ";
        cin >> index;

        if (index >= 0 && index < products.size())
        {
            int quantity;
            cout << "Quantidade a diminuir: ";
            cin >> quantity;

            products[index] -= quantity;
            cout << "Estoque diminuido!" << endl;
        }
        else
        {
            cout << "\nDigite uma opcao valida!" << endl;
        }
    }
}

void ProductMenu::applyDiscount()
{
    if (products.empty())
    {
        cout << endl << "Nao tem produtos cadastrados." << endl;
    }
    else
    {
        cout << endl << "Produtos disponiveis para aplicar desconto:" << endl;
        for (int i = 0; i < products.size(); i++)
        {
            cout << "\nProduto " << i << ":";
            products[i].print_product();
        }

        int index;
        cout << "\nDigite o numero do produto para aplicar desconto: ";
        cin >> index;

        if (index >= 0 && index < products.size())
        {
            double percentage;
            cout << "Porcentagem de desconto: ";
            cin >> percentage;

            products[index] /= percentage;
            cout << "Desconto aplicado!" << endl;
        }
        else
        {
            cout << "\nDigite uma opcao valida!" << endl;
        }
    }
}

void ProductMenu::applyIncrease()
{
    if (products.empty())
    {
        cout << endl << "Nao tem produtos cadastrados." << endl;
    }
    else
    {
        cout << "Produtos disponiveis para aplicar aumento:" << endl;
        for (int i = 0; i < products.size(); i++)
        {
            cout << "\nProduto " << i << ":";
            products[i].print_product();
        }

        int index;
        cout << endl << "\nDigite o numero do produto para aplicar o aumento: ";
        cin >> index;

        if (index >= 0 && index < products.size())
        {
            double percentage;
            cout << "Porcentagem de aumento: ";
            cin >> percentage;

            products[index] *= percentage;
            cout << "Aumento aplicado!" << endl;
        }
        else
        {
            cout << "\nDigite uma opcao valida!" << endl;
        }
    }
}
