//write a programme to input an alphabate and to cheack given alphabate is capital or samll?
#include<iostream>
using  namespace std;
int main(){
    char ch;
    cout<<"\n enter the any character:";
    cin>>ch;
    (ch>='A'&& ch<='Z') ? cout<<"\n character is capital letter" : cout<<"\n character is small letter";   
    
}