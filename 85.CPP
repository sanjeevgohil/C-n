//formatted i/o operation(precision)
#include<iostream>
using namespace std;
int main()
{
	double a=123.45678,b=456.7689;
	cout.precision(2);
	cout<<a;
	cout<<endl<<b;
	return 0;
}