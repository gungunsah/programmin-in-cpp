#include<iostream>
using namespace std;
int LCM(int,int);
int main(){
    int n,m,p,r;
    cout<<"\n enter the value for m&n(m>n):";
    cin>>m>>n;
    r=LCM(m,n);
    cout<<"LCM:"<<r;
}
int LCM(int m,int n){
    int r,p;
    p=m*n;
    while(n!=0){
        r=m%n;
        m=n;
        n=r;
    }
    return(p/m);
}