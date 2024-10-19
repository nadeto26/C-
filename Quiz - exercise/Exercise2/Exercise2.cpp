// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void printUpperCase(const std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            std::cout << str[i];
        }
    }
    std::cout << std::endl;
}

int main()
{
    std::string myString = "Hello, World! How Are You?";
    printUpperCase(myString);

    return 0;
}


