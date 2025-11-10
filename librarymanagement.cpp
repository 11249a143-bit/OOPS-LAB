#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    
    Book() {
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
        cout << "Default constructor called." << endl;
    }

    
    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
        cout << "Parameterized constructor called." << endl;
    }

    
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
        cout << "Copy constructor called." << endl;
    }

    
    void display() const {
        cout << "\nBook Details:\n";
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : $" << price << endl;
    }
};


int main() {
    
    Book book1;
    book1.display();

    
    Book book2("The C++ Programming Language", "Bjarne Stroustrup", 59.99);
    book2.display();

    
    Book book3 = book2;
    book3.display();

    return 0;
}
