#include<iostream>
using namespace std;
void reverseNumber(int);
int main(){
    int n;
    cout<<"\n enter the value for n(number to reverse):";
    cin>>n;
    cout<<"\nReversed Number: ";
    reverseNumber(n);
    return 0;
}
void reverseNumber(int n){
    int rev=0, digit;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    cout<<rev;
}