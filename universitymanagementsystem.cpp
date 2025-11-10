#include <iostream>
#include <string>
using namespace std;

class University {
private:
    string universityName;
    string departmentName;
    string facultyName;

public:
    
    University(string uName, string dName, string fName) {
        universityName = uName;
        departmentName = dName;
        facultyName = fName;

        cout << "Constructor called: University object created.\n";
    }

    
    void displayInfo() const {
        cout << "\n=== University Information ===" << endl;
        cout << "University : " << universityName << endl;
        cout << "Department : " << departmentName << endl;
        cout << "Faculty    : " << facultyName << endl;
    }

    
    ~University() {
        cout << "\nDestructor called: Cleaning up University object for " 
             << universityName << "." << endl;
    }
};


int main() {
    cout << "Creating University object..." << endl;
    {
        
        University u1("Greenfield University", "Computer Science", "Engineering Faculty");
        u1.displayInfo();
    } 

    cout << "\nProgram finished.\n";
    return 0;
}
