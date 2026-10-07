#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    float marks;
    public:
    //parametrized constructor
    student(string n,int a,float m){
        name=n;
        age=a;
        marks=m;
        cout<<"\n constructor called for:"<<name<<endl;
    }
    void display(){
        cout<<"\n name="<<name;
        cout<<"\n age="<<age;
        cout<<"\n marks="<<marks;
    }
};
int main(){
    student s1("sohamanik",20,89);
    student s2("sohamani",20,89);
    s1.display();
    s2.display();
    return 0;

}