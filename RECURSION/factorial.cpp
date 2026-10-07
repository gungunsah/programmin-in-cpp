#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1)
    return 1;
    else
    return (n*factorial(n-1));
}
int main(){
    int n,r;
    cout<<"\n enter the number:";
    cin>>n;
    r=factorial(n);
    cout<<"\n factorial of no.:"<<r;
    return 0;
}