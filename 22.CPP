//polymorphisam
#include<iostream>
using namespace std;

int sum(int a)
{
	return a+a;
}
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
int sum(int a,int b,int c,int d)
{
	return a+b+c+d;
}

int main()
{
	int a=1,b=2,c=3,d=4;
	cout<<"\nTotal is:"<<sum(a);
	cout<<"\nTotal is:"<<sum(a,b);
	cout<<"\nTotal is:"<<sum(a,b,c);
	cout<<"\nTotal is:"<<sum(a,b,c,d);
	return 0;
}