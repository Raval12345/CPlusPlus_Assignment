/*                                         MODULE 3.2(PROGRAMMING WITH C++)


*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *data;
public:
    // Constructor
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    // Destructor
    ~Matrix() {
        delete[] data;
    }

    // Overloading + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            cout << "Error: Matrix sizes do not match!" << endl;
            return Matrix(0);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to set values in the matrix
    void setValues() {
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }
    }

    // Function to display the matrix
    void display() const {
        cout << "[ ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    cout << "Enter elements for Matrix 1:" << endl;
    matrix1.setValues();

    Matrix matrix2(size);
    cout << "Enter elements for Matrix 2:" << endl;
    matrix2.setValues();

    // Add matrices using operator overloading
    Matrix result = matrix1 + matrix2;

    cout << "Matrix 1: ";
    matrix1.display();
    cout << "Matrix 2: ";
    matrix2.display();
    cout << "Resultant Matrix (Matrix1 + Matrix2): ";
    result.display();

    return 0;
}

