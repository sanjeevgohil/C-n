//type conversion (b to c & c to b)
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
	Abc(int i)
	{
		a=i;
		cout<<"\nValue of A is :"<<a;
	}
	operator int()
	{
		return a;
	}
};
int main()
{
	int a=10,b;
	Abc a1=a;

	b=a1;
	cout<<"\nvalue of B is:"<<b;
	return 0;
}
