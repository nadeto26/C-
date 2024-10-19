// Exercise7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct Employ {
    std::string name;
    int hours;
    double rate;
};

double calculateMaxsalary(Employ employess[], int size) {
    double maxSalary = 0;
    for (int i = 0; i < size; i++) {
        double salary = employess[i].rate * employess[i].hours;
        if (salary > maxSalary) {
             maxSalary=salary;
        }
    }

    return maxSalary;
}



int main()
{
    Employ employees[5] = {
        {"John", 30, 350.02},
        {"Deya", 20, 35020.02},
        {"Vayana", 21, 3250.12},
        {"Nadezhda", 32, 850.12},
        {"Simona", 28, 630.12}
    };

    double maxSalary = calculateMaxsalary(employees, 5);


    std::cout << "The maximum salary is: $" << maxSalary<< std::endl;

    return 0;
}

 

 