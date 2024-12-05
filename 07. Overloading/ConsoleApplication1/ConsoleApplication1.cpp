 
#include <iostream>

class Rational {
public:
    Rational(int numerator = 0); // R�tional r; R�tional r1(2); //default constructor
    Rational(int numerator, int denominator);
    Rational(const Rational& rhs);// copy constructor � ���� �� ������ ���� �� ���� �����
    ~Rational();
    // assignment operators
    const Rational& operator=(const Rational& rhs); //  lhs = rhs 
    const Rational& operator+=(const Rational& rhs); // lhs += rhs 
    const Rational& operator-=(const Rational& rhs); // lhs -= rhs
    const Rational& operator*=(const Rational& rhs); // lhs *= rhs
    const Rational& operator/=(const Rational& rhs); // lhs /= rhs
    // binary arithmetic operators
    Rational operator+(const Rational& rhs) const;  // R�tional a = lhs + rhs //create new
    Rational operator-(const Rational& rhs) const;  // R�tional a = lhs - rhs
    Rational operator*(const Rational& rhs) const;  // R�tional a = lhs * rhs
    Rational operator/(const Rational& rhs) const;  // R�tional a = lhs / rhs

    // relational and equality operators
    bool operator<(const Rational& rhs) const;  // if (lhs < rhs) -> true or false
    bool operator<=(const Rational& rhs) const; // if (lhs <= rhs)
    bool operator>(const Rational& rhs) const;  // if (lhs > rhs)
    bool operator>=(const Rational& rhs) const; // if (lhs >= rhs)
    bool operator==(const Rational& rhs) const; // if (lhs == rhs)
    bool operator!=(const Rational& rhs) const; // if (lhs != rhs)

    // unary operators � work only with one object 
    Rational operator-() const;    // -lhs
    const Rational& operator++();  // ++lhs
    Rational operator++(int);      // lhs++
    const Rational& operator--();  // --lhs
    Rational operator--(int);      // lhs--

    // IO friends
   // cout << lhs << rhs << endl;
   // cin >> lhs >> rhs;
    friend std::ostream& operator<<(std::ostream& out, const Rational& value);
    friend std::istream& operator>>(std::istream & in, Rational& value);
    // member functions
    double toDouble();

private:
    int numer, denom;

    // ensures lowest form � ��������� �� ���-������� �����
    void normalize();

};

int main()
{
    std::cout << "Hello World!\n";
}

 
