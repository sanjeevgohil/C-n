//nesting of member function
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Number :";
		cin>>a;
	}
	void output(void)
	{
		input();
		cout<<"Number is :"<<a;
	}
};
int main()
{
	Abc a1;
	a1.output();
	return 0;
}