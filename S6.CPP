//function template
#include<iostream>
using namespace std;
template <class T>

void sum(T a,T b)
{
	cout<<"\nValue of A is:"<<a;
	cout<<"\nValue of B is:"<<b;
}
int main()
{
	int a=10,b=20;
	float c=12.32,d=45.67;
	char e='A',f='a';
	sum(a,b);
	sum(c,d);
	sum(e,f);
	return 0;
}