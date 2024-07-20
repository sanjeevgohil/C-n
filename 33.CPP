//private member function
#include<iostream>
using namespace std;
class Abc
{
	int a;
	void input(void)
	{
		cout<<"\nEnter number:";
		cin>>a;
	}
	public:

	void output(void)
	{
		input();
		cout<<"\nNUmber is :"<<a;
	}
};
int main()
{
	Abc a1;
	a1.output();
	return 0;
}
