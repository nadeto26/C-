#include <iostream>
#include "ConsoleApplication2.h"

int main() {
    int number;

    std::cout << "How many numbers you want to enter?: ";

    std::cin >> number;

    for (int i = 1; i <= number; i++) {
        std::cout << i << endl;
    }

     

    return 0;
}


 
