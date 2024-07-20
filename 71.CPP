//type conversion(B to C ->constructor
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
		ABC(){}
		Abc(int i)
		{
			a=i;
			cout<<"\nValue of A is:"<<a;
		}
};
int main()
{
	int a=10;
	Abc a1=a;
	return 0;
}