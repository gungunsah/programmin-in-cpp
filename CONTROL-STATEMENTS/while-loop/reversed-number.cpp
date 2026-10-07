//reversed number
#include<iostream>
using namespace std;
int main(){
    int n,reversed=0;
    cout<<"\n enter the value for n(digits):";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n/=10;
    }
    cout<<"reversed:"<<reversed<<endl;
    return 0;

}