#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the letter:";
    cin>>ch;
    switch(tolower(ch)){
        case 'a':
        case 'e':
        case 'o':
        case 'u':
        cout<<ch<<"is a vowel"<<endl;
        break;
        default:
        if(isalpha(ch))
        cout<< ch <<" "<< "is a consonant"<<endl;
        else{
            cout<<ch<<" "<< "is not an alphabet"<<endl;
        }
        return 0;
    }
    
}