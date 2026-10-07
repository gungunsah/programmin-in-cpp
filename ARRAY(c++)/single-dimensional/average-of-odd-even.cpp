//write to input an number of element into single dimensional array and to print
//the average of even and odd element separately
#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,se=0,so=0,e=0,o=0;
    cout<<"\n enter the number of elements in array:";
    cin>>n;
    for(i=0; i<n; i++){
        cout<<"\n enter the elements:";
        cin>>a[i];
    }
    cout<<"\n elements are:";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    for(i=0; i<n; i++){
    if(a[i]%2==0){
        se=se+a[i];
        e++;
    }
    else{
        so=so+a[i];
        o++;
    }
}
    cout<<"\n average of even elements:"<<se/e;
    cout<<"\n average of odd elements:"<<so/o;
    cout<<endl;
}