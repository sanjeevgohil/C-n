//create own header file
#include<iostream>
#include"udf.h"
using namespace std;
int main()
{
	int a=10,b=20,c=0,d=0;

	c=sum(a,b);
	d=minus(a,b);

	cout<<"\nTotal Is:"<<c;
	cout<<"\nMinus Is:"<<d;
	return 0;
}