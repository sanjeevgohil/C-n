//hierachical inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		void dispA()
		{
			cout<<"\nClass A";
		}
};
class B : public A
{
	public:
		void dispB()
		{
			cout<<"\nClass B";
		}
};
class C : public A
{
	public:
		void dispC()
		{
			cout<<"\nClass C";
		}
};
int main()
{
	B b1;
	C c1;
	b1.dispA();
	b1.dispB();
	c1.dispA();
	c1.dispC();
	return 0;
}

