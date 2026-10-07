//write a programe to input principal amount,rate and time and calculate their simple interest?
#include<iostream>
using namespace std;
int main(){
    double p,r,t,si;
    cout<<" enter the value for p,r & t: ";
    cin>>p>>r>>t;
    si=(p*r*t)/100.0;
    cout<<" the simple interest="<<si;
}