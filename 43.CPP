//parameterized constructor
#include<iostream>
using namespace std;
class Abc
{
	public:
	Abc()
	{
		cout<<"Welcome";
	}
	Abc(char str[])
	{
		cout<<str;
	}
};
int main()
{
	Abc a1;
	Abc a2(" SANJEEV ");
	return 0;
}
