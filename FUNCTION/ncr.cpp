#include<iostream>
using namespace std;
 long int facto(int);
int main(){
    int n,r,ncr;
    cout<<"\n enter the value for n&r: ";
    cin>>n>>r;
    ncr = facto(n)/(facto(n-r)*facto(r));
    cout<<"\n ncr:"<<ncr;
    return 0;
}
long int facto(int n){
    int i;
    long int f=1;
    for(i=1; i<=n; i++){
        f=f*i;
    }
    return(f);

}