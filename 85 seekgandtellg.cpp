#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("Tommorrow.txt",ios::out);
    file<<"Today is great day"<<endl;
    file.close();

    ifstream r;
    r.open("Tommorrow.txt",ios::in);
    cout<<r.tellg()<<endl;
    r.seekg(6 ,ios::beg);
    cout<<r.tellg()<<endl;
    char ch;
    while (!r.eof())
    {
        ch=r.get();
        cout<<ch;
        r.close();
    }

}
