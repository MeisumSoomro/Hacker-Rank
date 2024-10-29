#include <iostream>
#include <string>
using namespace std;

// Abstract Book class (provided by HackerRank)
class Book {
protected:
    string title;
    string author;
    
public:
    Book(string t, string a) {
        title = t;
        author = a;
    }
    
    virtual void display() = 0;
};

// Write MyBook class
class MyBook : public Book {
private:
    int price;
    
public:
    // Constructor
    MyBook(string title, string author, int price) : Book(title, author) {
        this->price = price;
    }
    
    // Implement the pure virtual display() method
    void display() override {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    string title, author;
    int price;
    
    // Read input
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    
    // Create MyBook object
    MyBook novel(title, author, price);
    
    // Call display()
    novel.display();
    
    return 0;
}
