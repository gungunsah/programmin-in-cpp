
//        A
//      A B A
//    A B C B A
//   A B C D C B A
// A B C D E D C B A


#include<iostream>
using namespace std;
int main(){
    int n,ch,i,j;
    cout<<"\n enter the value for n:";
    cin>>n;
    for(int i=0; i<=n; i++){
        //space
        for(char ch='A'; ch<='A'+(n-i-1); ch++){
            cout<<" ";
        }
        // going to the peck character
        for(char ch='A'; ch<='A'+ i; ch++){
            cout<< ch ;
        }
        // going down from peck character
        for(char ch='A'+(i-1); ch>='A'; ch--){
            cout<< ch;
        }
        //space
        for(char ch='A' ; ch<='A'+(n-i-1); ch++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
