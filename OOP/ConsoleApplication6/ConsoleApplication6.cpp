

#include <iostream>
#include <string>

#include <iostream>
#include <string>

class Car {
private:
    std::string model;
    std::string brand;
    int year;

public:
    // ����������� � �������� ������
    Car(std::string m, std::string b, int y) {
        model = m;
        brand = b;
        year = y;
    }

    // Getter �� model
    std::string getModel() {
        return model;
    }

    // Setter �� model
    void setModel(std::string m) {
        if (m != "Schoda") {
            model = m;  // ��������� ������, ��� �� � "Schoda"
        }
        else {
            std::cout << "Try again" << std::endl;
        }
    }

    int getYear() {
        return year;
    }

    void setYear(int y) {
        if (y < 0) {
            std::cout << "Try again" << std::endl;
        }
        else {
            std::cout << "Succesfull" << std::endl;
        }
    }

    // ����� �� �������
    int speed(int maxSpeed) {
        return maxSpeed;
    }
};




int main() {
    // ��������� ��� ������
    Car car1("Corolla", "Toyota", 2020);
    Car car2("Civic", "Honda", 2018);

    // ��������� ����� �� ������
    std::cout << car1.getModel() << car2.getYear()<< std::endl;
    std::cout  << car2.getModel() <<  std::endl;

    // ��������� ������ �� �������
    

    return 0;


}
