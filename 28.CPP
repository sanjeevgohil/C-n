//local class
#include<iostream>
using namespace std;
void local(void)
{
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
			cout<<"\nValue of A is :"<<a;
		}
	};
	Abc a1;
	a1.input(100);
	a1.output();
}
int main()
{
	local();
}