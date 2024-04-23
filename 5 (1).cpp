// Q1.Write a C++ program to create a class Mobile which contains data members as Mobile_Id,
// Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by using
// parameterized constructor. Display the values of Mobile object.
#include <iostream>
#include <string>
using namespace std;

class Mobile {
  private:
    int mobile_id;
    string mobile_name;
    double mobile_price;

  public:
    Mobile(int id, string name, double price) {
      mobile_id = id;
      mobile_name = name;
      mobile_price = price;
    }

    void display() {
      cout << "Mobile ID: " << mobile_id << endl;
      cout << "Mobile name: " << mobile_name << endl;
      cout << "Mobile price: " << mobile_price << endl;
    }
};

int main() {
  // creating and initializing a Mobile object using a parameterized constructor
  Mobile mobile(1234, "iPhone 12", 999.99);

  // displaying the values of the Mobile object
  mobile.display();

  return 0;
}
