#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
   
    Temperature(float c = 0.0) {
        celsius = c;
    }

    
    void displayCelsius() const {
        cout << "Temperature in Celsius: " << celsius << "°C" << endl;
    }

    
    void operator-() {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        cout << "Converted Temperature: " << fahrenheit << "°F" << endl;
    }
};

 
int main() {
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    Temperature t1(c);
    t1.displayCelsius();

    cout << "\nUsing unary '-' operator to convert to Fahrenheit..." << endl;
    -t1; 

    return 0;
}
