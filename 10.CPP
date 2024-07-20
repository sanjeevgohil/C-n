//scope resolution oprater(::)
#include<iostream>
using namespace std;
int a=20;
int main()
{
	int a=10;
	cout<<"\nLocal Value of A is:"<<a;
	cout<<"\nGlobal Value of A is:"<<::a;
	cout<<"\nTotal Is :"<<a+::a;
	return 0;
}