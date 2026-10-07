// Ye code Operator Overloading using Friend Function ka example hai — specifically prefix
// increment (++) operator ko overload karne ka, jisme friend function ka use kiya gaya hai 
// (member function ke bajaye).

#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    test();
    test(int ,int);
    friend void operator++(test &);
    void show();
};
test::test()
{
    a=0;
    b=0;
}
test::test(int x,int y)
{
    a=x;
    b=y;
}
void operator++(test&ob)
{
    ++ob.b;
}
void test::show(){
    cout<<"\n a="<<a<<"\n b="<<b;
}
int main()
{
    test t1(10,20);
    cout<<"\n object t1 \n";
    t1.show();
    ++t1;
    cout<<"\n object t1++ \n";
    t1.show();
}