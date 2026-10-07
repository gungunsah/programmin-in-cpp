#include<iostream>
using namespace std;
class weight{
    private:
       int gm;
       int kg;
    public:
       void input(){
        cout<<"\n enter the weight in gram:";
        cin>>gm;
       }   
     friend void convert(weight&);  
};
void convert(weight&ob){
    ob.kg=ob.gm/1000;
    ob.gm=ob.gm%1000;
    cout<<"\n weight in kilo & gram";
    cout<<"\n kg="<<ob.kg;
    cout<<"\n gm="<<ob.gm;
}
int main(){
    weight w1;
    w1.input();
    convert(w1);
    return 0;
    
}