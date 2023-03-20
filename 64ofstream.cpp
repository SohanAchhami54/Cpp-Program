#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    ofstream file;
    file.open("Achhami.txt",ios::out);

    if(!file)
    {
        cout<<"File does not exist:"<<endl;
    }
    else
    {
        cout<<"File created successfully:"<<endl;
        cout<<"Enter the name:"<<endl;
        cin>>name;
        file<<name<<endl;
    }
}
