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
    int rollNo;

    Student(string n, int rollNo) : Person(name) {
        this -> name = n;
        this -> rollNo = rollNo;
    }
};

int main() {
    Student s1("Farjaz", 123);
    // cout << s1 << endl;
    cout << s1.name << endl;
    cout << s1.rollNo << endl;
    return 0;
}