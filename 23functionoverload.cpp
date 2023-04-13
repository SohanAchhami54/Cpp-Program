v#include<iostream>
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
    cout<<c;
}
void A::func(int x,int y)
{
    int z=x+y;
    cout<<z<<endl;
}

int main()
{
    A obj;
     obj.func(100,30);
    obj.func(5.3,6.2);

}
