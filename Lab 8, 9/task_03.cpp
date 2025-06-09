/*
Design a UML class diagram for a car system that includes its major components. A Car
is made up of an Engine, multiple Wheels, and Seats. The Engine contains multiple
Cylinders, and each Wheel has a Tire. Define the appropriate relationships between these
components. For example, consider how the Car is related to its Engine, how the Engine
is linked with its Cylinders, and how Wheels relate to Tires. Each class should include
relevant attributes: the Car should have attributes like model, make, and year; the Engine
should include engineNumber and horsePower; the Cylinder should have diameter and
material; each Wheel should have size and type; the Tire should include brand and
treadDepth; and the Seat should have material and isHeated. Identify and apply the
correct types of relationships (association, aggregation, or composition) where appropriate.
Finally, draw the UML class diagram showing the classes, their attributes, and the
relationships among them.
*/

#include <iostream>
#include <vector>
using namespace std;

class Cylinder
{
public:
    float diameter;
    string material;
    Cylinder(float d, string m) : diameter(d), material(m) {}
};

class Engine
{
public:
    string engineNumber;
    int horsePower;
    vector<Cylinder> cylinders;
    Engine(string num, int hp) : engineNumber(num), horsePower(hp) {}
};

class Tire
{
public:
    string brand;
    float treadDepth;
    Tire(string b, float td) : brand(b), treadDepth(td) {}
};

class Wheel
{
public:
    int size;
    string type;
    Tire tire;
    Wheel(int s, string t, Tire ti) : size(s), type(t), tire(ti) {}
};

class Seat
{
public:
    string material;
    bool isHeated;
    Seat(string m, bool h) : material(m), isHeated(h) {}
};

class Car
{
public:
    string model, make;
    int year;
    Engine engine;
    vector<Wheel> wheels;
    vector<Seat> seats;

    Car(string mo, string ma, int y, Engine e) : model(mo), make(ma), year(y), engine(e) {}
};
