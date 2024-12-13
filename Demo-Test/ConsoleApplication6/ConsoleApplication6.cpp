#include <iostream>
#include <string>

//Task1
template<class T> 
T theLargst(T a, T b, T c) {
    T temp = a;
    if (temp < b) temp = b;
    if (temp < c) temp = c;
    return temp;
}

//task2
void sumTheMatrix(int matrix[][5], int rols, int cows) {
    for (int i = 0; i < cows; i++) {
        int sum = 0;
        for (int j = 0; j < rols; j++) {
            if (matrix[i][j] % 3 && matrix[i][j] % 4 == 0) {
                sum += matrix[i][j];
            }
        }
        std::cout << "Row " << i + 1 << " sum: " << sum << std::endl;
    }
}

//task3
void applyVAT(double& price) {
    price *= 1.12;
}
 
//Task 4
class Person {
private:
    std::string name;
    int age;
public:
    Person();
    Person(std::string, int);
    Person(const Person& p); // copy constructor
    ~Person(); // destructor, delete 
};

//task 5 
void readName() {
    std::string first, last;
    std::cout << "Enter new name";
    std::cin >> first >> last;
    std::cout << first.at(0) << last[0] << first.length() << last.size() << std::endl;
    
}

//task6
void vertically() {
    std::string sentence;
    std::cout << "Enter a sentence"; // This is the test
    getline(std::cin, sentence);
    for (int i = sentence.length() - 1; i >= 0; i--) {
        std::cout << sentence[i];
    }
}

//task7
class Student: public BaseStudent {
private:
    std::string name;
    int exams;
    int quizzes;

public:
    Student(std::string n, int e, int q)
    {
        name = n;
        exams = e;
        if (q > 0 && q < 100) {
            quizzes = q;
        }
        else {
            quizzes = 0;
        }
    }

    double getFinalGrade() const;
    void displayGrade() const override;

    bool operator<(const Student& other) const; 
};
 

double Student::getFinalGrade() const
{
    return  quizzes * 0.4 + exams * 0.6;
}

void Student::displayGrade() const
{
    double finalGrade = getFinalGrade();
    char grade = ' ';

    if (finalGrade < 60) {
        grade = 'F';
    }
    else if (finalGrade >= 60 && finalGrade < 70) {
        grade = 'D';
    }
    else if (finalGrade >= 70 && finalGrade < 80) {
        grade = 'C';
    }
    else if (finalGrade >= 80 && finalGrade < 90) {
        grade = 'B';
    }
    else {
        grade = 'A';
    }

    std::cout << "Student: " << name << "\nFinal Grade: " << finalGrade << " (" << grade << ")\n";
}

 

bool Student::operator<(const Student& other) const
{
    return getFinalGrade() < other.getFinalGrade();
}

//Task8
class BaseStudent {
    virtual void displayGrade() const = 0;
    
};

class PFStudent : public Student {
public:
    PFStudent(std::string n, int e, int q) : Student(n, e, q) {}
    void displayGrade() const override;
    
};

 

 


int main()
{
    //task1
    std::cout << theLargst(3,4,5) << std::endl;
    std::cout << theLargst('m', 'q', 'c') << std::endl;

    ////task6
    vertically();

    //task7
    Student studen1("Gosho", 12, 23);
    studen1.displayGrade();

    Student studen2("Natasha", 21, 34);
    studen2.displayGrade();
    
 }

void PFStudent::displayGrade() const
{
}
