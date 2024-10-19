// Exercise6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

struct Person {
    std::string name;
    int age;
};

int main()
{
    Person person1 = { "John Doe", 30 };
    Person person2 = { "Alice Smith", 25 };
    Person person3 = { "Bob Johnson", 35 };

    Person oldest = person1;

    if (person2.age > oldest.age) {
        oldest = person2;
    }
    if (person3.age > oldest.age) {
        oldest = person3;
    }

    std::cout << "The oldest person is: " << oldest.name << std::endl;

    return 0;
}

 
 