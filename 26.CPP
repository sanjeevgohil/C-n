//private class
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
		cout<<"\nValue of A is :"<<a;
	}
};
int main()
{
	Abc a1;
	
	a1.input(10);
	a1.disp();
	return 0;
}