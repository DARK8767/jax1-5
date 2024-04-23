// Q2.Write a C++ program to create a class which contains two dimensional integer array of size m*n
// Write a member function to display transpose of entered matrix.(Use Dynamic Constructor for
// allocating memory and Destructor to free memory of an object).
#include <iostream>
using namespace std;

class Matrix {
  private:
    int **mat; // pointer to a 2D array
    int rows, cols;

  public:
    Matrix(int m, int n) {
      // dynamic allocation of memory for a 2D array
      rows = m;
      cols = n;
      mat = new int*[rows];
      for (int i = 0; i < rows; ++i) {
        mat[i] = new int[cols];
      }
    }

    ~Matrix() {
      // freeing the memory allocated for the 2D array
      for (int i = 0; i < rows; ++i) {
        delete [] mat[i];
      }
      delete [] mat;
    }

    void read() {
      // function to read input matrix
      cout << "Enter matrix of size " << rows << "x" << cols << ":" << endl;
      for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
          cin >> mat[i][j];
        }
      }
    }

    void display() {
      // function to display input matrix
      cout << "Matrix of size " << rows << "x" << cols << ":" << endl;
      for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
          cout << mat[i][j] << " ";
        }
        cout << endl;
      }
    }

    void transpose() {
      // function to display transpose of the matrix
      cout << "Transpose of matrix of size " << rows << "x" << cols << ":" << endl;
      for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
          cout << mat[i][j] << " ";
        }
        cout << endl;
      }
    }
};

int main() {
  int m, n;
  cout << "Enter number of rows: ";
  cin >> m;
  cout << "Enter number of columns: ";
  cin >> n;

  Matrix A(m, n); // creating an object of Matrix class

  A.read(); // reading input matrix
  A.display(); // displaying input matrix
  A.transpose(); // displaying transpose of matrix

  return 0;
}
