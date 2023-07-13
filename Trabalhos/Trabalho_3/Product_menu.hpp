#ifndef PRODUCT_MENU_HPP
#define PRODUCT_MENU_HPP

#include <string>
#include <vector>
#include "Product.hpp"

class ProductMenu
{
private:
    vector<Product> products;

    void createProduct();
    void deleteProduct();
    void listProduct();
    void addStock();
    void removeStock();
    void applyDiscount();
    void applyIncrease();

public:
    ProductMenu();
    ~ProductMenu() {}

    void runP();
};

#endif
