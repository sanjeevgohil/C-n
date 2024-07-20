//pointer to object (2)
#include<iostream>
using namespace std;
class Abc
{
	int rno;
	char nm[10];
	public:
		void input(void)
		{
			cout<<"\nEnter RollNO :";
			cin>>rno;
			cout<<"\nEnter Name :";
			cin>>nm;
		}
		void output(void)
		{
			cout<<"\nRoll no is:"<<rno;
			cout<<"\nName is :"<<nm;
		}
};
int main()
{
	Abc *a1=new Abc[5];
	Abc *e1=a1;

	int i;

	for(i=0;i<=4;i++)
	{
		a1->input();
		a1++;
	}
	for(i=0;i<=4;i++)
	{
		e1->output();
		e1++;
	}
	return 0;
}