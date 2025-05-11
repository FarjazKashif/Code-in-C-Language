#include <iostream>
using namespace std;
class Rectangle
{
private:
    int width;
    int length;
    int area;

public:
    Rectangle() : width(0), length(0), area(0) {}
    Rectangle(int a, int b) : width(a), length(b), area(a * b) {}
    Rectangle(Rectangle &c) : width(c.width), length(c.length), area(c.area) {}
    void display()
    {
        cout << "Area of Rectangle is " << area << endl;
    }
    void setvalue(int a, int b)
    {
        width = a;
        length = b;
        area = a * b;
    }
    Rectangle operator+(const Rectangle &c)
    {
        Rectangle temp;
        temp.width = width + c.width;
        temp.length = length + c.length;
        temp.area = area + c.area;
        return temp;
    }
};
int main()
{
    Rectangle c1(2, 5);
    Rectangle c2(4, 6);
    c1.display();
    c2.display();
    Rectangle c3 = c1 + c2;
    c3.display();
    return 0;
}