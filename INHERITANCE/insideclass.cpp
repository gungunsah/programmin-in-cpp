#include<iostream>
using namespace std;
class human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void fun()
    {
        int a=10;
        int b=20;
        int c=30;
    }
};
int main(){
    human rohit;
    rohit.c=10;
    rohit.fun();
}