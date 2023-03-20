#include<iostream>
using namespace std;
class A
{
private:

    int a,b;
public:
    void input()
    {
        cout<<"Enter the value of a and b:"<<endl;
        cin>>a;
        cin>>b;
    }
    friend void add (A ob);
};
void add(A ob)
{
    int c;
    c=ob.a+ob.b;
    cout<<"Addition:"<<c<<endl;
}
int main()
{
    A obj;
    obj.input();
    add(obj);
    return 0;
}
