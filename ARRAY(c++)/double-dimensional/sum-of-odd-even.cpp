//write a programme to input mxn matrix and to calculate the sum of even and odd elemnets sepratrely?
#include<iostream>
using namespace std;
int main(){
    int a[50][50],m,n,i,j,e=0,o=0;
    cout<<"\n enter the number of row and column in matrix:\n";
    cin>>m>>n;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<<"\n enter the elements:\n";
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n elements are:\n";
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(a[i][j]%2==0){
                e+=a[i][j];
            }
            else{
                o+=a[i][j];
            }
        }
        
    }
    cout<<"\n sum of even elements:"<<e;
    cout<<"\n sum of odd elements:"<<o;
    cout<<endl;
}