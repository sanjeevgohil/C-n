//multi level inheritance
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
class C : public B
{
	public:
		void dispC()
		{
			cout<<"\nClass C";
		}
};
int main()
{
	C c1;
	c1.dispA();
	c1.dispB();
	c1.dispC();
	return 0;
}

