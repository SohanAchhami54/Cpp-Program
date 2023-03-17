#include<iostream>
using namespace std;
int a;
int & num()
{
    return a;
}

int main()
{
    num()=25;
    cout<<"The value of a is :"<<a<<endl;

}
