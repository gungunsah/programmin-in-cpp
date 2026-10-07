#include<iostream>
using namespace std;
int coinChange(int coins[],int n,int sum){
    if(sum==0)
    return 1;
    if(sum<0 || n==0)
    return 0;
    return coinChange(coins,n,sum-coins[n-1])+coinChange(coins,n-1,sum);
}
int main(){
    int n,sum;
    cout<<"\n enter number of coin types:";
    cin>>n;
    int coins[n];
    cout<<"\n enter the coin values:";
    for(int i=0;i<n;i++)
    cin>>coins[i];
    cout<<"\n enter the target sum:";
    cin>>sum;
    int r=coinChange(coins,n,sum);
    cout<<"\n number of ways to make the sum:"<<r;
    return 0;
}