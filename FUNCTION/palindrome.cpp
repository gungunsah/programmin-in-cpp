#include<iostream>
using namespace std;
void checkPalindrome(int);
int main(){
    int n;
    cout<<"\n enter the value for n(number to check palindrome):";
    cin>>n;
    checkPalindrome(n);
    return 0;
}
void checkPalindrome(int n){
    int b=0,n1,r;
    n1=n;
    while(n!=0){
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    if(b==n1){
        cout<<"\nNumber is Palindrome";
    }else{
        cout<<"\nNumber is Not Palindrome";
    }
}