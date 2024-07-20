//single inheritance
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
int main()
{
	B b1;
	b1.dispA();
	b1.dispB();
	return 0;
}