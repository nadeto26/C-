#include "Header.h"

double Student::getFinal()
{
    return quizzes * 0.4 + exams * 0.6;
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

void Student::setName(std::string n)
{
    name = n;
}

void Student::setquizzes(int q)
{
    if (q > 0) {
        quizzes = q;
    }
    else {
        quizzes = 0;
    }
}

void Student::setExams(int e)
{
    if (e > 0) {
        exams = e;
    }
    else {
        exams = 0;
    }
}

Student::Student()
{
    name = "jfjf";
    quizzes  = 20;
    exams =120;
}

Student::Student(std::string n, int q, int e)
{
    name = n;
    quizzes = q;
    exams = e;
}
