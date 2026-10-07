#include<iostream>
using namespace std;
void power(int, int);
int main(){
    int x, y;
    cout<<"\n enter the value for x(base):";
    cin>>x;
    cout<<"\n enter the value for y(exponent):";
    cin>>y;
    power(x, y);
    return 0;
}
void power(int x, int y){
    int b=1, i;
    for(i=1; i<=y; i++){
        b=b*x;
    }
    cout<<"\n"<<x<<"^"<<y<<" is: "<<b;
}