//constructor in derived class
#include<iostream>
using namespace std;
class A
{
	int a;
	public:
		A(int i)
		{
			a=i;
		}
		void dispA()
		{
			cout<<"\nValue of A is:"<<a;
		}
};
class B : public A
{
	int b;
	public:
		B(int i,int j) : A(i)
		{
			b=j;
		}
		void dispB()
		{
			cout<<"\nValue of B is:"<<b;
		}
};
int main()
{
	B b1(10,20);
	b1.dispA();
	b1.dispB();
	return 0;
}