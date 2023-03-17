#include<iostream>
using namespace std;
class test
{
    public:
    int length;
    int breadth;
    test();
    test(int,int);
    test(const test &obj);
    int area();
    ~test();
};
test::test()
{
    length=25;
    breadth=35;
}
test::test(int l, int b)
{
    length=l;
    breadth=b;
}
test::test(const test &obj)
{
    length=obj.length;
    breadth=obj.breadth;
}
int test::area()
{
    return length*breadth;
}
test::~test()
{
    cout<<"Memory is released:"<<endl;
}


int main()
{
   test obj,obj1(10,20);
   test obj2=obj;
   cout<<"The area of first rectangle="<<obj.area()<<endl;
   cout<<"The area of second rectangle="<<obj1.area()<<endl;
   cout<<"The area of third rectangle="<<obj2.area()<<endl;

}
