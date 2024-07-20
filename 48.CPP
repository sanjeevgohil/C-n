//constructor with default argument
#include<iostream>
using namespace std;
class Abc
{
	int a,b;
	public:
	Abc(int i=10,int j=20)
	{
		a=i;
		b=j;
	}
	void disp()
	{
		cout<<"\nValue of A is:"<<a<<"     B is:"<<b;\
	}
};
int main()
{
	Abc a1;
	Abc a2(20);
	Abc a3(100,200);

	a1.disp();
	a2.disp();
	a3.disp();
	return 0;
}
