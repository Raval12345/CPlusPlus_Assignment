/*                                    MODULE 3.2(PROGRAMMING WITH C++)

*/



#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

// Function to calculate the area of a circle
float calculateArea(float radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
float calculateArea(float length, float breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
float calculateArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float radius, length, breadth, base, height;

    // Calculate and display the area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    // Calculate and display the area of a rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << calculateArea(length, breadth) << endl;

    // Calculate and display the area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateArea(base, height) << endl;

    return 0;
}

