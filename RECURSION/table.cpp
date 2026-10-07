#include<iostream>
using namespace std;
void table(int n, int i); 
int main() {
    int n;
    cout << "\n Enter any number: ";
    cin >> n;
    table(n, 1); 
    return 0;
}
void table(int n, int i) {
    if(i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl; 
        table(n, ++i); 
    }
    return; 
}