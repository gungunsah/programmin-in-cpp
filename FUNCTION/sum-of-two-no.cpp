// sum of two numbers
#include<iostream>
using namespace std;
int input();
int main(){
    int a,b,c;
    a=input();
    b=input();
    c=(a+b);
    cout<<"\n sum:"<<c;
}
int input(){
    int a;
    cout<<"\n enter the number:\n";
    cin>>a;
    return(a);
}