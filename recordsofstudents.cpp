#include <iostream>
using namespace std;

class Student {
    string name;
    int roll_no;
    int marks;

public:
    
    Student(string n, int r, int m) {
        name = n;
        roll_no = r;
        marks = m;
    }

    
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    
    Student student1("raj", 1, 85);
    Student student2("divya", 2, 90);
    Student student3("kumar", 3, 78);

    
    student1.displayDetails();
    student2.displayDetails();
    student3.displayDetails();

    return 0;
}
