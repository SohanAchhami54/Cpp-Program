#include<iostream>
using namespace std;
class unary
{
private:
    int a,b;
public:
    unary(int,int);
    void operator -();
    void show();
};
unary::unary(int x,int y)
{
    a=x;
    b=y;
}
void unary::operator -()
{
    a=-a;
    b=-b;
}
void unary::show()
{
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
int main()
{
    unary ob(2,5);
    ob.show();
    -ob;
    cout<<endl;
    ob.show();
}
