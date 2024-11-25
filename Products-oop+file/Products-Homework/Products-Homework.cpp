#include "Product.h"
#include <iostream>
#include <fstream>

//Task - display information about the products - price, quantity and totalPrice 
//and at the end
//the total amount for all the products 

int main()
{
    //if the stream can not be open
    std::ifstream inputFile("products.txt");
    if (!inputFile) {
        std::cout << "Error, can not open the file";
    }

    std::string productName;
    double unitPrice, totalShopCartPrice = 0.0;
    int quantity;

    // Process each product as it's read from the file
    while (inputFile >> std::ws && std::getline(inputFile, productName, '$') //ws-> skips whitespace
        && inputFile >> unitPrice >> quantity) {
        Product(productName, unitPrice, quantity).display();
        totalShopCartPrice += unitPrice * quantity;
         
    }
    std::cout << "The total amount we have to pay is  " << totalShopCartPrice;

    inputFile.close();
}


