
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,l;
    cout<<"enter the value for n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(l=1; l<=n-i; l++){
            cout<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<j;
        }
        for(k=i-1; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }
}