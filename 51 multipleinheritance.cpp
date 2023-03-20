#include<iostream>
using namespace std;
class base_1
{
private:
    int a,b;
    public:
    void input1()
    {
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a;
        cin>>b;
    }
    void show1()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
class base_2
{
private:
    int c,d;
    public:
    void input2()
    {
        cout<<"Enter the value of c and d:"<<endl;
        cin>>c;
        cin>>d;
    }
    void show2()
    {
        cout<<"c="<<c<<" d="<<d<<endl;
    }
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

        void show3()
    {
        cout<<"e="<<e<<" f="<<f<<endl;
    }

};

int main()
{
    derive ob;
    ob.input3();
    ob.show3();

    ob.input1();
    ob.show1();

    ob.input2();
    ob.show2();
}
