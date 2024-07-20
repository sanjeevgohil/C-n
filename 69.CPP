//constructor in derived class(method 2)
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
		int valueA()
		{
			return a;
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
		void sum(void)
		{
			cout<<"\nTotal is :"<<valueA()+b;
		}
};
int main()
{
	B b1(10,20);
	b1.dispA();
	b1.dispB();
	b1.sum();
	return 0;
}
