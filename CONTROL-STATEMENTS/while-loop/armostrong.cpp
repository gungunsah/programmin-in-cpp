//armostrong 1^3+5^3+3^3=1+125+27=153
#include<iostream>
using namespace std;
int main(){
    int n,r,b=0,n1;
    cout<<"\n enter the value for n(digit):";
    cin>>n;
    n1=n;
    while(n>0)
    {
        r=n%10;
        b=b+(r*r*r);
        n=n/10;
    }
    if(b==n1)
    {
        cout<<"\n number is armostrong"; 
    }else
        cout<<"\n number is not armostrong";
    return 0;
}