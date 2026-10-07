//sum of digits
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"\n enter the value for n(digit):";
    cin>>n;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    cout<<"sum of digits:"<<sum<<endl;
    return 0;
}