/*

*/

#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2;
public:
    MaxFinder(int n1, int n2) : num1(n1), num2(n2) {}

    // Declare friend function to find the maximum number
    friend int findMax(const MaxFinder&);
};

// Friend function to find the maximum number
int findMax(const MaxFinder& mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    MaxFinder mf(num1, num2);

    // Call the friend function to find the maximum number
    int maxNum = findMax(mf);

    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

