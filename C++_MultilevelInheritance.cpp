/*                                   MODULE 3.2(PROGRAMMING WITH C++)



*/


#include <iostream>
#include <string>
using namespace std;

// Class to store roll number
class Student {
protected:
    int rollNumber;
public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
    int getRollNumber() const {
        return rollNumber;
    }
};

// Class to store marks obtained in two subjects
class Test : public Student {
protected:
    float subject1Marks;
    float subject2Marks;
public:
    void setMarks(float marks1, float marks2) {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
    void displayMarks() const {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};

// Class to store total marks obtained in the test
class Result : public Test {
private:
    float totalMarks;
public:
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }
    void displayResult() const {
        cout << "Roll Number: " << getRollNumber() << endl;
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;
    studentResult.setRollNumber(101);
    studentResult.setMarks(85.5, 78.5);
    studentResult.calculateTotalMarks();
    cout << "Student Result:" << endl;
    studentResult.displayResult();

    return 0;
}

