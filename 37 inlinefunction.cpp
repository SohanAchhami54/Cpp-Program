#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void cube();
    void get();
};

inline void A::get()
{
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
}


inline void A::cube()
{
    cout<<"The cube of "<<a<<"="<<a*a*a<<endl;
}

int main()
{
    A obj;
    obj.get();
    obj.cube();
}
