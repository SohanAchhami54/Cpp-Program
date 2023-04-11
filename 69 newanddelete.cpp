#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int *p=new int[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"The elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<setw(4);
    }
    delete []p;
    cout<<endl;
}

