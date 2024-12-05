

#include <iostream>

int sumEvenRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    return sum;
}

int main()
{
    int x, y;
    std::cout << "Enter start and end: ";
    std::cin >> x >> y;
    std::cout << "Factoriel: " << sumEvenRange(x,y) << std::endl;
}


