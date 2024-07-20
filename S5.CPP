//command line argument(read)
#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
	int rno;
	char nm;

	ifstream in("a1.txt");

	in>>rno;
	in>>nm;

	cout<<"\nRno is:"<<rno;
	cout<<"\nName is :"<<nm;

	return 0;
}

/*
     F9 to create EXE
     DOC SHELL
     cd..
     cd source
*/