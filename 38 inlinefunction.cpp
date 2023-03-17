#include<iostream>
using namespace std;
inline int cube(int a)
{
    return a*a*a;
}
int main()
{
    int n;
    cout<<"Enter the value of a :"<<endl;
    cin>>n;
    cout<<"The cube of "<<n<<"= "<<cube(n)<<endl;
}
