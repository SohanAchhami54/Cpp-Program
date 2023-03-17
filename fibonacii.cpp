#include <iostream>
#include<iomanip>
using namespace std;

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int main()
{
	int lim;
	cout << "Enter the  number : ";
	cin >> lim;
	for (int i=0;i<lim;i++)
		cout << fib(i) << " "<<setw(5);
		cout<<endl;
		cout<<"Name= Smaran Rawal"<<endl;
		cout<<"Roll number=20 "<<endl;
	return 0;
}

