//count number of digits
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"\n enter the value for n(digit):";
    cin>>n;
    if(n==0) count=1;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<"numberof digits:"<<count<<endl;
    return 0;
}