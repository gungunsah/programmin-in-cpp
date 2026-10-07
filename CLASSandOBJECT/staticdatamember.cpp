#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number,balance;
    static int total_customer;
 public:
 customer(string name,int account_number,int balance){
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_customer++;
 }   
 void display(){
    cout<<"\n name="<<name;
    cout<<"\n account_number="<<account_number;
    cout<<"\n balance="<<balance;
    cout<<"\n total_customer="<<total_customer;
 }
 void display_total_customer(){
    cout<<"total_customer="<<endl;
 }
};
int customer::total_customer=0;

int main(){
    customer A1("gungun",1,1233);
    customer A2("shiwansh",2,3000);
    A1.display();
    A2.display();
}