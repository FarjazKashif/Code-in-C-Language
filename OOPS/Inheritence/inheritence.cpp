#include <iostream>
#include <string>

using namespace std;

// Types of Inheritence
/*
1. Single Inheritence -> Parent to Child
2. Multi Inheritence -> Parent -> Parent -> Child
3. Hierarchical Inheritance -> Parent 1 -> Child && Parent 2 -> Child
4. Hybrid Inheritence -> Parent -> Parent -> Child -> Child -> Mix up
*/

// Destructor
/*
1. Delete the consuming memory when Program is finished.
2. delete variable_name; -> Delete the memory where variable name is pointing.
*/

class Student {
public:
    string name;
    float cgpa;

    // parameterized Constructor
    Student(string n, float g) {
        this -> name = n;   
        this -> cgpa = g;   
        
        cout << "This is Parent Constructor.." << endl;
    }

    // Destructor -> Opposite of Constructor
    // ~Student() {
    //     // Static Memory Deletion
    //     cout << "This is Destructor..\n";

    //     // Dynamic Memory Deletion
    //     delete name; // This means delete memory where name is pointing
    //     delete cgpa;
    // }

    void display() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

class Person : public Student {
public:
    int rollNo;

    // Since Student has a parameterized constructor, we must explicitly call it when inheriting.
    Person(string a, int b, int c) : Student(a, b) {
        this ->rollNo = c;

        cout << "This is Child Constructor.." << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Roll No.: " << rollNo << endl;
    }
};

int main() {
    Person s1("Hello", 10.7, 10);
    s1.display();
    
    return 0;
}