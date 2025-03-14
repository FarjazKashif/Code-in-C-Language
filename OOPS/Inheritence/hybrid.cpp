#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    int rollNo;

    Student(string n, int a, int r) : Person(n, a) {
        rollNo = r;
    }
};

class Teacher : public Person {
public:
    double salary;

    Teacher(string n, int a, double s) : Person(n, a) {
        salary = s;
    }
};

// Hybrid Inheritance (TA inherits from both Student & Teacher)
class TA : public Student, public Teacher {
public:
    string subject;

    TA(string n, int a, int r, double s, string sub) 
        : Student(n, a, r), Teacher(n, a, s) {
        subject = sub;
    }

    void display() {
        cout << "Name: " << Student::name << endl;  // Resolving ambiguity
        cout << "Age: " << Student::age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Salary: " << salary << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    TA ta("Farjaz", 25, 123, 50000.0, "Computer Science");
    ta.display();

    return 0;
}
