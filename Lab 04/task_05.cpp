#include <iostream>
using namespace std;

/*
A company developing a GPS tracking system needs to calculate the total distance between
two points. Define a class Distance with attributes for feet and inches. Implement a
member function outside the class that takes a Distance object and adds it to return
the total distance. Create a program that demonstrates adding two Distance objects.
*/

class Distance {
private:
    int feet, inches;
public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, int i) : feet(f), inches(i) {}

    Distance ADD(const Distance&);
    void display() const;
};

Distance Distance::ADD(const Distance& d) {
    Distance result;
    result.feet = feet + d.feet;
    result.inches = inches + d.inches;

    return result;
}

void Distance::display() const {
    cout << "Total Distance: " << feet << " feet " << inches << " inches." << endl;
}

int main() {
    Distance d1(20, 30), d2(10, 80);
    Distance d3 = d1.ADD(d2);
    d3.display();
    return 0;
}
