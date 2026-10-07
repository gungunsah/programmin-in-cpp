//write a programme to input elements into mxn matrix and to print  the matrix in 
// transpose form?
#include<iostream>
using namespace std;
int main(){
    int a[50][50],n,m,i,j;
    cout<<"\n enter the order of matrix:\n";
    cin>>n>>m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<"\n enter the elements of matrix:\n";
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n the elements of matrix are:\n";
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n the transpose of matrix is:\n";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
    
}