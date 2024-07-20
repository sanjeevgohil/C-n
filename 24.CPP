//polymorphisam
#include<iostream>
using namespace std;
float sum(float a,float b)
{
	return a+b;
}
int sum(int a,int b)
{
	return a+b;
}
float sum(float a,int b)
{
	return a+b;
}

int main()
{
	int a=1,b=2;
	float c=3.36,d=4.45;
	
	cout<<"\nTotal is:"<<sum(a,b);
	cout<<"\nTotal is:"<<sum(c,d);
	cout<<"\nTotal is:"<<sum(c,a);	
	
	return 0;
}