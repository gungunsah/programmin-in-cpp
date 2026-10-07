//write a programme to input an element an number of element into array and to
// print the elemnets in reverse order of the array
#include<iostream>
using namespace std;
int main(){
    int a[100],n,i;
    cout<<"\n enter the number of elements in array:";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<"\n enter the elements:";
        cin>>a[i];
    }
    cout<<"\n elements in reverse order are:";
    for(i=n-1; i>=0; i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}