//array of object
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nValue of A is:";
		cin>>a;
	}
	void output(void)
	{
		cout<<"\nValue of A is:"<<a;
	}
};
int main()
{
	Abc a1[3];
	int i;
	for(i=0;i<=9;i++)
	{
		a1[i].input();
	}
	for(i=0;i<=9;i++)
	{
		a1[i].output();
	}
	return 0;
}