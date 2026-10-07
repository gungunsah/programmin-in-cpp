#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter string,For termination F6:";
    while(cin.get(ch)){
        if(ch=='a'){
            cin.putback('A');
        }
        cout<<ch;
    }
}