// Find the Maximum of Two Numbers
#include<iostream>
using namespace std;
int input();
int main(){
    int a, b;
    a = input();
    b = input();
    if(a > b)
        cout << "\nMaximum Number = " << a;
    else
        cout << "\nMaximum Number = " << b;

    return 0;
}
int input(){
    int a;
    cout << "\nEnter the number: ";
    cin >> a;
    return a;
}