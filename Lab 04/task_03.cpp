#include <iostream>
using namespace std;

/*
Create an employee class, basing it on previous lab 3. The member data should comprise
an int for storing the employee number and a float for storing the employee’s
compensation. Member functions should allow the user to enter this data and display it.
Write a main() that allows the user to enter data for three employees and display it.
*/

class Employee {
private:
    int empNumber;
    float compensation;

public:
    void getData() {
        cout << "Enter Employee Number: ";
        cin >> empNumber;
        cout << "Enter Compensation: ";
        cin >> compensation;
    }

    void display() const {
        cout << "Employee Number: " << empNumber << " | Compensation: $";
        int dollars = compensation;
        int cents = (int)((compensation - dollars) * 100);
        cout << dollars << "." << ((cents) < 10 ? "0" : "") << cents << endl;
    }
};

int main() {
    const int numEmployees = 3;
    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter details for Employee " << i + 1 << ":\n";
        employees[i].getData();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < numEmployees; i++) {
        employees[i].display();
    }

    return 0;
}
