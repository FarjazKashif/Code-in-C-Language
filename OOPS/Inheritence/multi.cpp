#include <iostream>
#include <string.h>

using namespace std;

class Person {
public:
    string name;

    Person(string n) {
        this -> name = n;
    }
};

class Student : public Person {
public:
    int id;

    Student(string n, int id) : Person(n) {
        this ->id = id;
    }
};

class Teacher: public Student {
public:
    double salary;

    Teacher(string n, int id, double s) : Student(n, id) {
        this -> salary = s;
    }

    void displayInfo() {
        cout << name << endl;
        cout << id << endl;
        cout << salary << endl;
    }
};

int main() {
    Teacher t1("Farjaz", 123, 1234);
    t1.displayInfo();

    return 0;
}