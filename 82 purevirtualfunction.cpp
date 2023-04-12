#include<iostream>
using namespace std;
class Shape
{

public:
    virtual void area()=0;
};
class Rectangle:public Shape
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    void area()
    {
        cout<<"Area="<<length*breadth<<endl;
    }
};
int main()
{
    Rectangle ob(10,20);
    Shape *obj=&ob;
    obj->area();
}
