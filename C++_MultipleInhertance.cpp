/*                                MODULE 3.2(PROGRAMMING WITH C++)

CLASS :  PERSON
MEMBERS: NAME , AGE

CLASS : STUDENTS
MEMBERS: PERCTENTAGE.

CLASS : TEACHER
MEMBERS: SALARY


*/

#include <iostream>
#include <string>
using namespace std;

// Define the Person class
class Person {
protected:
    string name;
    int age;
public:
    void read_data() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Define the Student class inheriting from Person
class Student : public Person {
private:
    float percentage;
public:
    void read_data() {
        Person::read_data(); // Call base class's read_data
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void display_data() {
        Person::display_data(); // Call base class's display_data
        cout << "Percentage: " << percentage << endl;
    }
};

// Define the Teacher class inheriting from Person
class Teacher : public Person {
private:
    float salary;
public:
    void read_data() {
        Person::read_data(); // Call base class's read_data
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display_data() {
        Person::display_data(); // Call base class's display_data
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Creating a student object
    cout << "Enter Student Details:" << endl;
    Student student;
    student.read_data();
    cout << "\nStudent Details:" << endl;
    student.display_data();

    // Creating a teacher object
    cout << "\nEnter Teacher Details:" << endl;
    Teacher teacher;
    teacher.read_data();
    cout << "\nTeacher Details:" << endl;
    teacher.display_data();

    return 0;
}

