#include<iostream>
using namespace std;
int main(){
    int arr[10], n, i, j, t;
    cout << "\nEnter the total number of elements: ";
    cin >> n;
    cout << "\nEnter the elements: ";
    for(i=0; i<n; i++){
        cin >> arr[i];
    }

    // Bubble Sort
    for(i=0; i<n; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }

    cout << "\nAfter the sorting: ";
    for(i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}