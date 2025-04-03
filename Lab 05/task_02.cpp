#include <iostream>
using namespace std;

/*
Consider a smart home system that tracks energy consumption for various appliances like
refrigerators, air conditioners, and washing machines. Each appliance has a power rating (watts)
and usage time (hours per day). The system should compare two appliances and determine which
one consumes more energy daily.
*/

class Appliance {
private:
    string name;
    int rating;
    int time;

public:
    
    void setName(string n) { name = n; }
    void setRating(int r) { rating = r; }
    void setTime(int t) { time = t; }

    
    string getName() { return name; }
    int getRating() { return rating; }
    int getTime() { return time; }

    
    int dailyEnergyConsumption() {
        return rating * time;
    }

    
    static void compare(Appliance a1, Appliance a2) {
        int energyA1 = a1.dailyEnergyConsumption();
        int energyA2 = a2.dailyEnergyConsumption();

        if (energyA1 > energyA2) {
            cout << a1.getName() << " consumes more energy daily!" << endl;
        } else if (energyA2 > energyA1) {
            cout << a2.getName() << " consumes more energy daily!" << endl;
        } else {
            cout << "Both appliances consume equal energy daily!" << endl;
        }
    }
};

int main() {
    Appliance a1, a2;

    
    a1.setName("Refrigerator");
    a1.setRating(2000);
    a1.setTime(5);

    
    a2.setName("Washing Machine");
    a2.setRating(1500);
    a2.setTime(2);

    Appliance::compare(a1, a2);

    return 0;
}
