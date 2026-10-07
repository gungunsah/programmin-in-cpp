#include<iostream>
using namespace std;
int main(){
    int arr[20],n,i,j,t;
    cout<<"\n enter the total number of element for the array: ";
    cin>>n;
    cout<<"\n enter the element for the array: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=1; i<n; i++){
        t=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>=t){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=t;
    }
    cout<<"\n after the sorting: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}