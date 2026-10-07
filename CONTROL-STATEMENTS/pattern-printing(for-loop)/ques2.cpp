#include<iostream>
using namespace std;
int main(){
    int n ,i,j;
    cout<<"\n enter the value for n:";
    cin>>n;
    for(int i=0; i<=n; i++){
    for(int j=0; j<=i; j++){
        cout<<"*";
        }
        cout<<endl;
    }  
    return 0;
}
    

