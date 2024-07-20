//static data member
#include<iostream>
using namespace std;
class Abc
{
	static int a;
	public:
	void input(int i)
	{
		a=i;
	}
	void output()
	{
		cout<<"\nValue of A is:"<<a;
	}
};
int Abc::a=0;
int main()
{
	Abc a1,a2;
	a1.input(10);
	a2.output();
	a1.input(200);
	a2.output();
	return 0;
}
