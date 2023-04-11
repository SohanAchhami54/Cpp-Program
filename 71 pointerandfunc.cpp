//#include<iostream>
//using namespace std;
//void func(int *p)
//{
//    *p=*p+5;
//}
//int main()
//{
//    int a=10;
//    func(&a);
//    cout<<"The value of a is "<<a;
//}
#include<iostream>
#include<iomanip>
using namespace std;
void func(int *p)
{
   int i;
   for(i=0;i<5;i++)
   {
        *p=*p+5;
        p=p+1;
   }
}
int main()
{
     int a[5] ={10,20,30,40,50};
     func(&a[0]);
     for(int i=0;i<5;i++)
     cout<<a[i]<<setw(5);


}
