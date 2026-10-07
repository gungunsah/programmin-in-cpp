#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"enter the name:";
    cin.getline(name,20);
    cout<<"you enter="<<name;
    cout.write(name,20);
}