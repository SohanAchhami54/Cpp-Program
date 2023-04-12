#include<iostream>
using namespace std;
template<class A, class B> A sum(A a, B b)
{
    return a+b;
}
int main()
{
    cout<<"Sum1="<<sum(10.5,14)<<endl;
    cout<<"Sum2="<<sum(14,10.2)<<endl;

}
//#include<iostream>
//using namespace std;
//template<class A,class B> A sum(A a, B b)
//{
//    return a+b;
//}
//int main()
//{
//    cout<<"Sum1="<<sum(10,14)<<endl;
//    cout<<"Sum2="<<sum(55,55)<<endl;
//
//}
