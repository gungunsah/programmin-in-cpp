#include<iostream>
#include<string> 
using namespace std;
string reverseString(string str){
    if(str.length() == 0)
        return "";
    else
        return reverseString(str.substr(1)) + str[0];
}
int main(){
    string s, r;
    cout << "\n enter the string: ";
    cin >> s;
    r = reverseString(s);
    cout << "\n reversed string: " << r << endl;
    return 0;
}