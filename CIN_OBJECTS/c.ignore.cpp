#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter string,for termination proccess F6:";
    while(cin.get(ch)){
        cout<<ch;
        while(cin.peek()=='a'){
            cin.ignore(1,'a');
        }
    }
}