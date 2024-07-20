//implicite & explicite constructor
#include<iostream>
#include<cstring>
using namespace std;

class Abc
{
	int rno;
	char nm[20];
	public:
	Abc(){}
	Abc(int r,char n[])
	{
		rno=r;
		std::strcpy(nm,n);
	}
	void disp()
	{
		cout<<"\nRoll NO is :"<<rno;
		cout<<"\nName is :"<<nm;
	}
};
int main()
{
	Abc a1(1,"Abc");//implicite constructor
	Abc a2=Abc(2,"XYZ");//explicite constructor

	a1.disp();
	a2.disp();

	return 0;
}