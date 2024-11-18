

#include <iostream>
using namespace std;


const double PI = 3.14;
class Circle {
public:
    double radius;
    double GetArea();
    double GetParameter();

public:
    //constructor
    Circle(float r) {
        radius = r;
    }

    //get
    double getRadius() {
        return radius;
    }

    //set
    double setRadious(float rad) {
        if (rad > 0) {
            std::cout << "Error" << std::endl;
        }
        else {
           return radius = rad;
        }
    }

};

//Area
double Circle::GetArea() {
    return radius * radius * PI;
}

//Parameter
double Circle::GetParameter() {
    return 2 * radius * PI;
}


int main()
{
    Circle circle1(5.0);  
    Circle circle2(10.0); 

     
    std::cout << "Area of circle1: " << circle1.GetArea() << std::endl;
    std::cout << "Perimeter of circle1: " << circle1.GetParameter() << std::endl;

     
    std::cout << "Area of circle2: " << circle2.GetArea() << std::endl;
    std::cout << "Perimeter of circle2: " << circle2.GetParameter() << std::endl;

     
    circle1.setRadious(7.5);
    std::cout << "New radius of circle1: " << circle1.getRadius() << std::endl;

    
    circle1.setRadious(-5.0);   

    return 0;
}


