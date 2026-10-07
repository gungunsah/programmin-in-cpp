//write a programme to input mxn matrix and to print their lower triangle including digonal?
#include<iostream>
using namespace std;
int main(){
    int a[50][50],n,m,i,j;
    cout<<"\n enter the order of matrix:\n";
    cin>>n>>m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<"\n enter the elements for matrix:\n";
            cin>>a[i][j];
        }
    }
    cout<<"\n the elements of matrix are:\n";
    for(i=0 ;i<n; i++){
        for(j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n lower diagonal:\n";
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
}