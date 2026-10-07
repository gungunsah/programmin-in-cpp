#include<iostream>
using namespace std;
int input();
int main(){
    int n;
    n= input();
    if(n%2==0){
        cout<<"\n number is even:"<<n;
    }else{
        cout<<"\n number is odd:"<<n;
    }
    return 0;
}
int input(){
    int a;
    cout<<"\n enter the number:";
    cin>>a;
    return (a);
}