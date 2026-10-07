// Find the Maximum of Three Numbers
#include<iostream>
using namespace std;
int input();
int main(){
    int a, b, c;
    a = input();
    b = input();
    c = input();
    if(a > b && a > c)
        cout << "\nMaximum Number = " << a;
    else if(b > a && b > c)
        cout << "\nMaximum Number = " << b;
    else
        cout << "\nMaximum Number = " << c;
    return 0;
}
int input(){
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
}