/*
A company has employees and departments. Departments are managed by employees, and
employees can work in multiple departments. Employees have a unique ID and
name. Departments have a name and a location. Draw a class diagram showing the
relationships between these classes. What type of relationship should be used
between Employee and Department?
*/
#include <iostream>
#include <vector>
using namespace std;

class Department;

class Employee {
public:
    int id;
    string name;
    vector<Department*> departments;
    Employee(int i, string n) : id(i), name(n) {}
};

class Department {
public:
    string name, location;
    Employee* manager;
    Department(string n, string loc, Employee* m) : name(n), location(loc), manager(m) {}
};
