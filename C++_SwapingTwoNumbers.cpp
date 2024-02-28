/*

*/



#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    Number(int n) : num(n) {}

    // Member function to swap numbers without using a third variable
    void swap(Number& other) {
        num = num + other.num;
        other.num = num - other.num;
        num = num - other.num;
    }

    // Function to display the number
    void display() {
        cout << num << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Number n1(num1);
    Number n2(num2);

    cout << "Before swapping: num1 = ";
    n1.display();
    cout << "Before swapping: num2 = ";
    n2.display();

    // Call the member function to swap numbers
    n1.swap(n2);

    cout << "After swapping: num1 = ";
    n1.display();
    cout << "After swapping: num2 = ";
    n2.display();

    return 0;
}

