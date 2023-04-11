#include<iostream>
using namespace std;
class Teacher
{
    public:
    string name;
    string address;

    Teacher(string name,string address)
    {
        this->name=name;
        this->address=address;
    }
};
class Student
{
public:
    Teacher *teacher;
    string name;
    string email;


    Student(string n,string e,Teacher *teacher)
    {
        name=n;
        email=e;
        this->teacher=teacher;
    }
        void display()
        {
         cout<<"Name="<<name<<endl;
         cout<<"Email="<<email<<endl;
         cout<<"Name="<<this->teacher->name<<endl;
         cout<<"Address="<<this->teacher->address<<endl;
        }

};
int main()
{
    Teacher te("Bibek","Basbari");
    Student st("Sohan","sohanac @gmail.com",&te);
    st.display();

}
