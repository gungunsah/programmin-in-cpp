// 1             1
// 1 2         2 1
// 1 2 3     3 2 1    
// 1 2 3 4 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"\n enter the value for n:";
    cin>>n;
    for(int i = 1; i <= n; i++){
        // Print left half: 
        for(int j = 1; j <= i; j++){
            if(j > 1) cout << " ";
            cout << j;
        }

        // Print spaces in the middle
        int spaces = 4 * (n - i);
        for(int k = 0; k < spaces; k++) cout << " ";

        // Print right half: 
        for(int j = i; j >= 1; j--){
            if(j < i) cout << " ";
            cout << j;
        }

        cout << endl;
    }
    return 0;
}


