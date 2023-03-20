#include<iostream>
using namespace std;
class area
{
    private:
    int length,breadth;
    public:
    area();
    area(int,int);
    area(const area &obj);
    int Area();
    ~area()
    {
        cout<<"Memory is Release:"<<endl;
    }
};
area::area():length(5),breadth(4){}

area::area(int l,int b):length(l),breadth(b){}

area::area(const area &obj)
{
    length=obj.length;
    breadth=obj.breadth;
}
int area::Area()
{
    return length*breadth;
}
int main()
{
    area obj,obj2(2,3),obj3;
    obj3=obj2;
    cout<<"Area of first rectangle:"<<obj.Area()<<endl;
     cout<<"Area of second rectangle:"<<obj2.Area()<<endl;
      cout<<"Area of third rectangle:"<<obj3.Area()<<endl;

}
