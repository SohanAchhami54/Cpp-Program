#include<iostream>
using namespace std;
class Student
{
  private:
      string name;
      int roll;
      int age;
  public:
    void get();
    void show();
};
void Student::get()
{
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter roll"<<endl;
    cin>>roll;
    cout<<"Enter Age"<<endl;
    cin>>age;
}
void Student::show()
{
    cout<<"Name="<<name<<endl;
    cout<<"Age="<<age<<endl;
    cout<<"Rollno="<<roll<<endl;
}
int main()
{
    Student s1,s2;
    s1.get();
    cout<<"Student 1 data"<<endl;
    s1.show();
    cout<<endl;
    s2=s1;
    cout<<"Student 2 data"<<endl;
    s2.show();

}
