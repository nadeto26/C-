

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
    // Конструктор с публичен достъп
    Car(std::string m, std::string b, int y) {
        model = m;
        brand = b;
        year = y;
    }

    // Getter за model
    std::string getModel() {
        return model;
    }

    // Setter за model
    void setModel(std::string m) {
        if (m != "Schoda") {
            model = m;  // Променяме модела, ако не е "Schoda"
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

    // Метод за скорост
    int speed(int maxSpeed) {
        return maxSpeed;
    }
};




int main() {
    // Създаваме два обекта
    Car car1("Corolla", "Toyota", 2020);
    Car car2("Civic", "Honda", 2018);

    // Извеждаме данни за колите
    std::cout << car1.getModel() << car2.getYear()<< std::endl;
    std::cout  << car2.getModel() <<  std::endl;

    // Извикваме метода за скорост
    

    return 0;


}
