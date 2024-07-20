//unformatted i/o operator(write function)
#include<iostream>
using namespace std;
#include<cstring>
int main()
{
	char *nm="sanjeev gohil";
	int i,l;

	l=strlen(nm);

	for(i=1;i<=l;i++)
	{
		cout.write(nm,i);
		cout<<endl;
	}
	return 0;
}