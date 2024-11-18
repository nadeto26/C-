

#include <iostream>

class Point {
private:
    double x;
    double y;
    

    Point(double xVal = 0, double yVal = 0) {
        x = xVal;  
        y = yVal;   
    }

public:
    double getX() {
        return x;
    }
    double setX(double xVal) {
        x = xVal;
    }

    double getY() {
        return y;
    }

    void setY(double yVal) {
        y = yVal;
    }

    double calcDistance(const Point& other) const {
        return sqrt(pow(other.x - x, 2) + pow(other.y - y, 2));
    }

    void display() const {
        std::cout << "(" << x << ", " << y << ")";
    }

};

 

int main()
{
    Point p1(3, 4);
    Point p2(0, 0);

    std::cout << "Point 1: ";
    p1.display();
    std::cout << "\nPoint 2: ";
    p2.display();

    std::cout << "\nDistance between Point 1 and Point 2: "
        << p1.calcDistance(p2) << std::endl;

}

