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

class derive:private base
{
    public:
    void get2()
    {
        get();
        show();
    }
};
int main()
{
    derive ob;
    ob.get2();
}
