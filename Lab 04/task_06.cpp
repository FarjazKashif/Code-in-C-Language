#include <iostream>
using namespace std;

/*
Create a class called Ship that includes a ship’s serial number and location. Each ship object
should be assigned a unique serial number as it is created. Use a separate Angle class to
represent the ship’s latitude and longitude. A member function of the Ship class should
allow the user to input the ship’s position, and another function should display the serial number along with the position. Write a main() program that creates three ships, takes user 
input for their positions, and then displays each ship’s number and location.
*/

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    void getInput() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N/S/E/W): ";
        cin >> direction;
    }

    void display() const {
        cout << degrees << "°" << minutes << "' " << direction;
    }
};

class Ship {
private:
    static int counter;
    int serialNumber;
    Angle latitude, longitude;

public:
    Ship() {
        serialNumber = ++counter;
    }

    void setLocation() {
        cout << "Enter latitude for Ship " << serialNumber << ":\n";
        latitude.getInput();
        cout << "Enter longitude for Ship " << serialNumber << ":\n";
        longitude.getInput();
    }

    void display() const {
        cout << "Ship Serial Number: " << serialNumber << "\n";
        cout << "Latitude: "; latitude.display();
        cout << "\nLongitude: "; longitude.display();
        cout << "\n----------------------\n";
    }
};

int Ship::counter = 0;

int main() {
    const int numShips = 3;
    Ship ships[numShips];

    for (int i = 0; i < numShips; i++) {
        ships[i].setLocation();
    }

    cout << "\nShip Details:\n";
    for (int i = 0; i < numShips; i++) {
        ships[i].display();
    }

    return 0;
}