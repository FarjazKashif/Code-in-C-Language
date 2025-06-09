/*
Create a system where a student can register for a course using simple methods like
registerCourse() without seeing internal checks like seat availability, instructor
assignment, etc.
 Define a base class Course with a method registerCourse().
 Implement derived classes like MathCourse, ProgrammingCourse, etc., that
override registerCourse().
 Hide the internal logic like validation of pre-requisites and capacity limits inside
these classes.
*/

#include <iostream>
#include <string>

using namespace std;

class Course {
public:
    virtual void registerCourse() = 0;
};

class MathCourse : public Course {
public:
    void registerCourse() {
        cout << "Maths course has been registered!" << endl;
    }
};

class ProgrammingCourse : public Course {
public:
    void registerCourse() {
        cout << "Programming course has been registered!" << endl;
    }
};

int main() {
    Course *c1 = new MathCourse();
    Course *c2 = new ProgrammingCourse();

    c1->registerCourse();
    c2->registerCourse();
    return 0;
}