//write a programme to input total purchase amount and to calculate their discount
//if purchased amount is greater then 10,000 then discount will be 12% of 
//total purchase if amount is greater then 5000 but less then equal to 10,000 then discount
 // will be 6% otherwise 3%?
#include<iostream>
using namespace std;
int main(){
    float amount,final_amount,discount;
    cout<<"enter the total purchase amount:";
    cin>>amount;
    (amount>10,000)?discount=0.12*amount:(amount>5000 && amount<=10,000)?discount=0.06*amount:discount=0.03*amount;
     cout<<"the discount is="<<discount<<endl;
     final_amount=amount-discount;
     cout<<"the final amount is="<<final_amount<<endl;
     
}