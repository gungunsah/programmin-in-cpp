// write a programme to input any two integer & to swap yheir value without using any third variable?
#include<iostream>
using namespace std;
int a,b;
int main(){
    cout<<" enter the value for a&b:";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\n after the swapping=";
    cout<<"\n a="<<a<<"b="<<b;
}