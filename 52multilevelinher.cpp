#include<iostream>
using namespace std;
class base
{
    protected:
    int a,b;
    public:
    void input1()
    {
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a;
        cin>>b;
    }
};
class derive_1:public base
{
protected:
    int c,d;
    public:
    void input2()
    {
        cout<<"Enter the value of c and d:"<<endl;
        cin>>c;
        cin>>d;
    }
};
class derive_2:public derive_1
{
protected:
    int e,f;
    public:
    void input3()
    {
        cout<<"Enter the value of e and f:"<<endl;
        cin>>e;
        cin>>f;
    }
    void show()
    {
        cout<<"Multilevel Inheritance:"<<endl;
        cout<<"a="<<a<<" b="<<b<<endl;
        cout<<"c="<<c<<" d="<<d<<endl;
        cout<<"e="<<e<<" f="<<f<<endl;
    }
};

int main()
{
    derive_2 ob;
    ob.input1();
    ob.input2();
    ob.input3();
    ob.show();
}


