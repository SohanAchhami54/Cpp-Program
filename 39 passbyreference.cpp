#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=a;
}
int main()
{
    int x,y;
    cout<<"Enter the value of x :"<<endl;
    cin>>x;
    cout<<"Enter the value of y :"<<endl;
    cin>>y;
    cout<<endl;

    cout<<"Before pass :"<<endl;
    cout<<"x="<<x<<" y="<<y<<endl;
    swap(x,y);

    cout<<"After pass :"<<endl;
    cout<<"x="<<x<<" y="<<y<<endl;
}
