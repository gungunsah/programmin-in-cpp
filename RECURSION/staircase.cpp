#include<iostream>
using namespace std;
int climbStairs(int n){
    if(n<=1)
    return 1;
    return climbStairs(n-1)+climbStairs(n-2);
}
int main(){
    int n,r;
    cout<<"\n enter number of stairs:";
    cin>>n;
    r=climbStairs(n);
    cout<<"\n number of ways to climb:"<<r;
    return 0;
}