#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
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
    catch(int x)
    {
        cout<<"Cannot divide by "<<x<<endl;
    }
}
