#include<iostream>
using namespace std;
int main(){
    int n,m,r;
    cout<<"\n enter the value for m&n (m>n):";
    cin>>m>>n;
    do{
        r=m%n;
        m=n;
        n=r;
    }while(r!=0);
    cout<<"\n hcf="<<m;
    return 0;

}