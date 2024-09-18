

#include <iostream>

int main()
{
    float price;
    std::cout << "Enter a price: ";  std::cin >> price;
    if (price <= 19.99) {
        std::cout << "No tax";   
    }
    else if (price <= 20 && price >= 99.99)
    {
        std::cout << price *0.6;
    }
    else {
        std::cout << price * 0.8;
    }
}


