//type conversion(C to B -> operator)
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
		Abc(){}
		Abc(int i)
		{
			a=i;
			cout<<"\nValue of A is:"<<a;
		}
		operator int()   //(float/char)
		{
			return a;
		}
};
int main()
{
	int a; //(float/char)
	Abc a1(10);
	a=a1;
	cout<<"\nValue of A is :"<<a;
	return 0;
}