#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int ,int);
    rectangle(const rectangle &obj);

    int area();
};

rectangle::rectangle()//default constructor
{
    length=10;
    breadth=20;
}
int rectangle::area()
{
    return length*breadth;
}
rectangle::rectangle(int l,int b)//parametrized constructor
{
    length=l;
    breadth=b;
}
rectangle::rectangle(const rectangle &obj)
{
    length=obj.length;
    breadth=obj.breadth;
}

int main()
{
    rectangle ob,ob1(10,30);
    rectangle ob2=ob1;
    cout<<"Area of circle one="<<ob.area()<<endl;
    cout<<"Area of circle two="<<ob1.area()<<endl;
    cout<<"Area of circle three="<<ob2.area()<<endl;
    return 0;
}
