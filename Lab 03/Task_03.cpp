#include <iostream>

/*
Create a structure called time. Its three members, all type int, should be called hours,
minutes, and seconds. Write a program that prompts the user to enter a time value in hours,
minutes, and seconds. This can be in 12:59:59 format, or each number can be entered at a
separate prompt (“Enter hours:”, and so forth). The program should then store the time in
a variable of type struct time, and finally print out the total number of seconds represented
by this time value:
long totalsecs = t1.hours*3600 + t1.minutes*60 + t1.seconds
*/

using namespace std;

struct Time {
    int h;
    int m;
    int s;
};

int main() {
    Time t;
    long totalSecs;
    cout << "Enter Time in (hours:minutes:seconds): "; cin >> t.h >> t.m >> t.s;
    totalSecs = t.h*3600 + t.m*60 + t.s;

    cout << "Total Seconds: " << totalSecs;

    return 0;
}
