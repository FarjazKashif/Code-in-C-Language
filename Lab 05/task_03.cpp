#include <iostream>
using namespace std;

/*
An online learning platform wants a course enrollment system where each course has a name,
course ID, and enrollment fee. The system should also maintain the total number of available
courses.To implement this, create a Course class with private attributes for course name, course
ID, and fee. Provide setters and getters to manage course modifications. Use a static data member
to track the total number of courses available. The program should demonstrate students enrolling
in courses and displaying course availability.
*/

class Course {
private:
    string name;
    int course_id;
    float fee;
    static int totalCourses;

public:
    Course(string name, int id, float fee) { this->name = name; this->course_id = id; this->fee = fee; totalCourses++;}

    void setName(string n) {
        this->name = n;
    }

    string getName() {
        return this->name;
    }

    void displayCourse() {
        cout << "Course: " << this->name << endl;
    }

    static int getTotalCourses() {
        return totalCourses;
    }
};

int Course::totalCourses = 0;

int main() {
    Course c1("OOPS", 1, 200.0), c2("DSA", 2, 300), c3("Algorithms", 3, 400.0);
    cout << "Total No. of Courses: " << Course::getTotalCourses() << endl;
    return 0;
}