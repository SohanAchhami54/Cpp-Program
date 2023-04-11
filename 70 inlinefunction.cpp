#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
int main()
{
    int x=10,y=20;
    int c=30,d=40;
    int e=50,f=60;
    cout<<add(x,y)<<endl;
    cout<<add(c,d)<<endl;
    cout<<add(e,f)<<endl;
}
