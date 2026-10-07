#include<iostream>
using namespace std;
int friendsPairing(int n){
    if(n==0 || n==1)
    return 1;
    return friendsPairing(n-1)+(n-1)*friendsPairing(n-2);
}
int main(){
    int n,r;
    cout<<"\n enter the number of friends:";
    cin>>n;
    r=friendsPairing(n);
    cout<<"\n number of ways:"<<r;
    return 0;
}