#include "Triangle.h"
#include "Triangle.cpp"
#include <iostream>

int main()
{
   Triangle triangles[5] = {
   Triangle(5, 20, 21) }; //because it is default constructor

    for (int i = 0; i < 5; i++) {
        std::cout << triangles[i].getParimeter() << "\t\t" << triangles[i].getType() << std::endl;
    }

}

