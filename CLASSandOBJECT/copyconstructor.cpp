#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    public:
    student(string n,int a){
        name=n;
        age=a;
    }
    //copy constructor
     student(const student &s){
        name=s.name;
        age=s.age;
        cout<<"\n copy constructor called for:"<<name<<endl;
    }
    void display(){
        cout<<"\n name="<<name;
        cout<<"\n age="<<age;
    }
};
int main(){
    student s1("gungun",20);
    student s2("arjun",33);
    student s3(s1);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}