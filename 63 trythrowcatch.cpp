#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter any two number:"<<endl;
    cin>>a;
    cin>>b;

    try
    {
        if(b==0)
            throw b;
        else
        {
            c=a/b;
            cout<<"Division:"<<c<<endl;
        }
    }
    catch(float x)
    {
        cout<<"Cannot divide by "<<x<<endl;
    }
}
