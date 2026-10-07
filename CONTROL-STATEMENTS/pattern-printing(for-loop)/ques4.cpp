#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"\n enter the value for n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< i << " ";
        }
        cout<<endl;
    }
    return 0;
}

