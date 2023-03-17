#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    int a;
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+i*i;
    }

    cout<<"sum="<<sum<<endl;
}
