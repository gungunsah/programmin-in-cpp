//GCD OF TWO NUMBER(euclidean algorithm)
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\n enter the value for a&b:";
    cin>>a>>b;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<"GCD:"<<a<<endl;
    return 0;
}