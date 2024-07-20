//nested class
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
	void disp(void)
	{
		a2.output(a);
	}
	class Abc1
	{
		public:
		void output(int a)
		{
			cout<<"\nValue of A is:"<<a;
		}
	};
	Abc1 a2;
};
int main()
{
	Abc a1;

	a1.input(10);
	a1.disp();
	return 0;
}