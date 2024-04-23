// Q2.Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical.
// Theory class contains marks of five Subjects and Practical class contains marks of two practical
// subjects. Class Result (Total_Marks, Class) inherits both Theory and Practical classes. (Use
// concept of Virtual Base Class) Write a menu driven program to perform the following functions:
// a. Build a master table.
// b. Display master table.//not run program error show
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int Roll_No;
    string Name;
public:
    void get_data() {
        cout << "Enter Roll No: ";
        cin >> Roll_No;
        cout << "Enter Name: ";
        cin >> Name;
    }
    void display_data() {
        cout << "Roll No: " << Roll_No << endl;
        cout << "Name: " << Name << endl;
    }
};

class Theory : virtual public Student {
protected:
    int marks[5];
public:
    void get_data() {
        cout << "Enter Theory marks of 5 subjects:" << endl;
        for (int i=0; i<5; i++) {
            cin >> marks[i];
        }
    }
    void display_data() {
        cout << "Theory Marks:" << endl;
        for (int i=0; i<5; i++) {
            cout << "Subject " << i+1 << ": " << marks[i] << endl;
        }
    }
};

class Practical : virtual public Student {
protected:
    int marks[2];
public:
    void get_data() {
        cout << "Enter Practical marks of 2 subjects:" << endl;
        for (int i=0; i<2; i++) {
            cin >> marks[i];
        }
    }
    void display_data() {
        cout << "Practical Marks:" << endl;
        for (int i=0; i<2; i++) {
            cout << "Subject " << i+1 << ": " << marks[i] << endl;
        }
    }
};

class Result : public Theory, public Practical {
protected:
    int Total_Marks;
    string Class;
public:
    void calculate_total_marks() {
        Total_Marks = 0;
        for (int i=0; i<5; i++) {
            Total_Marks += marks[i];
        }
        for (int i=0; i<2; i++) {
            Total_Marks += marks[i];
        }
    }
    void calculate_class() {
        float percentage = (float)Total_Marks / 7.0;
        if (percentage >= 75.0) {
            Class = "Distinction";
        }
        else if (percentage >= 60.0) {
            Class = "First Class";
        }
        else if (percentage >= 50.0) {
            Class = "Second Class";
        }
        else {
            Class = "Fail";
        }
    }
    void get_data() {
        Theory::get_data();
        Practical::get_data();
        calculate_total_marks();
        calculate_class();
    }
    void display_data() {
        Student::display_data();
        Theory::display_data();
        Practical::display_data();
        cout << "Total Marks: " << Total_Marks << endl;
        cout << "Class: " << Class << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Result *r = new Result[n];
    for (int i=0; i<n; i++) {
        cout << "Enter data for student " << i+1 << ":" << endl;
        r[i].get_data();
    }
    cout << endl << "Master Table:" << endl;
    for (int i=0; i<n; i++) {
        r[i].display_data();
        cout << endl;
    }
    delete [] r;
    return 0;
}
