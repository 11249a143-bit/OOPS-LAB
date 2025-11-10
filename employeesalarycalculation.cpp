#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    double salary;
    double bonus;

public:
    
    Employee(int id = 0, string n = "Unknown", double s = 0.0) {
        empID = id;
        name = n;
        salary = s;
        bonus = 0.0; // Initialize bonus
    }

    
    void calculateBonus(double percentage = 10.0) {
       
        bonus = (salary * percentage) / 100;
    }

   
    void display() const {
        cout << "\nEmployee Details:" << endl;
        cout << "ID       : " << empID << endl;
        cout << "Name     : " << name << endl;
        cout << "Salary   : $" << salary << endl;
        cout << "Bonus    : $" << bonus << endl;
        cout << "Total Pay: $" << salary + bonus << endl;
    }
};


int main() {
    
    Employee e1;
    e1.calculateBonus(); 
    e1.display();

   
    Employee e2(101, "Alice Johnson", 50000);
    e2.calculateBonus(15.0); 
    e2.display();

    
    Employee e3(102, "Bob Smith");
    e3.calculateBonus(); 
    e3.display();

    return 0;
}
