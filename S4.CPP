//command line argument(write)
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
	int rno;
	char nm;

	ofstream out("a1.txt");

	cout<<"Enter Rno:";
	cin>>rno;
	cout<<"Name is :";
	cin>>nm;

	out<<endl<<rno;
	out<<endl<<nm;
	return 0;
}

/*
     F9 to create EXE
     DOC SHELL
     cd..
     cd source
*/