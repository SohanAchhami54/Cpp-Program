#include<iostream>
using namespace std;
class base_1
{
public:
    int a,b;
    void input1()
    {
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a;
        cin>>b;
    }
//    void show()
//    {
//        cout<<"a="<<a<<" b="<<b<<endl;
//    }
};
class base_2
{
public:
    int c,d;
    void input2()
    {
        cout<<"Enter the value of c and d:"<<endl;
        cin>>c;
        cin>>d;
    }
//    void show()
//    {
//        cout<<"c="<<c<<" d="<<d<<endl;
//    }
};

class derive:public base_1,public base_2
{
    public:
    int e,f;
    void input3()
    {
        cout<<"Enter the value of e and f:"<<endl;
        cin>>e;
        cin>>f;
    }

        void show()
    {
        cout<<endl;
        cout<<"Multiple Inheritance:"<<endl;
        cout<<"a="<<a<<" b="<<b<<endl;
        cout<<"c="<<c<<" d="<<d<<endl;
        cout<<"e="<<e<<" e="<<e<<endl;
    }

};

int main()
{
    derive ob;
    ob.input1();
    ob.input2();
    ob.input3();
    ob.show();
}
