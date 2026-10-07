#include<iostream>
using namespace std;
bool isSpyNumber(int);
int main(){
    int n;
    cout << "\n enter the value for n: ";
    cin >> n;
    if(isSpyNumber(n)){
        cout << "\n number is a spy number: " << n << endl;
    } else {
        cout << "\n number is not a spy number: " << n << endl;
    }
    return 0;
}
bool isSpyNumber(int n){
    int rem;
    int sum = 0;      
    int prod = 1;     
    if(n < 0){
        n = -n;
    }
    while(n > 0){
        rem = n % 10;       
        sum = sum + rem;    
        prod = prod * rem;  
        n = n / 10;         
    }
    return (sum == prod);
}