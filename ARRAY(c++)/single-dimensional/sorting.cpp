#include<iostream>
using namespace std;
int main(){
    int a[100], n,i,j,t;
    cout<<"enter the value for n(total number of elements in array):";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<"\n enter the element for a["<<i<<"]:";
        cin>>a[i];
    }
    cout<<"\n elemets are";
    for(i=0; i<n; i++){
        cout<<a[i]<<"  ";   
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"\n after sorting:";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}