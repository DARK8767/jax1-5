// Q1.Write a C++ program to print area of circle, square and rectangle using inline function.
#include <iostream>

using namespace std;

inline float areaCircle(float radius) {
    return 3.14 * radius * radius;
}

inline int areaSquare(int side) {
    return side * side;
}

inline int areaRectangle(int length, int width) {
    return length * width;
}

int main() {
    float radius;
    int side, length, width;

    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << areaCircle(radius) << endl;

    cout << "Enter length of square: ";
    cin >> side;
    cout << "Area of square: " << areaSquare(side) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << areaRectangle(length, width) << endl;

    return 0;
}
