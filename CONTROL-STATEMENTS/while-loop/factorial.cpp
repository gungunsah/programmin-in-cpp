//factorial number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\n enter the value for n:";
    cin>>n;
    long long fact=1;
    int i=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    cout<<n<<"!="<<fact<<endl;
    return 0;
}