//write a programme to input a number and to check wether given number is pallindrome or not?
#include<iostream>
using namespace std;
int main(){
    int n,r,b=0,temp;
    cout<<"enter the any integer:";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10; b=b*10+r; n=n/10;
    }
    if(temp==b){
        cout<<"the given number is pallendrome";
    }
    else{
        cout<<"the given number is not pallendrome";
    }

}