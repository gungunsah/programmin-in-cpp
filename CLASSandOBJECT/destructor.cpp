#include<iostream>
using namespace std;
class student{
    string name;
    int age;
    public:
    //constructor
    student(string n,int a){
        name=n;
        age=a;
        cout<<"constructor called for "<<name<<endl;
    }
    void display(){
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
    }
    //destructor
    ~student(){
        cout<<"destructor called for "<<name<<endl;
    }
};
int main(){
    student s1("gungun",20);
    student s2("ravi",22);
    s1.display();
    s2.display();
    return 0;
}