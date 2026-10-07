//prime or not
#include<iostream>
using namespace std;
int main(){
    int n,i=2,t=0;
    cout<<"\n enter the value for n: ";
    cin>>n;
    while(i<=(n/2))
    {
        if(n%i==0)
        {
            t++;
        }
        i++;
    }
    if(t==0 && n>1){
        cout<<"\n n is prime";
    }
    else{
        cout<<"\n n is not prime";
    }
    return 0;
}