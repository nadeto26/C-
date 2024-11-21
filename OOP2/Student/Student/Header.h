#pragma once
#include <string>
class Student {
private:
	std:: string name;
	int quizzes;
	int exams;
public:
	//method
	double getFinal();

	//setters and getters
	std::string getName();
	int getQuizzes();
	int getExams();

	void setName(std::string);
	void setquizzes(int);
	void setExams(int);

	//constructor
	Student(); // by default
	Student(std::string, int, int);

	
};
