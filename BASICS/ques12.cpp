//write a programme to input marks of any four subjects and to cheack he or she is pass or fail?
//if be marks is greater than>50 pass otherwise fail?
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"enter the marks for a,b,c & d :";
    cin>>a>>b>>c>>d;
    (a+b+c+d/4>50) ? cout<<"the student is pass" : cout<<"the student is fail";

}