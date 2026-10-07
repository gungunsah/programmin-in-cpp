//palindrome number  example=1223221
#include<iostream>
using namespace std;
int main(){
    int n,reversed=0;
    cout<<"\n enter the value for n(digit):";
    cin>>n;
    int original=n;
    while(n!=0){
        reversed=reversed*10+n%10;
        n/=10;
    }
    if(original==reversed)
    cout<<original<<"is a palindrome";
    else
    cout<<original<<"is not a plindrome";

    return 0;
}