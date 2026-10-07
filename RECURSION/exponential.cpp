#include<iostream>
using namespace std;
int power(int base, int exp){
    if(exp == 0)
        return 1;
    else
        return (base * power(base, exp - 1));
}

int main(){
    int base, exp, r;
    cout << "\n enter the base number: ";
    cin >> base;
    cout << " enter the power (exponent): ";
    cin >> exp;
    r = power(base, exp);
    cout << "\n result: " << r << endl;
    return 0;
}