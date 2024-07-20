//explicite constructor
#include<iostream>
using namespace std;

class Abc
{
	public:
	Abc();
};
Abc::Abc()
{
	cout<<"\nWel-Come";
}
int main()
{
	Abc a1;
	return 0;
}