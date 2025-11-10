#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    
    Person(string n = "", int a = 0) {
        name = n;
        age = a;
    }

    
    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    
    Teacher(string n, int a, string sub, double sal) : Person(n, a) {
        subject = sub;
        salary = sal;
    }

    
    void displayTeacher() const {
        displayPerson();  
        cout << "Subject: " << subject << ", Salary: $" << salary << endl;
    }
};


int main() {
    string name, subject;
    int age;
    double salary;

    cout << "Enter teacher's name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); 
    cout << "Enter subject: ";
    getline(cin, subject);
    cout << "Enter salary: ";
    cin >> salary;

    Teacher t1(name, age, subject, salary);

    cout << "\n--- Teacher Details ---" << endl;
    t1.displayTeacher();

    return 0;
}
