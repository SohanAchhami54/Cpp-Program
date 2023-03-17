#include<iostream>
using namespace std;
int main()
{
    int a;
    int &b=a;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    a++;
    cout<<a<<endl;
    cout<<b<<endl;
}
