#include <iostream>

using namespace std;

struct Employee {
    int num;
    float com;
};

void displayInfo(Employee employees[], int size);

int main() {
    const int EMP_COUNT = 3;
    Employee employees[EMP_COUNT];

    cout << "Fill the data for 3 employees:\n";

    for (int i = 0; i < EMP_COUNT; i++) {
        cout << "Employee " << i + 1 << " (number) (compensation): ";
        cin >> employees[i].num >> employees[i].com;
    }

    displayInfo(employees, EMP_COUNT);
    return 0;
}

void displayInfo(Employee employees[], int size) {
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "Employee " << i + 1 << " - Number: " << employees[i].num
             << ", Compensation: $" << employees[i].com << endl;
    }
}
