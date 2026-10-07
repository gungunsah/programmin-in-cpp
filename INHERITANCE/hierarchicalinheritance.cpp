// #include<iostream>
// using namespace std;
// class base
// {
//     protected:
//     int a;
// };
// class derive1:public base
// {
//     int b;
//     public:
//     void input(){
//         cout<<"\n enter the value for a&b:";
//         cin>>a>>b;
//     }
//     void output(){
//         cout<<"\n a="<<a;
//         cout<<"\n b="<<b;
//     }
// };
// class derive2: public base
// {
//     int c;
//     public:
//     void input(){
//         cout<<"\n enter the value for a&c:";
//         cin>>a>>c;
//     }
//     void output(){
//         cout<<"\n a="<<a;
//         cout<<"\n c="<<c;
//     }
// };
// int main(){
//     derive1 ob1;
//     derive2 ob2;
//     ob1.input();
//     ob2.input();
//     cout<<"\n object1 \n";
//     ob1.output();
//     cout<<"\n object2 \n";
//     ob2.output();
// }

#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;

    void start() {
        cout << brand << " start ho gayi." << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    void openAC() {
        cout << brand << " car ka AC chalu hai." << endl;
    }
};

// Derived class 2
class Bike : public Vehicle {
public:
    void kickStart() {
        cout << brand << " bike kick se start hui." << endl;
    }
};

// Derived class 3
class Truck : public Vehicle {
public:
    void loadSamaan() {
        cout << brand << " truck mein samaan load ho raha hai." << endl;
    }
};

int main() {
    Car c;
    c.brand = "Honda City";
    c.start();
    c.openAC();

    Bike b;
    b.brand = "Yamaha R15";
    b.start();
    b.kickStart();
    return 0;
}