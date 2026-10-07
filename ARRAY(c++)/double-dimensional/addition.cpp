// write a prgramme to input elemnts into mxn two matrices and to perform the addition
// operation perform and store their value into another matrix?
#include<iostream>
using namespace std;
int main(){
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
    cout<<"\n enter the order of 1st matrix:\n";
    cin>>m>>n;
    cout<<"\n enter the order of 2nd matrix:\n";
    cin>>p>>q;
    if(m==p && n==q){
        cout<<"\n enter the element for 1st matrix:\n";
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                cin>>a[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n enter the elemnet for 2nd matrix:\n";
        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                cin>>b[i][j];
            }
            cout<<"\n";
        }
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                c[i][j]=a[i][j]+b[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n 1st matrix:\n";
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n 2nd matrix:\n";
        for(i=0; i<p; i++){
            for(j=0; j<q; j++){
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n 3rd matrix:\n";
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                cout<<c[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
}