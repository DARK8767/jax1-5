// or Q2.Write a C++ program to copy the contents of one file to another
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
 {
    string sourceFile, destFile;
    cout << "Enter the source file name: ";
    cin >> sourceFile;
    cout << "Enter the destination file name: ";
     cin >> destFile;

    ifstream source(sourceFile, ios::binary);
    ofstream dest(destFile, ios::binary);

    if (!source.is_open()) {
        cerr << "Error: Failed to open the source file.\n";
        return 1;
    }
    if (!dest.is_open()) {
            cerr << "Error: Failed to open the destination file.\n";
            return 1;
    }

        dest << source.rdbuf();

    source.close();
    dest.close();

        cout << "File copied successfully.\n";

         return 0;
}
