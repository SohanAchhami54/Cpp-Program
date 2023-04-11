#include<iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"Base constructor get called:"<<endl;
    }
    virtual ~base()
    {
        cout<<"Base destructor get called:"<<endl;
    }
};
class derive:public base
{
    public:
    derive()
    {
        cout<<"Derived constructor get called:"<<endl;
    }

    ~derive()
    {
        cout<<"Derived destructor get called:"<<endl;
    }
};
int main()
{
   derive ob;
}

