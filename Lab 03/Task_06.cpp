#include <iostream>

using namespace std;

struct Distance {
    int feet;
    float inches;
};

struct Room {
    Distance length;
    Distance width;
};

int main() {
    Room r;
    r.length.feet = 12;
    r.length.inches = 10.0;

    r.width.feet = 10;
    r.width.inches = 8.0;

    float totalLen, totalW;
    totalLen = r.length.feet + (r.length.inches/12.0);
    totalW = r.width.feet + (r.width.inches/12.0);

    cout << "Area in Sq: " << totalLen * totalW;

    return 0;
}