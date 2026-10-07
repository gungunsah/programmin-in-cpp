//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

#include<iostream>
using namespace std ;
int main(){
    int n,i,j;
    cout<<"\n enter the value for n:";
    cin>>n;
    // Upper half including middle
    for(int i = 1; i <= n; i++) {
        // left spaces
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // stars
        for(int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        // right spaces
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    // Lower half
    for(int i = n - 1; i >= 1; i--) {
        // left spaces
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // stars
        for(int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        // right spaces
        for(int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

