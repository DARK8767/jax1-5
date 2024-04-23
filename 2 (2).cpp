// Q2. A book (ISBN) and CD (data capacity) are both types of media (id, title) objects. A person buys
// 10 media items each of which can be either book or CD. Display the list of all books and CD’s
// bought. Define the classes and appropriate member functions to accept and display data. Use
// pointers and concept of polymorphism (Virtual Function)
#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    int id;
    string title;
public:
    virtual void acceptData() = 0;
    virtual void displayData() = 0;
};

class Book : public Media {
private:
    string ISBN;
public:
    void acceptData() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Book ISBN: ";
        getline(cin, ISBN);
    }
    void displayData() {
        cout << "Book ID: " << id << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book ISBN: " << ISBN << endl;
    }
};

class CD : public Media {
private:
    int dataCapacity;
public:
    void acceptData() {
        cout << "Enter CD ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter CD Title: ";
        getline(cin, title);
        cout << "Enter Data Capacity: ";
        cin >> dataCapacity;
    }
    void displayData() {
        cout << "CD ID: " << id << endl;
        cout << "CD Title: " << title << endl;
        cout << "Data Capacity: " << dataCapacity << " MB" << endl;
    }
};

int main() {
    Media *m[10];
    int i;
    for (i = 0; i < 10; i++) {
        char choice;
        cout << "Enter type of Media (B for Book, C for CD): ";
        cin >> choice;
        if (choice == 'B') {
            m[i] = new Book;
        }
        else if (choice == 'C') {
            m[i] = new CD;
        }
        m[i]->acceptData();
    }

    cout << "List of all Books bought:" << endl;
    for (i = 0; i < 10; i++) {
        Book *b = dynamic_cast<Book *>(m[i]);
        if (b != NULL) {
            b->displayData();
        }
    }

    cout << "List of all CDs bought:" << endl;
    for (i = 0; i < 10; i++) {
        CD *c = dynamic_cast<CD *>(m[i]);
        if (c != NULL) {
            c->displayData();
        }
    }

    return 0;
}
