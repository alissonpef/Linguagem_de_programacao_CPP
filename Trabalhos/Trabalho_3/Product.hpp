

#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>
#include <iostream>

using namespace std;

class Product
{
protected:
    string name_product;
    double price;
    int amount;

public:
    Product(string = "", double = 0.0, int = 0);
    ~Product();

    void print_product();

    Product& operator+=(int quantity);
    Product& operator-=(int quantity);
    Product& operator*=(double percentage);
    Product& operator/=(double percentage);
};

#endif