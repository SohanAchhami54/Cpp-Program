#include<iostream>
using namespace std;
class sample
{
    int hour,minute;
public:
    sample(int h,int m)
    {
        hour=h;
        minute=m;
    }
    operator int()
    {
        return hour*60+minute;
    }
};
int main()
{
    int h,m,duration;
    h=2;
    m=30;
    sample s(h,m);
    duration=s;
    cout<<duration;
}
