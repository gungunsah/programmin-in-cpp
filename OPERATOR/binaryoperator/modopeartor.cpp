#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;
public:
    Test();
    Test(int, int);
    Test operator % (Test &ob);
    void show();
};

Test::Test()
{
    a=0;
    b=0;
}

Test::Test(int x, int y)
{
    a=x;
    b=y;
}

Test Test::operator % (Test &ob)
{
    Test temp;
    if(ob.a != 0)
        temp.a = a % ob.a;
    else
        temp.a = 0;

    if(ob.b != 0)
        temp.b = b % ob.b;
    else
        temp.b = 0;

    return (temp);
}

void Test::show()
{
    cout<<"\n a = "<<a;
    cout<<"\n b = "<<b;
}
int  main()
{
    Test t1(40,50), t2(10,20), t3;
    t3 = t1 % t2;

    cout<<"\n object t1";
    t1.show();
    cout<<"\n object t2";
    t2.show();
    cout<<"\n object t3";
    t3.show();
}