#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j;
	cout<<"enter row nd col values";
	cin>>row;
	cin>>col;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			cout<<i<<"\t";
		}
		cout<<"\n";
	}
	
return 0;
}

