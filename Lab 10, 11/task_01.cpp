#include <iostream>
#include <math.h>

using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload +
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload *
    Complex operator*(const Complex& other) const {
        float r = (real * other.real) - (imag * other.imag);
        float i = (real * other.imag) + (imag * other.real);
        return Complex(r, i);
    }

    // Display
    void display() const {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }
};

int main() {
    Complex c1(3, 2);     // 3 + 2i
    Complex c2(1, 7);     // 1 + 7i

    Complex sum = c1 + c2;
    Complex product = c1 * c2;

    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();

    cout << "\nSum (c1 + c2) = "; sum.display();
    cout << "Product (c1 * c2) = "; product.display();

    return 0;
}
