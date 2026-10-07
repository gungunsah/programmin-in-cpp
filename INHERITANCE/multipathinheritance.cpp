// 

#include <iostream>
using namespace std;

// Grandparent (sabka base class)
class Person {
public:
    string name;

    void show() {
        cout << "Naam: " << name << endl;
    }
};

// Path 1: Person -> Student
class Student : virtual public Person {
public:
    int rollNo;
};

// Path 2: Person -> Employee
class Employee : virtual public Person {
public:
    int empId;
};

// Dono raaston se Person ko inherit karne wali class
class Intern : public Student, public Employee {
public:
    void display() {
        show();
        cout << "Roll No: " << rollNo << endl;
        cout << "Emp ID: " << empId << endl;
    }
};

int main() {
    Intern i;
    i.name = "Rahul";
    i.rollNo = 101;
    i.empId = 5001;

    i.display();

    return 0;
}