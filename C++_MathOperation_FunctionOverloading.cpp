/*                                      MODULE 3.2(PROGRAMMING WITH C++)



*/





#include <iostream>
using namespace std;

class MathOperations {
public:
    // Addition
    int calculate(int a, int b) {
        return a + b;
    }

    float calculate(float a, float b) {
        return a + b;
    }

    // Subtraction
    int calculate(int a, int b, int c) {
        return a - b - c;
    }

    float calculate(float a, float b, float c) {
        return a - b - c;
    }

    // Multiplication
    int calculate(int a, int b, int c, int d) {
        return a * b * c * d;
    }

    float calculate(float a, float b, float c, float d) {
        return a * b * c * d;
    }

    // Division
    float calculate(float a, int b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return a / b;
    }

    float calculate(int a, float b) {
        if (b == 0) {
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    MathOperations math;

    // Addition
    cout << "Addition (int): " << math.calculate(10, 5) << endl;
    cout << "Addition (float): " << math.calculate(10.5f, 5.3f) << endl;

    // Subtraction
    cout << "Subtraction (int): " << math.calculate(20, 5, 3) << endl;
    cout << "Subtraction (float): " << math.calculate(20.5f, 5.5f, 3.2f) << endl;

    // Multiplication
    cout << "Multiplication (int): " << math.calculate(2, 3, 4, 5) << endl;
    cout << "Multiplication (float): " << math.calculate(2.5f, 3.5f, 4.5f, 5.5f) << endl;

    // Division
    cout << "Division (float/int): " << math.calculate(10.0f, 5) << endl;
    cout << "Division (int/float): " << math.calculate(10, 2.0f) << endl;

    return 0;
}

