#include <iostream>
#include <stdexcept>
using namespace std;

void checkEligibility(int age) {
    if (age < 18) {
        throw runtime_error("Age is below 18. Not eligible for license.");
    }
    cout << "Eligible for driving license!" << endl;
}

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        checkEligibility(age);
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
