// Ye code Operator Overloading using Friend Function ka example hai — specifically
// binary + operator ko overload karne ka, taaki do class objects (test type ke) ko
//  directly add kiya ja sake, jaise normal numbers add hote hain.

#include<iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    test();
    test(int,int);
    friend test operator+(test&,test&);   // FIX 1: "opertaor+" → "operator+"
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

test operator+(test &ob,test &ob1)         // FIX 2: "test7 ob" → "test &ob"
{
    test temp;
    temp.a=ob.a+ob1.a;
    temp.b=ob.b+ob1.b;
    return(temp);
}

void test::show()
{
    cout<<"\n a="<<a<<"\n b="<<b;
}

int main(){                                 // FIX 3: "void main()" → "int main()"
    test t1(10,20),t2(40,80),t3;
    cout<<"\n object t1 \n";
    t1.show();
    cout<<"\n object t2 \n";
    t2.show();
    t3=operator+(t1,t2);
    cout<<"\n object t \n";
    t3.show();

    return 0;                               // FIX 4: return statement add kiya
}