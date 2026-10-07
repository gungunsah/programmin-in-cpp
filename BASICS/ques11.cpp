//write a programme to input total purchase amount and to calculate their discount?
//according to the following condition if purchased amount is greater than 5 thousand 
//and discount will be 10% otherwise 5%?
#include<iostream>
using namespace std;
int main(){
    float amount,final_amount,discount;
    cout<<"enter the total purchase amount:";
    cin>>amount;
    discount=(amount>5000) ? amount*.10:amount*.05;
    final_amount=amount-discount;
    cout<<"the total purchase amount="<<amount<<endl;
    cout<<"the final_amount="<<final_amount<<endl;
    cout<<"the discount="<<discount<<endl;
}

