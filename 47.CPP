//dynamic intilization of object
#include<iostream>
using namespace std;
class Abc
{
	int no;
	public:
	Abc(){}
	Abc(int n)
	{
		no=n;
	}
	int add(void)
	{
		return no*2;
	}
	void disp()
	{
		cout<<"\nNo is :"<<no;
	}
};
int main()
{
	int n;
	cout<<"\nEnter Number :";
	cin>>n;
	Abc a1(n);
	Abc a2(a1.add());

	a1.disp();
	a2.disp();
	return 0;
}