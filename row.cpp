#include<iostream>
using namespace std;
int main()
{
	int row,i,j;
	cout<<"enter row value";
	cin>>row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			 cout<<"*"<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
