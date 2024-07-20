//hybrid inheritance
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
class C
{
	public:
		void dispC()
		{
			cout<<"\nClass C";
		}
};
class D : public B,public C
{
	public:
		void dispD()
		{
			cout<<"\nClass D";
		}
};
int main()
{
	D d1;
	d1.dispA();
	d1.dispB();
	d1.dispC();
	d1.dispD();
	return 0;
}
