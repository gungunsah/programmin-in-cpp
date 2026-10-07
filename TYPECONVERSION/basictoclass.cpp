#include<iostream>
using namespace std;
class kg
{
    private:
    int kilo;
    int gram;
    public:
    kg()
    {
        kilo=0;
        gram=0;
    }
    kg(int g)
    {
        kilo=g/1000;
        gram=g%1000;
    }
    void show()
    {
        cout<<"\n weight in kilogram \n";
        cout<<"\n kilo="<<kilo<<"\n gram="<<gram;
    }
};
int main(){
    kg gm;
    int a=32120;
    gm=a;
    gm.show();
}