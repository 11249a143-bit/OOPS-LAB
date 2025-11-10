#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    
    Complex(float r = 0.0, float i = 0.0) {
        real = r;
        imag = i;
    }

   
    Complex operator+(const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};


int main() {
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    Complex sum = c1 + c2; // Calls overloaded + operator

    cout << "\nSum of Complex Numbers = ";
    sum.display();

    return 0;
}
