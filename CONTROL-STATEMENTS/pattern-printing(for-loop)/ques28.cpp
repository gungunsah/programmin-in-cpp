// * * * * * *
//   * * * * *
//     * * * *
//       * * *
//         * *
//           *

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter the value for n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=2*(i-1); j++){
            cout<<" ";
        }
        for(k=1; k<=n-i+1; k++){
            cout<<"*";
            if(k != n-i+1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}