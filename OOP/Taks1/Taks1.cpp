#include <iostream>

class Divider {
public:
    double numerator;
    double denominator;

    Divider(double num, double den) {
        numerator = num;
        denominator = den;
    }

    double result() {
        return numerator / denominator;
    }
};

int main()
{
    Divider divison(50,20);
    std::cout << "Result: " << divison.result() << std::endl;
     
}

