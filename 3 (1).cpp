// Q1.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and
// Sphere.
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846;

double Volume(double length) {
    return pow(length, 3);
}

double Volume(double radius, double height) {
    return pi * pow(radius, 2) * height;
}

double getvolume(double radius) {
    return (4.0 / 3.0) * pi * pow(radius, 3);
}

int main() {
    double length, radius, height;

    // Find volume of a cube
        cout << "Enter the length of the cube: ";
        cin >> length;

        cout << "Volume of the cube: " << Volume(length) << endl;

    // Find volume of a cylinder
        cout << "Enter the radius and height of the cylinder: ";
        cin >> radius >> height;

    cout << "Volume of the cylinder: " << Volume(radius, height) << endl;

    // Find volume of a sphere
        cout << "Enter the radius of the sphere: ";
        cin >> radius;

        cout << "Volume of the sphere: " << getvolume(radius) << endl;

    return 0;
}






























