#include<iostream>
#include<string.h>
using namespace std;
class demo
{
private:
    char str[20];
   string name;
public:
    void read()
    {
        cout<<"Enter the string:"<<endl;
       cin>>str;

    }
    void operator ==(demo ob2)
    {
    int i;
        i=strcmp(str,ob2.str);

        if (i==0)
        cout<<"Equal:"<<endl;
        else
            cout<<"Not equal:"<<endl;
    }
};
int main()
{
    demo ob1,ob2;
    ob1.read();
    ob2.read();
    ob1==ob2;
}
