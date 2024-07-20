//which object is max from given 2 using *this (2nd method)
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
	void input(int i)
	{
		a=i;
	}
	void output(void)
	{
		cout<<"\nValue of A is:"<<a;
	}
	Abc operator >(Abc t1)
	{
		Abc temp;
		if(a>t1.a)
		{
			temp=*this;
		}
		else
		{
			temp=t1;
		}
		return temp;
	}
};
int main()
{
	Abc a1,a2,a3;

	a1.input(100);
	a2.input(20);

	a3=a1>a2;

	a1.output();
	a2.output();
	a3.output();

	return 0;
}