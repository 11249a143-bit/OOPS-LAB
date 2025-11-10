#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;

public:
    
    Book(string t = "", double p = 0.0) {
        title = t;
        price = p;
    }

    
    Book& operator=(const Book &b) {
        
        if (this != &b) {
            title = b.title;
            price = b.price;
        }
        cout << "Assignment operator called!" << endl;
        return *this;  
    }

    
    void display() const {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};

 
int main() {
    
    Book b1("C++ Programming", 49.99);
    Book b2("Data Structures", 59.99);

    cout << "Before assignment:" << endl;
    cout << "Book 1 -> "; b1.display();
    cout << "Book 2 -> "; b2.display();

    
    b2 = b1;

    cout << "\nAfter assignment:" << endl;
    cout << "Book 1 -> "; b1.display();
    cout << "Book 2 -> "; b2.display();

    return 0;
}
