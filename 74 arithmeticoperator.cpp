#include<iostream>
using namespace std;
class demo
{
private:
    int a,b;
public:
    demo()
    {
        a=0;
        b=0;
    }
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    demo operator +(demo obj)
    {
        demo temp;
        temp.a=a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
    void display()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }


};
int main()
{
    demo d1;
    demo d2(10,20);
    demo d3(5,10);
    d2.display();
    d3.display();
    demo d4=d2+d3;
    d4.display();
    return 0;
}
