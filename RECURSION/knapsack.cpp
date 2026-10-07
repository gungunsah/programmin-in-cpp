#include<iostream>
using namespace std;
int knapsack(int wt[],int val[],int n,int W){
    if(n==0 || W==0)
    return 0;
    if(wt[n-1]>W)
    return knapsack(wt,val,n-1,W);
    int include=val[n-1]+knapsack(wt,val,n-1,W-wt[n-1]);
    int exclude=knapsack(wt,val,n-1,W);
    return max(include,exclude);
}
int main(){
    int n,W;
    cout<<"\n enter number of items:";
    cin>>n;
    int wt[n],val[n];
    cout<<"\n enter weights of items:";
    for(int i=0;i<n;i++)
    cin>>wt[i];
    cout<<"\n enter values of items:";
    for(int i=0;i<n;i++)
    cin>>val[i];
    cout<<"\n enter knapsack capacity:";
    cin>>W;
    int r=knapsack(wt,val,n,W);
    cout<<"\n maximum value in knapsack:"<<r;
    return 0;
}