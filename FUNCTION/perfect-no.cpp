#include<iostream>
using namespace std;
int perfect(int);
int main(){
    int a;
    cout<<"\n enter the value for a:";
    cin>>a;
    if(perfect(a)==a){
        cout<<"\n number is perfect:"<<a;
    }else{
        cout<<"\n number is not perfect:"<<a;
    }
    return 0;
}
int perfect(int n){
    int i,t=0;
    for(i=1; i<n; i++){
        if(n%i==0){
            t=t+i;
        }
    }
    return(t);

}