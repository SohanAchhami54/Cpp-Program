#include<iostream>
using namespace std;
class base
{
private:
    int a,b;
    public:
        void get()
        {
            cout<<"Enter the value of a and b:"<<endl;
            cin>>a;
            cin>>b;
        }
        void show()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
};
class derive:public base
{
private:
    int c;
    public:
    void get2()
    {
        cout<<"Enter the value of c:"<<endl;
        cin>>c;
    }
    void show2()
    {
        cout<<"c="<<c<<endl;
    }
};
int main()
{
    derive ob;
    ob.get2();
    ob.show2();

    ob.get();
    ob.show();
}
