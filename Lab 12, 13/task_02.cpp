#include <iostream>
using namespace std;

// Base class
class SmartDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~SmartDevice() {}
};

// Derived class for Smart Light
class SmartLight : public SmartDevice {
public:
    void turnOn() override {
        cout << "Smart Light is turned ON.\n";
    }

    void turnOff() override {
        cout << "Smart Light is turned OFF.\n";
    }
};

// Derived class for Smart Fan
class SmartFan : public SmartDevice {
public:
    void turnOn() override {
        cout << "Smart Fan is spinning now.\n";
    }

    void turnOff() override {
        cout << "Smart Fan is stopped.\n";
    }
};

// Simulate user interaction
int main() {
    SmartDevice* device;

    SmartLight light;
    SmartFan fan;

    // Control the light
    device = &light;
    device->turnOn();
    device->turnOff();

    cout << endl;

    // Control the fan
    device = &fan;
    device->turnOn();
    device->turnOff();

    return 0;
}
