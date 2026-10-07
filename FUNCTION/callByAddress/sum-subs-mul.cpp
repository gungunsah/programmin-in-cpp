// program to add, subtract and multiply two numbers using call by address
#include<iostream>
using namespace std;
void calculate(int, int, int*, int*, int*);
int main(){
    int a,b,add,sub,mul;
    cout<<"\n enter first number:\n";
    cin>>a;
    cout<<"\n enter second number:\n";
    cin>>b;

    calculate(a,b,&add,&sub,&mul);

    cout<<"\n addition:"<<add;
    cout<<"\n subtraction:"<<sub;
    cout<<"\n multiplication:"<<mul;
}
void calculate(int a, int b, int *add, int *sub, int *mul){
    *add=a+b;
    *sub=a-b;
    *mul=a*b;
}