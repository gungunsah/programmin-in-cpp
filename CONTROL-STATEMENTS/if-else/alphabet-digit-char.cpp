//alphabet,digit or special character
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A' && ch<='Z' || (ch>'a' && ch<='z'))
    cout<<"alphabet";
    else if(ch>='0' && ch<='9')
    cout<<"digit";
    else
    cout<<"special character";
    return 0;
}