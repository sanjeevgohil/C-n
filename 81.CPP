//unformatted i/o operation(put)
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=65;i<=90;i++)
	{
		cout<<i<<"->";
		cout.put(i);
		cout<<"\t";
	}
	return 0;
}