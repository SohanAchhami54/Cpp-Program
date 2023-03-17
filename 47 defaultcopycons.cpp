#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    public:
    student(int ,string);
    string getname();
    int getroll();
};
student::student(int r,string n):roll(r),name(n){}

string student::getname()
{
    return name;
}

int student::getroll()
{
    return roll;
}


int main()
{
    student s(5,"Bibek");
    cout<<"Name :"<<s.getname()<<endl;
    cout<<"Roll :"<<s.getroll()<<endl;
    student s2=s;
    cout<<"Name :"<<s.getname()<<endl;
    cout<<"Roll :"<<s.getroll()<<endl;


}
