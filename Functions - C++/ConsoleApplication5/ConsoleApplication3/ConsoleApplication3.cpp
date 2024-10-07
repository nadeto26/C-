

#include <iostream>
int operations(int num1, char op, int num2) {
    int result=0;
    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        if (num1 == 0 || num2 == 0) {
            std::cout << "There is not divided by 0" << std::endl;
            return 0;
        }
        result = num1 / num2;
    }
    else {
        
        std::cout << "Error: Invalid operation entered." << std::endl;
        return 0;  
    }
    return result;
    
}

int main()
{
    int num1, num2;
    char op;
    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter operation: ";
    std::cin >> op;

    std::cout << "Enter number 2: ";
    std::cin >> num2;
     
    std::cout << "The result is: " << operations(num1, op, num2) << std::endl;
}


