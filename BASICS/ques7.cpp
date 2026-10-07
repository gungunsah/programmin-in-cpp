//write a programme to input any 3 digit integer and to print it in reverse order?
#include<iostream>
using namespace std;
int main(){
    int n,r,b=0;
    cout<<"enter the any three digit integer:";
    cin>>n;
    r=n%10; b=b*10+r; n=n/10;
    r=n%10; b=b*10+r; n=n/10;
    r=n%10; b=b*10+r;
    cout<<"the reverse order="<<b;
}