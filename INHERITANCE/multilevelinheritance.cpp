// #include<iostream>
// using namespace std;
// class base{
//     protected:
//     int a;
// };
// class derive1: public base{
//     protected:
//     float b;
// };
// class derive2: public derive1{
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
//     derive2 ob;
//     ob.input();
//     ob.output();
// }


#include <iostream>
using namespace std;

// Level 1: Base class
class Grandfather {
public:
    void property() {
        cout << "Grandfather se: Zameen aur ghar mila." << endl;
    }
};

// Level 2: Grandfather se inherit
class Father : public Grandfather {
public:
    void business() {
        cout << "Father se: Dukaan ka business mila." << endl;
    }
};

// Level 3: Father se inherit (aur Father ke through Grandfather se bhi)
class Son : public Father {
public:
    void study() {
        cout << "Son ka apna: Engineering ki padhai kar raha hai." << endl;
    }
};

int main() {
    Son s;

    s.property();   // Grandfather ka function
    s.business();   // Father ka function
    s.study();      // Son ka apna function

    return 0;
}
