#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    double volume, price;
    string color;
public:
    Vehicle() : price(0), volume(0), color("green")
    {

    }
    Vehicle(double v, double p, string c) {

        setVolume(v);
        setPrice(p);

        color = c;
    }
    double getPrice() const {
        return price;
    }
    double getVolume() const {
        return volume;
    }
    string getColor() const {
        return color;
    }

    void setPrice(double p) {
        if (price > 0) {
            price = p;
        }
        else {
            price = p;
        }
    }

    void setVolume(double v) {
        if (v > 0) {
            volume = v;
        }
        else {
            volume = 1;
        }
    }
    void setColoer(string c) {
        color = c;
    }
};

class Car : public Vehicle {
    string model;
public:
    Car() : Vehicle(), model("") {

    }
    Car(string m, string c, double v, double p) : Vehicle(v, p, c) {
        model = m;
    }

    string getModel() const {
        return model;
    }
    void setModel(string m) {
        model = m;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}


