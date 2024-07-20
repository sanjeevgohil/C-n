//file handling (write)
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int rno;
	char nm[20];

	ofstream out("other.txt");

	cout<<"Enter Roll no:";
	cin>>rno;
	cout<<"Enter Name :";
	cin>>nm;

	out<<endl<<rno;
	out<<endl<<nm;
	return 0;
}