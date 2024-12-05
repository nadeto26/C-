//Exercise1



#include <iostream>


class Employee {
	int age;
	std::string name;
	public:
		Employee(std::string n, int a) {
			name = n;
			age = a;
		}
		bool operator<(const Employee& e) const {
			return this->age < e.age;
		}
		//if the left side is not an object
		friend std::ostream& operator<<(std::ostream& out, const Employee& obj) { //output  -> reference

			out << "Employee" << obj.name << "(" << obj.age << ")" << std::endl;
			return out;
		}
		friend std::istream& operator>>(std::istream& out, Employee& obj) { //input -> reference, without const 

			getline(out, obj.name, ' ');
			out >> obj.age;
			return out;
		}
};

int main()
{
	Employee e1("John Smith", 30);
	Employee e2("Jane Doe", 25);

	if (e1 < e2) {
		std::cout << e1 << " is younger" << std::endl;
	}
	else {
		std::cout << e2 << " is younger" << std::endl;
	}
	std::cin >> e1;
}


