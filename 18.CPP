//return by reference
#include<iostream>
using namespace std;

int &min(int &a,int &b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b
		;
	}
}
int main()
{
	int a=10,b=20;
	
	cout<<"Before Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;

	min(a,b)=100;

	cout<<"\n\nAfter Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;
	return 0;
}