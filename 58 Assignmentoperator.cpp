#include<iostream>
using namespace std;
class sample
{
private:
    int a,b;
public:
    void get()
    {
        cout<<"enter the value of a and b:"<<endl;
        cin>>a;
        cin>>b;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    void operator =(sample &obj)
    {
        a=obj.a;
        b=obj.b;
    }
};
int main()
{
    sample ob1,ob2;
    ob1.get();
    ob2=ob1;
    ob1.display();
    cout<<"Assignment operator overloading:"<<endl;
    ob2.display();
}

