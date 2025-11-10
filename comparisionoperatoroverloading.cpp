#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:

    Rectangle(double l = 0.0, double w = 0.0) {
        length = l;
        width = w;
    }

    
    double area() const {
        return length * width;
    }

    
    bool operator>(const Rectangle &r) const {
        return this->area() > r.area();
    }


    void display() const {
        cout << "Rectangle (Length: " << length << ", Width: " << width << ")" << endl;
    }
};


int main() {
    double l1, w1, l2, w2;

    cout << "Enter length and width of first rectangle: ";
    cin >> l1 >> w1;

    cout << "Enter length and width of second rectangle: ";
    cin >> l2 >> w2;

    Rectangle r1(l1, w1);
    Rectangle r2(l2, w2);

    cout << "\nFirst ";
    r1.display();
    cout << "Second ";
    r2.display();

    if (r1 > r2) {
        cout << "\nThe first rectangle has a greater area." << endl;
    } else {
        cout << "\nThe second rectangle has a greater area." << endl;
    }

    return 0;
}
