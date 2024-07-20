//member function (like type conversion
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
	void setval(int i)
	{
		a=i;
	}
	int getval(void)
	{
		return a;
	}
};
int main()
{
	int a=10,b;
	Abc a1;
	a1.setval(a);
	b=a1.getval();

	cout<<"\nvalue of A is :"<<a;
	cout<<"\nvalue of B is :"<<b;
	return 0;
}