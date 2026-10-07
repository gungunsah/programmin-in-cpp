#include<iostream>
using namespace std;
int main(){
    int arr[20],n,i,j,smallest,t;
    cout<<"\n enter the total number of element for the array: ";
    cin>>n;
    cout<<"\n enter the element for the array: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n-1; i++){
        smallest=i;
        for(j=i+1; j<n; j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        t=arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=t;
    }
    cout<<"\n after the sorting: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}