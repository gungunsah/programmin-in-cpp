#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    public:
    //default constructor
    student(){
        name="unknown";
        age=0;
        cout<<"\n default constructor called for:"<<name<<endl;
    }
    void display(){
        cout<<"\n name:"<<name;
        cout<<"\n age:"<<age;
    }
};
int main(){
    student s1;
    s1.display();
    return 0;
}