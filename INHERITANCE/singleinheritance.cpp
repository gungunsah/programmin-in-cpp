// #include<iostream>
// using namespace std;
// class base{
//     protected:
//     int a;
//     int b;
//     float c;
// };
// class derive:public base{
//     int c;
//     public:
//     void input(){
//         cout<<"\n enter the value for a,b&c:";
//         cin>>a>>b>>c;
//     }
//     void output(){
//         cout<<"\n a="<<a;
//         cout<<"\n b="<<b;
//         cout<<"\n c="<<c;
//     }
// };
// int main(){
//     derive ob;
//     ob.input();
//     ob.output();
// }

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    string name;

    void eat() {
        cout << name << " khana kha raha hai." << endl;
    }

    void sleep() {
        cout << name << " so raha hai." << endl;
    }
};

// Derived class (Animal se inherit kar rahi hai)
class Dog : public Animal {
public:
    void bark() {
        cout << name << " bhauk raha hai: Bhow Bhow!" << endl;
    }
};

int main() {
    Dog d;
    d.name = "Tommy";

    d.eat();    // Base class ka function
    d.sleep();  // Base class ka function
    d.bark();   // Derived class ka apna function

    return 0;
}