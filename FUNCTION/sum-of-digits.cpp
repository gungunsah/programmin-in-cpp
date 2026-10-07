#include<iostream>
using namespace std;
void sumOfDigits(int);
int main(){
    int n;
    cout<<"\n enter the value for n(number to find sum of digits):";
    cin>>n;
    sumOfDigits(n);
    return 0;
}
void sumOfDigits(int n){
    int b=0, n1, r;
    n1=n;
    while(n!=0){
        r=n%10;
        b=b+r;
        n=n/10;
    }
    cout<<"\nSum of digits of "<<n1<<" is: "<<b;
}