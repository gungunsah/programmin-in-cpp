

// "DEFINING MEMBER CLASS" — jisme 3 tareeke padhaye jaate hain:
// Inside the class
// Outside the class (normal)
// Outside the class using inline keyword ← ye wahi hai

#include<iostream>
using namespace std;
class student{
    private:
       char name[20];
       int roll;
       int marks;
    public:
      void input();
      void display();   
};

inline void student::input(){
    cout<<"\n enter the name:";
    cin.getline(name,20);
    cout<<"\n enter the roll & marks:";
    cin>>roll>>marks;
}
inline void student::display(){
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