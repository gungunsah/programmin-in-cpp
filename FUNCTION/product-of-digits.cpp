#include<iostream>
using namespace std;
long int productOfDigits(int);
int main(){
    int n, prod;
    cout << "\n enter the value for n: ";
    cin >> n;
    prod = productOfDigits(n);
    cout << "\n product of digits: " << prod << endl;
    return 0;
}
long int productOfDigits(int n){
    int rem;
    long int p = 1; 
    if(n == 0){
        return 0;
    }
    if(n < 0){
        n = -n;
    }
    while(n > 0){
        rem = n % 10; 
        p = p * rem;    
        n = n / 10;     
    }
    
    return(p);
}