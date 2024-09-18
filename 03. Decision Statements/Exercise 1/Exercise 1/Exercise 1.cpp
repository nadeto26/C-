 

#include <iostream>

int main()
{
    int hours = 0; 
    int rate = 0;
    int salary = 0;

    std::cout << "Enter hours worked: ";
    std::cin >> hours;
    std::cout << "Enter hourly rate: ";
    std::cin >> rate;

    if (hours > 40){
        salary = (40 * rate) + (hours - 40) * rate * 1.5;

    }
    else {
        salary = hours * rate;

    }
    std::cout << "The salaty is: " << salary << std::endl;
    return 0;
}

 