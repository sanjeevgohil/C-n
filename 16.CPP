//call by value
#include<iostream>
using namespace std;

void swap(int a,int b)//function defination(a&b are formal argument)
{
	int c;
	c=a;
	a=b;
	b=c;
	
	cout<<"\n\nAfter Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;
}  

int main()
{
	int a=10,b=20;
	cout<<"Before Swap"<<endl;
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;

	swap(a,b); //function calling(a&b are actual argument)

	return 0;
}

