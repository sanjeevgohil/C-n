//polymorphisam
#include<iostream>
using namespace std;
int sum(float a,float b)
{
	return a+b;
}
int sum(int a,int b)
{
	return a+b;
}
int main()
{
	int a=1,b=2;
	float c=3,d=4;
	cout<<"\nTotal is :"<<sum(a,b);
	cout<<"\nTotal is :"<<sum(c,d);
	return 0;
}