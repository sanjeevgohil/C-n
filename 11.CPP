#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;

	p=&a;//call by reference(&)

	cout<<"\nValue of A is:"<<a<<"Value of *p is:"<<*p;

	*p=100;
	cout<<"\nValue of A is:"<<a<<"Value of *p is:"<<*p;

	return 0;
}