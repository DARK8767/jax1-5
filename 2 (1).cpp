// Q1.Write a C++ program to create two classes Rectangle1 and Rectangle2. Compare area of both the
// rectangles using friend function.
#include <iostream>
using namespace std;

class Rectangle2;

class Rectangle1 {
private:
    float length, width;
public:
    Rectangle1(float l, float w) {
        length = l;
        width = w;
    }
    friend void compare(Rectangle1 r1, Rectangle2 r2);
};

class Rectangle2 {
private:
    float length, width;
public:
    Rectangle2(float l, float w) {
        length = l;
        width = w;
    }
    friend void compare(Rectangle1 r1, Rectangle2 r2);
};

void compare(Rectangle1 r1, Rectangle2 r2) {
    float area1 = r1.length * r1.width;
    float area2 = r2.length * r2.width;
    if (area1 > area2) {
        cout << "Area of Rectangle 1 is greater than Area of Rectangle 2" << endl;
    }
    else if (area1 < area2) {
        cout << "Area of Rectangle 2 is greater than Area of Rectangle 1" << endl;
    }
    else {
        cout << "Area of Rectangle 1 is equal to Area of Rectangle 2" << endl;
    }
}

int main() {
    Rectangle1 r1(4.0, 5.0);
    Rectangle2 r2(6.0, 3.0);

    compare(r1, r2);

    return 0;
}
