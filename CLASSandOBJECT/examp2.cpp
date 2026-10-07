// DEFINING MEMBER FUNCTION 

//OUTSIDE THE CLASS
#include<iostream>
using namespace std;
class student{
    private:
       char name[20];
       int roll;
       float marks;
    public:
       void input();
       void display();   
};
void student::input(){
    cout<<"\n enter the name=";
    cin.getline(name,20);
    cout<<"\n enter the roll & marks=";
    cin>>roll>>marks;
}
void student::display(){
    cout<<"\n name="<<name;
    cout<<"\n roll="<<roll;
    cout<<"\n marks="<<marks;
}
int main(){
    student st;
    st.input();
    st.display();
    return 0;
}