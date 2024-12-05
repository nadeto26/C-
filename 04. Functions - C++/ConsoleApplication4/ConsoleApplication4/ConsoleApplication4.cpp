 

#include <iostream>
 

#include <iostream>   

int findThePerimeter(int a, int b) {
    return 2 * a + 2 * b;
}

int findTheArea(int a, int b) {
    return a * b;
}

int main() {
    int x, y;
    std::cout << "Enter two sides: ";
    std::cin >> x >> y;

    std::cout << "Perimeter: " << findThePerimeter(x, y) << std::endl;
    std::cout << "Area: " << findTheArea(x, y) << std::endl;

    return 0;
}

