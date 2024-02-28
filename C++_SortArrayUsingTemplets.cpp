#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Template function to perform bubble sort on an array
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Template function to display an array
template <typename T>
void displayArray(T arr[], int size) {
    cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Sorting an array of integers
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArray) / sizeof(int);
    cout << "Sorting array of integers:" << endl;
    bubbleSort(intArray, intSize);
    displayArray(intArray, intSize);

   

