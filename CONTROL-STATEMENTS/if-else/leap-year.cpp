#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"\n enter the value for year:";
    cin>>year;
    if(year%4==0 && year%100==0 || (year%400==0))
    cout<<"\n year is leap";
    else
    cout<<"\n year is not leap";
    return 0;
}