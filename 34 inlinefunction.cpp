#include <iostream>
using namespace std;
class operation
{
   public:
    void sum(int,int);

};

inline void operation :: sum(int a,int b)
{
    int sums=a+b;
    cout << "Addition of two numbers: " << sums<<endl;
}


int main()
{
    operation s;
    s.sum(10,5);
    return 0;
}
