#pragma once
#include <string>

class Triangle {
private: 
	int sideA;
	int sideB;
	int sideC;

	bool IsValid();

public:
	Triangle(int, int, int);
	Triangle();
	std::string getType();
	int getParimeter();
};
