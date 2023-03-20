#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    ifstream file;

   file.open("Achhami.txt",ios::in);

    if(!file)
    {
        cout<<"File does not exist:"<<endl;
    }
    else
    {
        while(!file.eof())
            file>>name;
            cout<<name;

        file.close();
    }


}
