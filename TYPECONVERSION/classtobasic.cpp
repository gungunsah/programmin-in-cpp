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
    kg(int k,int g)
    {
        kilo=k;
        gram=g;
    }
    operator int ()
    {
        return(kilo*1000+gram);
    }
    operator float(){
        float w;
        w=gram/1000.0;
        w+=kilo;
        return(w);
    }
};
int main(){
    kg gm(5,300);
    int w1=gm;
    float w2=gm;
    cout<<"\n weight="<<w1;
    cout<<"\n weight in float="<<w2;
}