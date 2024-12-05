#pragma once
const double PI = 3.14;
class Circle {
private:
    double radius;

public:
    double GetArea();
    double GetParameter();
    //constructor
    Circle(double r) {
        radius = r;
    }

    //getter and setters
    double getRadiuos;
    double setRadious;

    //operations
    double GetArea();
    double GetParameter();
};
