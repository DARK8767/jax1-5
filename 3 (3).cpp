// or Q2.Create a class String which contains a character pointer (Use new and delete operator)
// Write a C++ program to overload following operators
// a. ! To reverse the case of each alphabet from given string.
// b. [ ] To print a character present at specified index
#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char* str;

public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String& s) {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    ~String() {
        delete[] str;
    }

    void display() const {
        cout << str << endl;
    }

    String operator!() const {
        String temp(*this);

        for (int i = 0; i < strlen(temp.str); i++) {
            if (isupper(temp.str[i])) {
                temp.str[i] = tolower(temp.str[i]);
            }
            else if (islower(temp.str[i])) {
                temp.str[i] = toupper(temp.str[i]);
            }
        }

        return temp;
    }

    char& operator[](int index) const {
        return str[index];
    }
};

int main() {
    String s1("Hello World");
    s1.display();

    String s2 = !s1;
    s2.display();

    cout << "Character at index 4: " << s1[4] << endl;

    return 0;
}
