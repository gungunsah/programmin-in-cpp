#include<iostream>
using namespace std;
int josephus(int n,int k){
    if(n==1)
    return 0;
    return (josephus(n-1,k)+k)%n;
}
int main(){
    int n,k;
    cout<<"\n enter number of people:";
    cin>>n;
    cout<<"\n enter the count k:";
    cin>>k;
    int r=josephus(n,k);
    cout<<"\n the safe position (0-indexed):"<<r;
    cout<<"\n the safe position (1-indexed):"<<r+1;
    return 0;
}