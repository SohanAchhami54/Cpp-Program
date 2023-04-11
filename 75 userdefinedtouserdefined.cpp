#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test()
    {

    }
    test(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
class sample
{
    int m,n;
public:
    sample()
    {

    }
    sample(int x, int y)
    {
        m=x;
        n=y;
    }
//    void show()
//    {
//        cout<<m<<endl;
//        cout<<n<<endl;
//    }
    operator test()
    {
        return test(m,n);
    }
};
int main()
{
    test t1;
    sample s1(10,20);
    t1=s1;
    t1.display();

}
