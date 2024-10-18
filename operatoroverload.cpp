#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor
    Complex() : real(0), imag(0) {}

    Complex(float r, float i) : real(r), imag(i) {}

    // Operator overloading for +
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Operator overloading for <<
    friend ostream &operator<<(ostream &out, const Complex &c)
    {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main()
{
    Complex c1(3.2, 4.5), c2(1.1, 2.3);
    Complex c3 = c1 + c2; // Using overloaded + operator

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "Sum (c1 + c2): " << c3 << endl;

    return 0;
}
