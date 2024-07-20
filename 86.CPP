//formatted i/o operation(fill)
#include<iostream>
using namespace std;
int main()
{
	double a=123.456852,b=456.7689;
	cout.precision(2);
	cout.fill('*');
	cout.width(8);
	cout<<a;
	cout.width(9);
	cout<<endl<<b;
	return 0;
}