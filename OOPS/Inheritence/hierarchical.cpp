#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:
    string name;
    int rollNo;

    Student(string n, int r) {
        this -> name = n;
        this -> rollNo = r;
    }

};

class Teacher {
public:
    string subject;
    double salary;

    Teacher(string s, double sa) {
        this -> subject = s;
        this -> salary = sa;
    }
};

// GS -> Graduate Student
class GS : public Teacher, public Student {
public:
    string researchArea;

    GS(string name, int rollNo, string subject, double salary, string researchArea) : Student(name, rollNo) , Teacher(subject, salary) {
        this -> researchArea = researchArea;
    }

    void displayInfo() {
        cout << name << endl;
        cout << rollNo << endl;
        cout << subject << endl;
        cout << salary << endl;
        cout << researchArea << endl;
    }
};

int main() {
    GS g1("Farjaz", 123, "Quantumn Physics", 1000, "Core Physics");
    g1.displayInfo();

    return 0;
}