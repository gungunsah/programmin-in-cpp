// * * * * * *
// *         *
// *         *
// *         *
// *         *
// *         *
// * * * * * *

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"\n enter the value for n:";
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            if(i==0 || j==0 || i==n || j==n){
                cout<< "*";
            }
            else cout<< " ";
        }
        cout<<endl;
    }
    return 0;
}
