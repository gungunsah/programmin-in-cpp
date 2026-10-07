// write a programme to input an anumber of element into array and to calculate sum column wise?

#include<iostream>
using namespace std;
int main(){
    int a[50][50],n,m,i,j,s[50]={0};
    cout<<"\n enter the number of row and column in matrix:\n";
    cin>>n>>m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<"\n enter the elements:\n";
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n elements are:\n";
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            s[j]=s[j]+a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n sum of column wise:\n";
    for(j=0; j<m; j++){
        cout<<"\n sum of column: "<<s[j];
    }
}