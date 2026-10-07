#include<iostream>
using namespace std;
int main(){
    int n,m,r,p;
    cout<<"\n enter the value for m&n (m>n):";
    cin>>m>>n;
    p=m*n;
    do{
        r=m%n;
        m=n;
        n=r;
    }
    while(r!=0);
    cout<<"\n lcm="<<p/m;
    return 0;
}