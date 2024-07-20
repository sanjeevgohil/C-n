//making outside function inline
#include<iostream>
using namespace std;
class Abc
{
	int a;
	public:
	void input(void);
	void output(void);
};
inline void Abc::input(void)
{
	cout<<"\nEnter Number:";
	cin>>a;
}
inline void Abc::output(void)
{
	input();
	cout<<"\nNumber is:"<<a;
}
int main()
{
	Abc a1;
	a1.output();
	return 0;
}