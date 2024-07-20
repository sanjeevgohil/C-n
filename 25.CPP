//public class
#include<iostream>
using namespace std;

class Abc
{
	public:
	int a;
	void disp(void)
	{
		cout<<"\nValue of A is :"<<a;
	}
};
int main()
{
	Abc a1;
	a1.a=10;
	a1.disp();
	return 0;
}