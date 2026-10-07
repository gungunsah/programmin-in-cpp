#include<iostream>
using namespace std;
class Test
{
    int a;
    int b;
public:
    Test();
    Test(int, int);
    Test operator * (const Test &ob); 
    void show();
};

Test::Test()
{
    a = 0;
    b = 0;
}

Test::Test(int x, int y)
{
    a = x;
    b = y;
}

Test Test::operator * (const Test &ob) 
{
    Test temp;
    temp.a = a * ob.a;
    temp.b = b * ob.b;
    return temp;
}

void Test::show()
{
    cout << "\n a = " << a;
    cout << "\n b = " << b;
}

int main()
{
    Test t1(4,5), t2(10,20), t3;
    t3 = t1 * t2; // Do objects ka multiplication

    cout << "\n object t1";
    t1.show();
    cout << "\n object t2";
    t2.show();
    cout << "\n object t3";
    t3.show();

    return 0;
}