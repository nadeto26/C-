#include "Student.h"

int Student::getFinal()
{
    return 0;
}

Student::Student()
{
    name = "";
    quizzes = exams = 0;
}

Student::Student(std::string name, int quizzes, int exams)
{
    setName(name);
    setQuizzes(quizzes);
    setExams(exams);
}


void Student::setName()
{
     
}

void Student::setQuizzes()
{
    if(quizzes>0 )
}

void Student::setExams()
{
}

std::string Student::getName()
{
    return name;
}

int Student::getQuizzes()
{
    return quizzes;
}

int Student::getExams()
{
    return exams;
}
