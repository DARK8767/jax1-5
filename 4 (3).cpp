// or Q2.Create a base class Flight containing protected data members as Flight_no, Flight_Name. Derive
// a class Route(Source, Destination) from class Flight. Also derive a class Reservation (no_seats,
// class, fare, travel_date) from Route. Write a C++ program to perform the following necessary
// functions.
// a. Enter details of n reservations.
// b. Display reservation details of Business class.
#include <iostream>
#include <string>
using namespace std;

class Flight {
  protected:
    string flight_no;
    string flight_name;

  public:
    Flight(string no, string name) {
      flight_no = no;
      flight_name = name;
    }
};

class Route : public Flight {
  protected:
    string source;
    string destination;

  public:
    Route(string no, string name, string src, string dest) : Flight(no, name) {
      source = src;
      destination = dest;
    }
};

class Reservation : public Route {
  private:
    int no_seats;
    string travel_class;
    double fare;
    string travel_date;

  public:
    Reservation(string no, string name, string src, string dest,
                int seats, string cls, double f, string date) : Route(no, name, src, dest) {
      no_seats = seats;
      travel_class = cls;
      fare = f;
      travel_date = date;
    }

    void display_business_class() {
      if (travel_class == "Business") {
        cout << "Reservation details:" << endl;
        cout << "Flight number: " << flight_no << endl;
        cout << "Flight name: " << flight_name << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Number of seats: " << no_seats << endl;
        cout << "Travel class: " << travel_class << endl;
        cout << "Fare: " << fare << endl;
        cout << "Travel date: " << travel_date << endl;
      }
    }
};

int main() {
  int n;
  cout << "Enter number of reservations: ";
  cin >> n;

  Reservation* reservations[n];

  // reading details of n reservations
  for (int i = 0; i < n; ++i) {
    string no, name, src, dest, cls, date;
    int seats;
    double fare;

    cout << "Enter details of reservation " << i+1 << ":" << endl;
    cout << "Enter flight number: ";
    cin >> no;
    cout << "Enter flight name: ";
    cin >> name;
    cout << "Enter source: ";
    cin >> src;
    cout << "Enter destination: ";
    cin >> dest;
    cout << "Enter number of seats: ";
    cin >> seats;
    cout << "Enter travel class (Business/Economy): ";
    cin >> cls;
    cout << "Enter fare: ";
    cin >> fare;
    cout << "Enter travel date: ";
    cin >> date;

    reservations[i] = new Reservation(no, name, src, dest, seats, cls, fare, date);
  }

  // displaying reservation details of Business class
  for (int i = 0; i < n; ++i) {
    reservations[i]->display_business_class();
  }

  // freeing the memory allocated for the reservations
  for (int i = 0; i < n; ++i) {
    delete reservations[i];
  }

  return 0;
}
