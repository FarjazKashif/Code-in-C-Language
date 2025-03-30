#include <iostream>
#include <conio.h>
using namespace std;

/*
Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps track
of the number of cars that have gone by, and of the total amount of money collected. Model
this tollbooth with a class called tollBooth. The two data items are a type unsigned int to
hold the total number of cars, and a type double to hold the total amount of money
collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const. Include a program to test this class. This program should allow the user to
push one key to count a paying car, and another to count a nonpaying car. Pushing the Esc
key should cause the program to print out the total cars and total cash and then exit.
*/

class toolBooth {
private:
    unsigned int cars;
    double amount;
public:
    toolBooth() : cars(0), amount(0) {}

    void payingCar() {
        cars++;
        amount+=0.50;
    }

    void nopayCar() {
        cars++;
    }

    void display() {
        cout << "Cars: " << cars << endl;
        cout << "Amount: " << amount << endl;
    }


};

int main() {
    toolBooth t1;
    char ch;
    cout << "Press 'P' for a paying car, 'N' for a non-paying car, and ESC to exit.\n";

    while (true) {
        ch = _getch();  // capture keypress

        if (ch == 27) {  // esc key (ASCII 27) to exit
            t1.display();
            break;
        } else if (ch == 'p' || ch == 'P') {
            t1.payingCar();
            cout << "Paying car counted!\n";
        } else if (ch == 'n' || ch == 'N') {
            t1.nopayCar();
            cout << "Non-paying car counted!\n";
        }
    }
    return 0;
}