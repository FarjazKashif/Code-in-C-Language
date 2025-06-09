#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overload > operator
    bool operator>(const Date& other) const {
        if (year > other.year)
            return true;
        else if (year == other.year && month > other.month)
            return true;
        else if (year == other.year && month == other.month && day > other.day)
            return true;
        return false;
    }

    // Overload == operator
    bool operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }

    void display() const {
        cout << day << "/" << month << "/" << year;
    }
};

int main() {
    Date date1(15, 5, 2025);
    Date date2(10, 6, 2025);

    cout << "Date 1: ";
    date1.display();
    cout << "\nDate 2: ";
    date2.display();
    cout << "\n\n";

    if (date1 > date2)
        cout << "Date 1 is later than Date 2\n";
    else if (date1 == date2)
        cout << "Both dates are the same\n";
    else
        cout << "Date 1 is earlier than Date 2\n";

    return 0;
}
