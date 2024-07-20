//private class with argument
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
	int disp(void)
	{
		return a;
	}
};
int main()
{
	Abc a1;
	a1.input(10);
	cout<<"\nvalue of A is:"<<a1.disp();
	return 0;
}