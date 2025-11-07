#include <iostream>
using namespace std;

class Book
{
public:
    string title;
    string author;
    float price;

    
    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    
    Book b1, b2;

    
    b1.title = "c++ program";
    b1.author = "B.J";
    b1.price = 750.50;

    
    b2.title = "OS";
    b2.author = "Mark allen";
    b2.price = 600.75;

    
    cout << "---- Library Book Details ----" << endl;
    b1.display();
    b2.display();

    return 0;
}
