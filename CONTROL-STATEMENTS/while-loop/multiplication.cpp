// print the multiplication table
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"\n enter the value for n:";
    cin>>n;
    while(i<=10)
    {
        cout<<"\n"<<i<<" * "<<n<<" = "<<i*n;
        i++;
    }
    return 0;
}