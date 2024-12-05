 

#include <iostream>

class Location {
    int x;
    int y;
public:
    Location(int x, int y) {
       this-> x = x;
        this->y = y;
    }

    bool operator==(const Location& l) const { // the left side is not changing - for the const 
        return x == l.x && y == l.y;
    }

    const Location& operator =(const Location& l) {
        if (this != &l) {
            x = l.x;
            y = l.y;
        }
        return *this;
    }
    Location operator+(const Location& l) const {
        return Location (x+ l.x, y + l.y);
    }

    friend std::ostream& operator<<(std::ostream& out, const Location& obj) { //output  -> reference

        out << "Location" << obj.x << "(" << obj.y << ")" << std::endl;
        return out;
    }
    friend std::istream& operator>>(std::istream& in, Location& obj) { //input -> reference, without const 

        
        in >> obj.x >> obj.y;
        return in;
    }
};

int main()
{
    Location loc(1, 2);
    Location loc2(1, 3);
    if (loc == loc2) {
        std::cout << "It is right";
    }
    Location loc3(2, 3);
    loc = loc2 = loc3;
    loc3 = loc + loc2;
    loc3 = loc + loc2;

    std::cout << loc << loc2;
    std::cin >> loc;
}

 