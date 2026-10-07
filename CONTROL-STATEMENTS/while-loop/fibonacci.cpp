// fibonacci series 1 2 3 5 8 13
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\n enter the number of terms:";
    cin>>n;
    int a=0,b=1,count=0;
    while(count<n){
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
        count++;
    }
    return 0;
}