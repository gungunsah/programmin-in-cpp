//CLASS AND OBJECT

#include<iostream>
using namespace std;
class student{
    private:
        char name[20];
        int roll;
        float marks;
    public:
        void input(){
            cout<<"\n enter the name:";
            cin.getline(name,20);
            cout<<"\n enter roll & marks:";
            cin>>roll>>marks;
    }
    void display(){
        cout<<"\n name="<<name;
        cout<<"\n roll="<<roll;
        cout<<"\n marks="<<marks;
    }
};
int main(){
    student st;
    st.input();
    st.display();
    return 0;
}