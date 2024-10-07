
#include <iostream>

float calculateanualSallary(float annualSalary) {
    if (annualSalary < 40000) {
        annualSalary += annualSalary * 0.05;
    }
    else {
        annualSalary += 2000;
        annualSalary += (annualSalary - 40000) * 0.02;
    }

    return annualSalary;
    
    
    
}

int main()
{
    float annualSallary;
    std::cout << "Enter annual salary: ";
    std::cin >> annualSallary;

    std::cout << "Annual salary is: " << calculateanualSallary(annualSallary) << std::endl;
}


