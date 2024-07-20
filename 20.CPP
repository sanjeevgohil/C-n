//default argument
#include<iostream>
using namespace std;
inline int sum(int a=100,int b=200)
{
	int c;
	c=a+b;
	return c;
}
int main()
{
	int a,b,c;
	a=10;
	b=20;

	c=sum(a,b);
	cout<<"\nTotal is :"<<c;

	c=sum(a);
	cout<<"\nTotal is :"<<c;

	c=sum();
	cout<<"\nTotal is :"<<c;
	return 0;
}