#include <iostream>
#include <string>

using namespace std;

class Teacher {
private:
    double salary;

public:
    // attributes/properties
    string name;
    string dept;
    string subject;
    
    // Countructor
    /*
    1. non-parameterized -> which has no parameter
    2. parameterized -> which has parameters
    3. copy
    4. Should be same as class name
    */

    Teacher() {
        dept = "Computer Science";
    }

    Teacher(string name, string dept, string subject, double salary) {
        // name = name; // Issue for compiler to understand which one
        (*this).name = name; // Now this is meant to be object
        this -> dept = dept;
        this -> subject = subject;
        this -> salary = salary;

        cout << name << endl;
        cout << dept << endl;
        cout << subject << endl;
        cout << salary << endl;
    }

    // methods / member calling
    // getter
    void setSalary(double s) {
        salary = s;
    }

    // setter
    double getSalary() {
        return salary;
    }
};

int main() {
    // Objects
    // Teacher t1;
    // t1.name = "Farjaz";
    // t1.subject = "C++";
    // t1.setSalary(25000);

    Teacher("Farjaz", "CS", "C++", 25000);
    // cout << t1.name << endl;
    // cout << t1.subject << endl;
    // cout << t1.getSalary() << endl;

    return 0;
}