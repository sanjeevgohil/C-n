//unformatted i/o opration(getline)
#include<iostream>
using namespace std;
int main()
{
	char nm[20];
	cout<<"\nEnter Name:";
	cin.getline(nm,20);
	cout<<"\nName is :"<<nm;
	return 0;
}