Aim:
     To implement  single inheritance using base and derived classes.
Algorithm:
    1. Create a class Person with name and age.
    2. Derive class Teacher with subject and salary.
    3. Use base and derived class member functions to input and display data.
    4. Create object and call functions.
Program:
    #include <iostream>
    using namespace std;
    class Person {
    protected:
     string name;
     int age;
    public:
     void getData() {
     cout << "Enter name and age: ";
     cin >> name >> age;
     }
     void display() {
     cout << "Name: " << name << ", Age: " << age << endl;
     }
    };
    class Teacher : public Person {
     string subject;
     float salary;
    public:
     void getTeacherData() {
     getData();
     cout << "Enter subject and salary: ";
     cin >> subject >> salary;
     }
     void displayTeacher() {
     display();
     cout << "Subject: " << subject << ", Salary: " << salary << endl;
     }
    };
    int main() {
     Teacher t;
     t.getTeacherData();
     t.displayTeacher();
     return 0;
    }
    
