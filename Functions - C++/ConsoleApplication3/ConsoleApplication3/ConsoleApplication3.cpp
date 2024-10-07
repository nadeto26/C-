#include <iostream>

int main() {
    int num;

    
    do {
        std::cout << "Enter a number between 11 and 20: ";
        std::cin >> num;
    } while (num < 11 || num > 20);  

     
    if (num % 2 == 0) {
        std::cout << "The triangle is inverted." << std::endl;
         
        for (int i = num; i > 0; --i) {
            for (int j = 0; j < i; ++j) {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
    }
    else {
        std::cout << "Number of asterisks in the bottom row: " << num << std::endl;
         
        for (int i = 1; i <= num; ++i) {
            for (int j = 0; j < i; ++j) {
                std::cout << "* ";
            }
            std::cout << std::endl;
        }
    }

    return 0;
}



