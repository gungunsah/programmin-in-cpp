#include<iostream>
using namespace std;
int sumOfDigits(int n){
    if(n == 0)
        return 0;
    else
        return (n % 10 + sumOfDigits(n / 10));
}

int main(){
    int n, r;
    cout << "\n enter the number: ";
    cin >> n;
    r = sumOfDigits(n);
    cout << "\n sum of digits: " << r << endl;
    return 0;
}