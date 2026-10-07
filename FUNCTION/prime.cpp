#include<iostream>
using namespace std;
int prime(int);
int main(){
    int a;
    cout<<"\n enter the value for a:\n";
    cin>>a;
    if(prime(a)==2){
        cout<<"\n number is prime\n";
    }else{
        cout<<"\n number is not prime\n";
    }
    return 0;
}
int prime(int n){
    int i,t=0;
    for(i=1; i<=n; i++){
        if(n%i==0){
            t++;
        }
    }
    return(t);
}