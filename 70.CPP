//containership
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
	A a1;
	public:
	void dispB()
	{
		a1.dispA();
		cout<<"\nClass B";
	}
};
int main()
{
	B b1;
	b1.dispB();
	return 0;
}