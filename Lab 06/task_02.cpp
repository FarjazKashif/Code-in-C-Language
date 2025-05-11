#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inch;

public:
    Distance() : feet(0), inch(0) {}
    Distance(int a, float b) : feet(a), inch(b) {}
    Distance(Distance &c) : feet(c.feet), inch(c.inch) {}
    void display()
    {
        cout << "Distance is " << feet << "\'" << inch << "\"" << endl;
    }
    void setvalue()
    {
        int a;
        float b;
        cout << "Enter feet: ";
        cin >> a;
        cout << "Enter inches: ";
        cin >> b;
        feet = a;
        inch = b;
    }
    void operator+=(const Distance &c)
    {
        feet += c.feet;
        inch += c.inch;
        if (inch > 12)
        {
            inch -= 12;
            feet++;
        }
    }
};
int main()
{
    Distance c1(8, 5.9);
    Distance c2;
    c2.setvalue();
    c1.display();
    c2.display();
    c2 += c1;
    cout << "Added ";
    c2.display();
    return 0;
}
