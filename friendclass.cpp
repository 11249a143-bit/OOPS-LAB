#include <iostream>
using namespace std;


class Result;

class Student {
private:
    int mark1, mark2, mark3;

public:
    
    Student(int m1, int m2, int m3) {
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }

    
    friend class Result;
};

class Result {
public:
   
    void calculateAverage(Student s) {
        double average = (s.mark1 + s.mark2 + s.mark3) / 3.0;
        cout << "\n=== Student Result ===" << endl;
        cout << "Marks: " << s.mark1 << ", " << s.mark2 << ", " << s.mark3 << endl;
        cout << "Average Marks: " << average << endl;

        if (average >= 50)
            cout << "Status: Pass" << endl;
        else
            cout << "Status: Fail" << endl;
    }
};


int main() {
    int m1, m2, m3;

    cout << "Enter marks in 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    Student s1(m1, m2, m3);
    Result r1;

    r1.calculateAverage(s1);

    return 0;
}
