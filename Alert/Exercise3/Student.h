#pragma once
#include <string>
class Student {
private:
	std::string name;
	int quizzes;
	int exams;
public:
	int getFinal();
	Student();
	Student(std::string name, int quizzes, int exams);

	//setters and getters
	void setName();
	void setQuizzes();
	void setExams();

	std::string getName();
	int getQuizzes();
	int getExams();
};
