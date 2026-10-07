#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str) {
    if(str.length() <= 1)
        return true;
    if(str[0] != str[str.length() - 1])
        return false;
    return isPalindrome(str.substr(1, str.length() - 2));
}
int main() {
    string s;
    cout << "\n enter the number or string: ";
    cin >> s; 
    if(isPalindrome(s)) {
        cout << "\n " << s << " is a palindrome." << endl;
    } else {
        cout << "\n " << s << " is NOT a palindrome." << endl;
    }
    return 0;
}