#include<iostream>
using namespace std;
class demo
{
    int a;
    static int b;
public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    static void display()
    {
        cout<<"b="<<b<<endl;
    }
};
int demo::b=0;
int main()
{
    demo obj(10,20);
    obj.show();
    obj.display();
}
