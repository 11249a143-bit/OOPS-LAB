#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    string company;
    float price;

    void display()
    {
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    
    Car car1, car2, car3;

    
    car1.company = "Toyota";
    car1.model = "innova";
    car1.price = 1800000.50;

    
    car2.company = "Honda";
    car2.model = "City";
    car2.price = 2000000.75;

    
    car3.company = "Hyundai";
    car3.model = "i20";
    car3.price = 1500000.25;

   
    cout << "---- Car Showroom Details ----" << endl;
    car1.display();
    car2.display();
    car3.display();

    return 0;
}
