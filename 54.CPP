//unary operator overload
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
	void output()
	{
		cout<<"\nValue of A is:"<<a;
	}
	Abc operator ++(void)
	{
		Abc temp;
		temp.a=++a;
		return temp;
	}
};
int main()
{
	Abc a1,a2,a3;

	a1.input(10);
	a1.output();

	a2=++a1;
	a2.output();

	a3=++a2;
	a3.output();
	return 0;
}