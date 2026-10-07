//base ,power and their result
#include<iostream>
using namespace std;
int main(){
    int n,b,p,r=1,i=1;
    cout<<"\n enter the value for b(base)&p(power):";
    cin>>b>>p;
    while(i<p){
        r=r*b*r;
        i++;
    }
    cout<<"\n result="<<r;
    return 0;

}