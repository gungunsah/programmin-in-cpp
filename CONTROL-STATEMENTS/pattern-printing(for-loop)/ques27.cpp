//            *
//          * *
//        * * *
//      * * * *
//    * * * * *
//  * * * * * *

#include<iostream>
using namespace std;
int main(){
    int n,i,j,l;
    cout<<"enter the value for n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(l=1; l<=n-i; l++){
            cout<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}