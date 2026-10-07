#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    test();
    test(int,int);
    void operator++();       
    void show();
    void operator++(int);    
};

test::test(){
    a=0;
    b=0;
}

test::test(int x,int y)
{
    a=x;
    b=y;
}

void test::operator++()      
{
    a++;
    b++;
}

void test::operator++(int)
{
    a++;
    b++;
}
void test::show()
{
    cout<<"\n a="<<a<<"\n b="<<b;
}
int main()
{
    test t(10,20);
    t.show();
    t.show();
    ++t;
    t.show();
    t++;
    t.show();
    return 0;                
}