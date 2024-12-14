#include <iostream>
#include <string>
//task 7
class BaseStudent {
public:
    virtual void displayGrade() const = 0;
};
class Student: public BaseStudent {
private:
    std::string name;
    int quizzes;
    int exams;
public:
    Student(std::string n, int q, int e)
    {
        name = n;
        if (q >= 0 && q <= 100) {
            quizzes = q;
        }
        else {
            quizzes = 0;
        }
        if (e >= 0 && e <= 100) {
            exams = e;
        }
        else {
            exams = 0;
        }
    };
    int getFinalGrade() const;
    void displayGrade() const;

    bool operator<(const Student& other) const;
      
};

class PFStudent : Student {
public:
    virtual void displayGrade() const ;

    PFStudent(std::string n, int p, int e) : Student(n, p, e) {};
};

int main()
{
    Student student1 = { "Nade", 12, 10 };
    student1.displayGrade();

    PFStudent student = { "Nade", 12, 10 };
    student.displayGrade();

     
}

int Student::getFinalGrade() const
{
    return quizzes * 0.4 + exams *0.6;
}

void Student::displayGrade() const
{
    std::string grade = " ";
    if (getFinalGrade() < 60) {
        grade = 'F';
    }
    else if (getFinalGrade() >= 60 && getFinalGrade() < 70) {
        grade = 'D';
    }
    else if (getFinalGrade() >= 70 && getFinalGrade() < 80) {
        grade = 'C';
    }
    else if (getFinalGrade() >= 80 && getFinalGrade() < 90) {
        grade = 'B';
    }
    else {
        grade = 'A';
    }

    std::cout << "The name is: "<< name << " The final grade is " <<getFinalGrade() << std::endl;
}

bool Student::operator<(const Student& other) const
{
    return getFinalGrade() < other.getFinalGrade();
}

void PFStudent::displayGrade() const
{
    if (getFinalGrade() < 60) {
        std::cout << "P";
    }
    else {
        std::cout << "F";
    }
}
