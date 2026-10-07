#include<iostream>
using namespace std;
class gram
{
    private:
    int value;                          
    public:
    gram()
    {
        value=0;
    }
    gram(int g)
    {
        value=g;
    }
    int get()
    {
        return (value);
    }
    void show()                          
    {
        cout<<"\n weight in gram="<<value;
    }
};

class kilo
{
    private:
    int kg;
    
    public:
    kilo()
    {
        kg=0;
    }
    kilo(gram g)
    {
        kg=g.get()/1000;
    }
    void show()
    {
        cout<<"\n kilo="<<kg;
    }
};

int main(){                             
    gram g(4500);
    kilo k;
    k=g;
    g.show();
    k.show();
    return 0;                          
}