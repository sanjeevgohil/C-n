//returning object
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Value of A:";
		cin>>a;
	}
	Abc setval(void)
	{
		Abc t1;
		t1.a=a+10;
		return t1;
	}
	void output(void)
	{
		cout<<"\nValue of A is:"<<a;
	}
};
int main()
{
	Abc a1,a2;
	a1.input();
	a2=a1.setval();
	a1.output();
	a2.output();
	return 0;
}