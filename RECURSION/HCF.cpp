#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main(){
    int num1, num2, r;
    cout << "\n enter the first number: ";
    cin >> num1;
    cout << " enter the second number: ";
    cin >> num2;
    r = gcd(num1, num2);
    cout << "\n GCD of numbers: " << r << endl;
    return 0;
}