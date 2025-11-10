#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string str;

public:
    
    MyString(string s = "") {
        str = s;
    }

    
    MyString operator+(const MyString &s) {
        MyString temp;
        temp.str = str + s.str; // Concatenate using built-in string +
        return temp;
    }

    
    void display() const {
        cout << str;
    }
};

 
int main() {
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    MyString str1(s1);
    MyString str2(s2);

    MyString result = str1 + str2; // Calls overloaded + operator

    cout << "\nConcatenated String: ";
    result.display();

    cout << endl;
    return 0;
}
