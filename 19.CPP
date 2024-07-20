//inline function
#include<iostream>
using namespace std;
inline int sum(int a,int b)
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
	cout<<"\nTotal Is :"<<c;

	return 0;
}