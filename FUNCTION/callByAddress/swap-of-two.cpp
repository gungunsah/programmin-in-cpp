// swap of two numbers using call by address
#include<iostream>
using namespace std;
void swap(int*, int*);
int main(){
    int a,b;
    cout<<"\n enter first number:\n";
    cin>>a;
    cout<<"\n enter second number:\n";
    cin>>b;
    cout<<"\n before swap: a="<<a<<" b="<<b;
    swap(&a,&b);
    cout<<"\n after swap (in main): a="<<a<<" b="<<b;
}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"\n inside function after swap: a="<<*a<<" b="<<*b;
}