//write a programme to input any three digit integer and to print their sum?
#include<iostream>
using namespace std; 
int main(){
    int n,r,b=0;
    cout<<"enter the any three digit integer:";
    cin>>n;
    r=n%10; b=b+r; n=n/10;
    r=n%10; b=b+r; n=n/10;
    r=n%10; b=b+r;
    cout<<"the sum="<<b;
}