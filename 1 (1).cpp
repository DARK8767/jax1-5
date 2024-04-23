// Q1.Write the definition for a class Cylinder that contains data members radius and height. The class
// has the following member functions:
// a. void setradius(float) to set the radius of data member.
// b. void setheight(float) to set the height of data member.
// c. float volume( ) to calculate and return the volume of the cylinder.
// Write a C++ program to create cylinder object and display its volume.
#include <iostream>
using namespace std;

class Cylinder {
private:
    float radius, height;
public:
    void setradius(float r) {
        radius = r;
    }

    void setheight(float h) {
        height = h;
    }

    float volume() {
        return 3.14 * radius * radius * height;
    }
};
int main() {
    Cylinder cyl;
    cyl.setradius(2.5);
    cyl.setheight(5.0);
    cout << "The volume of the cylinder is: " << cyl.volume() << endl;
    return 0;
}