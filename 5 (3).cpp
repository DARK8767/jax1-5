// or Q2.Create a class Book containing Book_name, author and Price as a data member and write
// necessary member functions for the following (use function overloading).
// a. To Accept and display the Book Information.
// b. Display book details of a given author
// c. Display book details of specific price
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string Book_name, author;
    float Price;
public:
    void accept() {
        cout << "Enter book name: ";
        cin >> Book_name;
        cout << "Enter author name: ";
        cin >> author;
        cout << "Enter price: ";
        cin >> Price;
    }
    void display() {
        cout << "Book name: " << Book_name << endl;
        cout << "Author name: " << author << endl;
        cout << "Price: " << Price << endl;
    }
    void display_by_author(string author_name) {
        if (author == author_name) {
            display();
        }
    }
    void display_by_price(float price) {
        if (Price == price) {
            display();
        }
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    Book *books = new Book[n];
    for (int i=0; i<n; i++) {
        cout << "Enter details of book " << i+1 << endl;
        books[i].accept();
    }
    cout << endl;
    cout << "All books information:" << endl;
    for (int i=0; i<n; i++) {
        books[i].display();
        cout << endl;
    }
    string author_name;
    cout << "Enter author name to display books by author: ";
    cin >> author_name;
    cout << "Books by author " << author_name << ":" << endl;
    for (int i=0; i<n; i++) {
        books[i].display_by_author(author_name);
    }
    float price;
    cout << "Enter price to display books by price: ";
    cin >> price;
    cout << "Books with price " << price << ":" << endl;
    for (int i=0; i<n; i++) {
        books[i].display_by_price(price);
    }
    return 0;
}
