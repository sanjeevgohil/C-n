//Multipal inheritance
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
class B
{
	public:
		void dispB()
		{
			cout<<"\nClass B";
		}
};
class C : public A,public B
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