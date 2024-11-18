

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double quizzes;
    double exams;

    double getFinal();

    //contructor
    Student(string n, double q, double e) {
        name = n;
        q = quizzes;
        e = exams;
    }
};

double Student::getFinal() {
    return quizzes * 0.4 + exams * 0.6;
     
}

int main()
{
    Student students[5] = {
    Student("Natasha", 20, 21),
    Student("Ivan", 25, 28),
    Student("Maria", 30, 32),
    Student("Peter", 18, 22),
    Student("Anna", 28, 29)
};
    cout << "Student Name\tFinal Grade" << endl;
    for (int i = 0; i < 5; i++) {
        cout << students[i].name << "\t\t" << students[i].getFinal() << endl;
    }

}


