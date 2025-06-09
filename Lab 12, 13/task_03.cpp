#include <iostream>
#include <stdexcept> // runtime error
using namespace std;

// Function to validate marks
void validateMarks(int marks) {
    if (marks < 0 || marks > 100) {
        throw runtime_error("Invalid input: Marks should be between 0 and 100");
    }
}

int main() {
    int marks;

    cout << "Enter marks for the subject (0 to 100): ";
    cin >> marks;

    try {
        validateMarks(marks);
        cout << "Marks entered: " << marks << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
