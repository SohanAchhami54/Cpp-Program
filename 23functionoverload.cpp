#include<iostream>
using namespace std;
class A
{
public:
    void func(double,double);
    void func(int,int);
};
void A::func(double a,double b)
{
    double c=a+b;
    cout<<"addition="<<c<<endl;
}
void A::func(int x,int y)
{
    int z=x-y;
    cout<<"substraction="<<z<<endl;
}

int main()
{
    A obj;
    obj.func(5.3,6.2);
    obj.func(100,30);
}