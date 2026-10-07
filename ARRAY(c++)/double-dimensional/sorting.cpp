
#include<iostream>
using namespace std;

int main(){
    int a[100][100],n,m,i,j,k,l,t;
    cout<<"\n enter the order of matrix:\n";
    cin>>n>>m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<"\n enter the element for a["<<i<<"]["<<j<<"]:\n";
            cin>>a[i][j];
        }
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
            for(k=i; k<n; k++){
                for(l = (k == i ? j + 1 : 0); l<m; l++){
                    if(a[i][j]>a[k][l]){
                        t=a[i][j];
                        a[i][j]=a[k][l];
                        a[k][l]=t;
                    }
                }
            }
            
        }
    }
    
    cout<<"\n after sorting:\n";
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n"; 
    }
    
    return 0;
}