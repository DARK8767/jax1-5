// or Q2. Write a C++ program to create a class Shape with functions to find area of the shape and display
// the name of the shape and other essential components of the class. Create derived classes circle,
// rectangle and trapezoid each having overridden function area and display. Write a suitable
// program to illustrate Virtual Function.
#include <iostream>
using namespace std;

class Shape {
protected:
    string name;
public:
    virtual float area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) {
        name = "Circle";
        radius = r;
    }
    float area() {
        return 3.14 * radius * radius;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
    }
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) {
        name = "Rectangle";
        length = l;
        width = w;
    }
    float area() {
        return length * width;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
    }
};

class Trapezoid : public Shape {
private:
    float base1, base2, height;
public:
    Trapezoid(float b1, float b2, float h) {
        name = "Trapezoid";
        base1 = b1;
        base2 = b2;
        height = h;
    }
    float area() {
        return 0.5 * (base1 + base2) * height;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Base 1: " << base1 << endl;
        cout << "Base 2: " << base2 << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << area() << endl;
    }
};

int main()
{
    Shape* s;
    Circle c(3.0);
    Rectangle r(4.0, 5.0);
    Trapezoid t(3.0, 4.0, 2.0);

    s = &c;
    s->display();

    s = &r;
    s->display();

    s = &t;
    s->display();

    return 0;
}
