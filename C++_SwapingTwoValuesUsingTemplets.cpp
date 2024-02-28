


#include <iostream>
using namespace std;

// Template function to swap two values of any data type
template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Swap two integers
    int num1 = 10, num2 = 20;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swap two floating-point numbers
    float f1 = 3.14, f2 = 2.71;
    cout << "Before swapping: f1 = " << f1 << ", f2 = " << f2 << endl;
    swapValues(f1, f2);
    cout << "After swapping: f1 = " << f1 << ", f2 = " << f2 << endl;

    // Swap two characters
    char ch1 = 'A', ch2 = 'B';
    cout << "Before swapping: ch1 = " << ch1 << ", ch2 = " << ch2 << endl;
    swapValues(ch1, ch2);
    cout << "After swapping: ch1 = " << ch1 << ", ch2 = " << ch2 << endl;

    return 0;
}

