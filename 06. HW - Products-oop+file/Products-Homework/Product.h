#pragma once
#include <string>
//class
class Product {
private:
	std::string name;
	double unitPrice;
	int quantity;
public:
	//get and set
	std::string getName();
	double getUnitPrice();
	int getQuantity();

	void setName(std::string);
	void setUnitPrice(int);
	void setQuantity(int);

	//methods
	double getTotalPrice() const;
	void display() const;

	//constructors
	Product();
	Product(std::string, double, int);
};
