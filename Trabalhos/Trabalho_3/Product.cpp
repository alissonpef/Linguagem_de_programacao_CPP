#include <iostream>
#include <string>
#include <iomanip>
#include "Product.hpp"

using namespace std;

Product::Product(string name_product, double price, int amount)
{
    this->name_product = name_product;
    this->price = price;
    this->amount = amount;
}

Product::~Product() {}

void Product::print_product()
{
    cout << "\nNome do produto: " << name_product << "\nPreco em R$:" << fixed << setprecision(2) << price << "\nQuantidade: " << amount << endl;
}

Product& Product::operator+=(int quantity)
{
    amount += quantity;
    return *this;
}

Product& Product::operator-=(int quantity)
{
    if (quantity <= amount)
        amount -= quantity;
    else
        amount = 0;
    return *this;
}

Product& Product::operator*=(double percentage)
{
    price = price + (price * (percentage / 100));
    return *this;
}

Product& Product::operator/=(double percentage)
{
    price = price - (price * (percentage / 100));
    return *this;
}