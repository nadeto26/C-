// Exercise5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


struct product {
    std::string name;
    double price;
    int quantity;
 };

double calculateToTalPrice(product products[],int size) {
    double totalPrice=0;
    for (int i = 0; i < size; i++) {
         totalPrice += products[i].price * products[i].quantity;
    }
    return totalPrice;
}

int main()
{
    product products[5] = {
        {"Banana", 3.50, 3},
        {"Bread", 2.21, 5},
        {"Cheese", 1.21, 3},
        {"Meat", 3.08, 8},
        {"Lemon", 8.21, 6}
    };

    std::cout << "The total price is: $" << calculateToTalPrice(products,5) << std::endl;

    return 0;
}