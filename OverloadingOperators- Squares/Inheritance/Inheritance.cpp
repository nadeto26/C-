

#include <iostream>
#include <vector>

class Shape {
public:
    //virtual methods are void
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void display() const = 0;
};

class Square :public Shape {
private:
    int x;
public:
    Square(int x) : x(x >= 0 ? x : 0) {}

    int getX() const;
    void setX(int x);

    double getArea() const override {
        return x * x;
    }

    double getPerimeter() const override {
        return 4 * x;
    }

    void display() const override;

    friend std::istream& operator>>(std::istream& in, Square& s);
    friend std::ostream& operator<<(std::ostream& out, Square& s);

    bool operator<(const Square& other) const;
    Square operator+(const Square& other) const;

};

class Rectangle : public Square {
private:
    int y;
public:
    Rectangle(int x, int y): Square(x), y(y >= 0 ? y : 0){}
    int getY() const;
    void setY(int y);

    double getArea() const override;
    double getPerimeter() const override;

    void display() const override;

    
    friend std::ostream& operator<<(std::ostream& out, Rectangle& r);

     
};
int Square::getX() const
{
    return x;
}

void Square::setX(int x)
{
    if (x < 0) {
        this->x = 0; // Задаваме стойността на атрибута x
    }
    else {
        this->x = x;
    }
}

void Square::display() const
{
    std::cout << "Rectangle"  << std::endl;
    std::cout << x << std::endl;
    std::cout << getArea() << std::endl;
    std::cout << getPerimeter() << std::endl;
}

//operator "<" -- !!!! 
bool Square::operator<(const Square& other) const
{
    return this->getArea() == other.getArea();
}

//operator "+=" -- !!! 
Square Square::operator+(const Square& other) const
{
    return Square(this->x + other.x);
}


int Rectangle::getY() const
{
    return y;
}

void Rectangle::setY(int y)
{
    if (y < 0) {
        this->y = 0;
    }
    else {
        this->y = y;
    }
}

double Rectangle::getArea() const
{
    return getX() * y;;
}

double Rectangle::getPerimeter() const
{
    return 2 * getX() * 2*y;
}

 

void Rectangle::display() const
{
    std::cout << "Square" << std::endl;
    std::cout << y << std::endl;
    std::cout << getX() << std::endl;
    std::cout << getArea() << std::endl;
    std::cout << getPerimeter() << std::endl;
}

 

std::istream& operator>>(std::istream& in, Square& s)
{
    std::cout << "Enter the side ";
    in >> s.x;
    return in;
}

std::ostream& operator<<(std::ostream& out, Square& s)
{
std:out << "The side is ";
    out << s.x;

    return out;
}

std::ostream& operator<<(std::ostream& out, const Rectangle& r)
{
    out << "Rectangle: X = " << r.getX() << ", Y = " << r.getY() << ", Area = " << r.getArea();
    return out;
}

int main()
{
    Square s1(2);
    Square s2(5);
    Square s3 = s1 + s2;
    std::cout << "Is s < s2? " << (s1 < s2) << std::endl;
    std::cout << "The sum is: " << (s3) << std::endl;

    std::vector<Shape*> shapes;
    shapes.push_back(new Square(3));
    shapes.push_back(new Rectangle(4, 5));
    shapes.push_back(new Square(2));
    shapes.push_back(new Rectangle(6, 7));

    for (Shape* shape : shapes) {
        std::cout << *shape << std::endl;
    }

}

 
