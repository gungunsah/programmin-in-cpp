//Accessing Public Members

#include<iostream>
using namespace std;
class student{
    private:
      char name[20];
      int roll;
      int marks;
    public:
    void input(){
        cout<<"\n enter the name=";
        cin.getline(name,20);
        cout<<"\n enter the roll & marks=";
        cin>>roll>>marks;
    }  
    void display(){
        cout<<"\n name="<<name;
        cout<<"\nroll="<<roll;
        cout<<"\nmarks="<<marks;
    }

};
int main(){
    student st;
    st.input();
    st.display();
    return 0;
}