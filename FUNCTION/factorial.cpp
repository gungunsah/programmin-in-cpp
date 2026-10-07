#include<iostream>
using namespace std;
long int facto(int);
int main(){
    int n;
    long int f;
    cout<<"\n enter the value for n(for factorial):";
    cin>>n;
    f=facto(n);
    cout<<"factorial:"<<f;
}
long int facto(int n){
    int i;
    long int f=1;
    for(i=1; i<=n; i++){
        f=f*i;
    }
    return(f);
}