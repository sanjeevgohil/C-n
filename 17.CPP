//call by reference
#include<iostream>
using namespace std;

void swap(int *,int *);

int main()
{
	int a=10,b=20;
	cout<<"Before Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;

	swap(&a,&b);

	cout<<"\n\nAfter Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;

	return 0;
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
