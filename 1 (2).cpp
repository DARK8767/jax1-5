// Q2.Write a C++ program to create a class Array that contains one float array as member. Overload
// the Unary ++ and -- operators to increase or decrease the value of each element of an array. Use
// friend function for operator function.
#include <iostream>
using namespace std;

class Array {
private:
    float data[10];
public:
    Array() {
        for (int i = 0; i < 10; i++) {
            data[i] = 0.0;
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < 10; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    friend Array operator++(Array& obj) {
        for (int i = 0; i < 10; i++) {
            obj.data[i]++;
        }
        return obj;
    }

    friend Array operator--(Array& obj) {
        for (int i = 0; i < 10; i++) {
            obj.data[i]--;
        }
        return obj;
    }
};

int main() {
    Array arr;
    arr.display();

    ++arr;
    arr.display();

    --arr;
    arr.display();

    return 0;
}
