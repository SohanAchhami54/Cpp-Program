#include<iostream>
using namespace std;
void add(int,int);
void add(double,double);

void add(int a,int b)
{
    cout<<"Addition="<<a+b<<endl;
}
void add(double c,double d)
{
    cout<<"Addition="<<c+d<<endl;
}
int main()
{
    add(10,20);
    add(10.5,10.33);
}
