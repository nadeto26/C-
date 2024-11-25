#include "Product.h"
#include <iostream>

std::string Product::getName()
{
    return name;
}

double Product::getUnitPrice()
{
    return  unitPrice;
}

int Product::getQuantity()
{
    return  quantity;
}

void Product::setName(std::string n)
{
    name = n;
}

//check if the price is valid
void Product::setUnitPrice(int up)
{
    if (up > 0) {
        unitPrice = up;
    }
    else {
        unitPrice = 0;
    }
}

void Product::setQuantity(int q)
{
    if (q > 0) {
        quantity = q;
    }
    else {
        quantity = 0;
    }
}

//find the toralPrice by the price and quantity
double Product::getTotalPrice() const
{
    return unitPrice * quantity;
}

//displaying the products + their toralPrice
void Product::display() const
{
    std::cout << name << " " << quantity << " x " << unitPrice
        << ", so the price is: " << getTotalPrice() << "\n";
}

 
//default const
Product::Product()
{
    name = "";
    unitPrice = quantity = 0;
}

//tree-argument constructor
Product::Product(std::string n, double up, int q)
{
    name = n;
    unitPrice = up;
    quantity = q;
}
