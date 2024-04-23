// Q2.Write a C++ program with Student as abstract class and create derive classes Engineering,
// Medicine and Science having data member rollno and name from base class Student. Create
// objects of the derived classes and access them using array of pointer of base class Student.
#include <iostream>
#include <string>

using namespace std;

// Abstract base class
class Student {
protected:
    int rollno;
    string name;

public:
    virtual void display() = 0;
};

// Derived class Engineering
class Engineering : public Student {
public:
    Engineering(int rollno, string name) {
        this->rollno = rollno;
        this->name = name;
    }

    void display() {
        cout << "Engineering Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

// Derived class Medicine
class Medicine : public Student {
public:
    Medicine(int rollno, string name) {
        this->rollno = rollno;
        this->name = name;
    }

    void display() {
        cout << "Medicine Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

// Derived class Science
class Science : public Student {
public:
    Science(int rollno, string name) {
        this->rollno = rollno;
        this->name = name;
    }

    void display() {
        cout << "Science Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

int main() {
    // Create an array of pointers to Student objects
    const int NUM_STUDENTS = 3;
    Student* students[NUM_STUDENTS];

    // Create objects of the derived classes
    Engineering eng(1001, "John Doe");
    Medicine med(2002, "Jane Smith");
    Science sci(3003, "Bob Johnson");

    // Assign the objects to the array of pointers
    students[0] = &eng;
    students[1] = &med;
    students[2] = &sci;

    // Access and display the objects using the array of pointers
    for (int i = 0; i < NUM_STUDENTS; i++) {
        students[i]->display();
    }

    return 0;
}
