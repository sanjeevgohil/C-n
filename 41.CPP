//friendly function
#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Value of A:";
		cin>>a;
	}
	friend void output(A a1,B b1);
};
class B
{
	int b;
	public:
	void input(void)
	{
		cout<<"\nEnter Value of B:";
		cin>>b;
	}
	friend void output(A a1,B b1);
};
void output(A a1,B b1)
{
	cout<<"\nTotal is :"<<a1.a+b1.b;
}
int main()
{
	A a1;
	B b1;
	a1.input();
	b1.input();
	output(a1,b1);
	return 0;
}