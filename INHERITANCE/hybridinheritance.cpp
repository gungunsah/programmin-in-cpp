// #include<iostream>
// using namespace std;
// class student
// {
//     protected:
//     char name[20];
//     int roll;
// };
// class marks:public student
// {
//     protected:
//     float pmarks;
// };
// class account
// {
//     protected:
//     int totalfee;
// };
// class report:public marks,public account
// {
//     public:
//     void input()
//     {
//         cout<<"\n enter the name:";
//         cin.getline(name,20);
//         cout<<"\n enter the roll &pmarks:";
//         cin>>roll>>pmarks;
//         cout<<"\n total fees";
//         cin>>totalfee;
//     }
//     void output()
//     {
//         cout<<"\n name="<<name;
//         cout<<"\n roll="<<roll;
//         cout<<"\n pmarks="<<pmarks;
//         cout<<"\n totalfee="<<totalfee;
//     }
// };
// int main()
// {
//     report ob;
//     ob.input();
//     ob.output();
// }

#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    void showName() {
        cout << "Naam: " << name << endl;
    }
};

// Single inheritance: Person -> Student
class Student : virtual public Person {
public:
    int rollNo;
};

// Single inheritance: Person -> Sports
class Sports : virtual public Person {
public:
    int sportsMarks;
};

// Multiple inheritance: Student + Sports -> Result
class Result : public Student, public Sports {
public:
    void display() {
        showName();
        cout << "Roll No: " << rollNo << endl;
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

int main() {
    Result r;
    r.name = "Aman";
    r.rollNo = 21;
    r.sportsMarks = 85;

    r.display();

    return 0;
}