//pointer to object
#include<iostream>
using namespace std;
class Abc
{
	public:
		void disp(void)
		{
			cout<<"\nPointer To Object Example";
		}
};
int main()
{
	Abc *a1;
	a1->disp();
	return 0;
}