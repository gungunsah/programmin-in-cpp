#include<iostream>
using namespace std;

int main(){
    
    int a[100], b[100], c[200], n, m, i, j, k;
    cout << "\nEnter the size of first array (n):";
    cin >> n;
    cout << "Enter the elements for first sorted array:\n";
    for(i = 0; i < n; i++){
        cout << "enter the element for a[" << i << "]:";
        cin >> a[i];
    }
    cout << "\nEnter the size of second array (m):";
    cin >> m;
    cout << "Enter the elements for second sorted array:\n";
    for(j = 0; j < m; j++){
        cout << "enter the element for b[" << j << "]:";
        cin >> b[j];
    }
    
    
    i = 0; 
    j = 0; 
    k = 0; 
    
   
    while(i < n && j < m){
        if(a[i] > b[j]){
            c[k++] = b[j++];
        }
        else{
            c[k++] = a[i++];
        }
    }
    
    
    while(i < n){
        c[k++] = a[i++];
    }
    
    
    while(j < m){
        c[k++] = b[j++];
    }
    
    cout << "\nMerged array elements are:\n";
    for(int l = 0; l < k; l++){
        cout << c[l] << " ";
    }
    cout << "\n";

    return 0;
}