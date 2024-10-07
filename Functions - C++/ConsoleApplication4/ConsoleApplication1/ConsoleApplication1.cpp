 

#include <iostream>

float salary(float salary) {
    if (salary < 40000) {
        salary = salary + (salary * 1.05);
    }
   
    return (salary - 40000) * 0.2 + salary + 20000;;
}

int main()
{
    float x =0;
    std::cout << "Perimeter: " << salary(x) << std::endl;
}

 