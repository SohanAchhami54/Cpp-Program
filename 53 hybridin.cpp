#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    void input()
    {
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
    }
    void show()
    {
        cout<<"Value of a:"<<a<<endl;
    }

};
class B:virtual public A
{

};
class C: virtual public A
{

};
class D:public B,public C
{

};
int main()
{
    D ob;
    ob.input();
    ob.show();
}
