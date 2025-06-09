#include <iostream>
using namespace std;

// Base class
class Transport {
public:
    virtual float calculateFare(int distance) = 0;
    virtual ~Transport() {}
};

// Derived class: Bus
class Bus : public Transport {
public:
    float calculateFare(int distance) override {
        return distance * 1.5;
    }
};

class Taxi : public Transport {
public:
    float calculateFare(int distance) override {
        return 100 + (distance * 5);
    }
};

int main() {
    int distance;
    cout << "Enter travel distance in km: ";
    cin >> distance;

    Transport* vehicle;

    // Bus Fare
    Bus bus;
    vehicle = &bus;
    cout << "Bus Fare: Rs. " << vehicle->calculateFare(distance) << endl;

    // Taxi Fare
    Taxi taxi;
    vehicle = &taxi;
    cout << "Taxi Fare: Rs. " << vehicle->calculateFare(distance) << endl;

    return 0;
}
