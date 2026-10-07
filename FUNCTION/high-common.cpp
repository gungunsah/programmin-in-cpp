#include<iostream>
using namespace std;
int HCF(int, int);
int main(){
    int m, n, r;
    cout<<"\n enter the value for m&n (m>n):";
    cin>>m>>n;
    r=HCF(m,n);
    cout<<"\n HCF:"<<r;
    return 0;
}
int HCF(int m, int n){
     int r;
      r=m%n;
      while(r!=0){
        m=n;
        n=r;
        r=m%n;
      }
      return (n);
}