#include <iostream>
using namespace std;

/*
Create a class called time that has separate int member data for minutes, minutes, and seconds.
One constructor should initialize this data to 0, and another should initialize it to fixed
values. Another member function should display it, in 11:59:59 format. The final member
function should add two objects of type time passed as arguments. A main() program
should create two initialized time objects (should they be const?) and one that isn’t
initialized. Then it should add the two initialized values together, leaving the result in the
third time variable. Finally it should display the value of this third variable. Make
appropriate member functions const.
*/

class time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    time() : hours(0), minutes(0), seconds(0) {} // Default
    time(int hrs, int min, int sec) : hours(hrs), minutes(min), seconds(sec) {} // Parameterized

    void display() const {
        cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
    }

    void addTime(time, time);
};

void time::addTime(time t1, time t2) {
    hours = t1.hours + t2.hours;
    minutes = t1.minutes + t2.minutes;
    seconds = t1.seconds + t2.seconds;

    if (seconds >= 60) {
        minutes += seconds / 60;
        seconds %= 60;
    }
    if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
    }
    hours %= 24; // it's bcz tracking hours in 24-format cause the days aren't mention in the 
}

int main() {
    time t1(12, 20, 40), t2(24, 10, 25), t3(6, 3, 60);
    t1.display();
    t2.display();
    t3.display();

    cout << "=================" << endl;

    t1.addTime(t2, t3);
    t1.display();

    return 0;
}