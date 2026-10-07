// *
// * #
// * # *
// * # * #
// * # * # *
// * # * # * #

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter the value for n:";
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            if(j%2==0){
                cout<<"#";
            }
            else{
                cout<<"*";
            }
        }
            cout<<endl;
        }
        return 0; 
    }
