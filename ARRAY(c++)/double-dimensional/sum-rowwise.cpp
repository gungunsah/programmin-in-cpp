// write a programme to input elements into m*n matrix and to calculate the sum row wise?
#include<iostream>
using namespace std;
int main(){
    int a[50][50],m,n,i,j,s;
    cout<<"\n enter the number of row and column in matrix:\n";
    cin>>m>>n;
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
            s=0;
            for(j=0; j<m; j++){
                s=s+a[i][j];
            }
        }
        cout<<"\n sum of row wise:"<<s;
    }