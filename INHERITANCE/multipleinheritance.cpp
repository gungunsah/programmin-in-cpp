// #include<iostream>
// using namespace std;
// class base1{
//     protected:
//     int a;
// };
// class base2{
//     protected:
//     float b;
// };
// class derive : public base1,base2{
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

// Base class 1
class Father {
public:
    void skills() {
        cout << "Father se: Gaadi chalana aata hai." << endl;
    }
};

// Base class 2
class Mother {
public:
    void talent() {
        cout << "Mother se: Khana banana aata hai." << endl;
    }
};

// Derived class (Father aur Mother dono se inherit kar rahi hai)
class Child : public Father, public Mother {
public:
    void hobby() {
        cout << "Child ka apna: Cricket khelna pasand hai." << endl;
    }
};

int main() {
    Child c;

    c.skills();   // Father class ka function
    c.talent();   // Mother class ka function
    c.hobby();    // Child class ka apna function

    return 0;
}