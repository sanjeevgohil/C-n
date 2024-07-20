//object as function argument
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
	void setval(Abc t1)
	{
		a=t1.a+10;
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
	a2.setval(a1);
	a1.output();
	a2.output();
	return 0;
}