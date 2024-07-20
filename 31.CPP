//nesting of memeber function
#include<iostream>
using namespace std;

class Abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter number:";
		cin>>a;
		output();
	}
	void output(void)
	{
		cout<<"\nNumber is:"<<a;
	}
};
int main()
{
	Abc a1;
	a1.input();
	return 0;
}