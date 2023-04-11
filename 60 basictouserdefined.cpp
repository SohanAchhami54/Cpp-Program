 #include<iostream>
using namespace std;
class sample
{
    int hour,minute;
public:
    sample()
    {
        hour=0;
        minute=0;
    }
    sample(int t)
    {
        hour=t/60;
        minute=t%60;
    }
    void show()
    {
        cout<<hour<<"hour"<<"and minute"<<minute<<endl;
    }

};
int main ()
{
    sample s;
    int x=100;
    s=x;
    s.show();
}
