//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *


#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"\n enter the value for n:";
    cin>>n;
    for(int i=0; i<=n; i++){
        //space
        for(int j=1; j<=n-i-1; j++){
            cout<< " ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout<< "*";
        }
        //space
        for(int j=0; j<=n-i-1; j++){
            cout<< " ";
        }
        cout<<endl;
    }
    return 0;
}
