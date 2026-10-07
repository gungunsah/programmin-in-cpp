#include<iostream>
using namespace std;
void quickSort(int arr[], int low, int high){
    int i,j,t,pivot;
    if(low<high){
        pivot=arr[high];
        i=low-1;
        for(j=low; j<high; j++){
            if(arr[j]<=pivot){
                i++;
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
        t=arr[i+1];
        arr[i+1]=arr[high];
        arr[high]=t;

        quickSort(arr, low, i);
        quickSort(arr, i+2, high);
    }
}

int main(){
    int arr[20],n,i;
    cout<<"\n enter the total number of element for the array: ";
    cin>>n;
    cout<<"\n enter the element for the array: ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);

    cout<<"\n after the sorting: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}