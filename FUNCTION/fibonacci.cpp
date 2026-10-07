#include<iostream>
using namespace std;
void fibonacci(int);
int main(){
    int n;
    cout<<"\n enter the value for n(number of terms):";
    cin>>n;
    cout<<"\nFibonacci Series: ";
    fibonacci(n);
    return 0;
}
void fibonacci(int n){
    int a=0, b=1, i, next;
    for(i=1; i<=n; i++){
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }
}