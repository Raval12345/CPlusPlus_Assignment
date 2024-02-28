/*                                         MODULE 3.2(PROGRAMMING WITH C++)


*/



#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char *str;
public:
    // Constructor
    MyString(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor
    ~MyString() {
        delete[] str;
    }

    // Overloading + operator for string concatenation
    MyString operator+(const MyString& other) const {
        char *temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    // Function to display the string
    void display() const {
        cout << str;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    // Concatenate strings using operator overloading
    MyString result = str1 + str2;

    cout << "String 1: ";
    str1.display();
    cout << endl;

    cout << "String 2: ";
    str2.display();
    cout << endl;

    cout << "Concatenated String: ";
    result.display();
    cout << endl;

    return 0;
}

