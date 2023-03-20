#include<iostream>
using namespace std;
class A
{
protected:
    int a,b;
    int c,d;
public:
    void input1()
    {
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a;
        cin>>b;
    }
    void input2()
    {
        cout<<"Enter the value of c and d:"<<endl;
        cin>>c;
        cin>>d;
    }
};
class B:public A
{
    public:
    void show1()
    {
        cout<<"Addition:"<<a+b<<endl;
    }
};
class C:public A
{
    public:
    void show2()
    {
        cout<<"Substraction:"<<c-d<<endl;
    }
};
int main()
{
    B ob1;
    C ob2;
    ob1.input1();
    ob2.input2();
    ob1.show1();
    ob2.show2();
}
