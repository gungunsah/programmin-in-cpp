#include<iostream>
using namespace std;
int tilingWays(int n){
    if(n==0 || n==1)
    return 1;
    return tilingWays(n-1)+tilingWays(n-2);
}
int main(){
    int n,r;
    cout<<"\n enter the value of n (size of 2 x n board):";
    cin>>n;
    r=tilingWays(n);
    cout<<"\n number of ways to tile the board:"<<r;
    return 0;
}