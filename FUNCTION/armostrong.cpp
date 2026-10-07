#include<iostream>
using namespace std;
void checkArmstrong(int);
int main(){
    int n;
    cout<<"\n enter the value for n(number to check armstrong):";
    cin>>n;
    checkArmstrong(n);
    return 0;
}
void checkArmstrong(int n){
    int r,b=0,n1;
    n1=n;
    while(n!=0){
        r=n%10;
        b=b+(r*r*r);
        n=n/10;
    }
    if(b==n1){
        cout<<"\nNumber is Armstrong";
    }else{
        cout<<"\nNumber is Not Armstrong";
    }
}