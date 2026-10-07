//write a programme to input an number of element into array
//and to calculate the sum of odd and even elements separately?
#include<iostream>
using namespace std;
int main(){
    int a[100], n,i,o=0,e=0;
    cout<<"\n enter the number of elements in array:";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<"\n enter the element:";
        cin>>a[i];
    }
    cout<<"\n elements are:";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    for(i=0; i<n; i++){
    if(a[i]%2==0){
        e+=a[i];
    }
        else{
            o+=a[i];
        }
    }
    
        cout<<"\n sum of even elements:"<<e;
        cout<<"\n sum of odd elements:"<<o;
        cout<<endl;
}

