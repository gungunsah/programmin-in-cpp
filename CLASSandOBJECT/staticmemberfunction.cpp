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
    this->total_customer=total_customer;
    total_customer++;
   }    
    void display(){
    cout<<"\n name="<<name;
    cout<<"\n account_number="<<account_number;
    cout<<"\n balance="<<balance;
    cout<<"\n total_customer="<<total_customer;
   }

   //STATIC MEMBER FUNCTION
    static void display_total_customer(){
    cout<<"\n total_customer="<<total_customer;
   }
   };
   int customer::total_customer;
   
   int main(){
    customer A1("gungun",1,2000);
    customer A2("rahul",3,4000);
    A1.display();
    A2.display();
   }
