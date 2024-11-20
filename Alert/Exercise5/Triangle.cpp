#include "Triangle.h"

bool Triangle::IsValid()
{
    return (sideA + sideB > sideC && sideB + sideC > sideA && sideA + sideC > sideB);
}

Triangle::Triangle(int a, int b, int c)
{
    sideA = a;
    sideB = b;
    sideC = c;
}

Triangle::Triangle()
{
}

std::string Triangle::getType()
{
    if (!IsValid())
        return "invalid";
    else if (sideA == sideB && sideB == sideC)
        return "equilateral";
    else if (sideA == sideB || sideB == sideC || sideC == sideA)
        return "isosceles";
    return "scalene";
}

int Triangle::getParimeter()
{
    if (IsValid()) {
        return sideA + sideB + sideC;
    }
    return 0;
}
