#include<iostream>
using namespace std;
class author
{
protected:
    string name;
    string qualification;
    public:
    void getdata1()
    {
        cout<<"Enter the name of author:"<<endl;
        cin>>name;
        cout<<"Enter the qualification:"<<endl;
        cin>>qualification;
    }
    void putdata1()
    {
        cout<<"Name of author:"<<name<<endl;
        cout<<"Qualification of author:"<<qualification<<endl;
    }
};
class publication
{
protected:
    string publicationname;
    public:
    void getdata2()
    {
        cout<<"Enter the publication name:"<<endl;
        cin>>publicationname;
    }
    void putdata2()
    {
        cout<<"Publication name:"<<publicationname<<endl;
    }
};

class book:public author,public publication
{
protected:
    string title;
    int price;
public:
    void getdata3()
    {
        cout<<"Enter the title of the book:"<<endl;
        cin>>title;
        cout<<"Enter the price of the book:"<<endl;
        cin>>price;
    }
    void putdata3()
    {
        cout<<"Title of the book is:"<<title<<endl;
        cout<<"The price of the book is:"<<price<<endl;
    }
};

int main()
{
    book bb;
    bb.getdata1();
    bb.getdata2();
    bb.getdata3();
    bb.putdata1();
    bb.putdata2();
    bb.putdata3();
}
