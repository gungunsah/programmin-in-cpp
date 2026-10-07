#include<iostream>
#include <cstring> 
using namespace std;
int main(){
    char name[20];
    cout<<"enter the name:";
    cin.getline(name,20);
    cout<<"\n you enter="<<name;
    for(int i=0; i<strlen(name); i++){
        cout.write(name,i);
        cout<<"\n";
    }
}