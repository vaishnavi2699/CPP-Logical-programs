#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j,num=10;
	cout<<"enter row and col values";
	cin>>row>>col;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(j%2==0)
			{
				cout<<"20"<<"\t";
			}
			else
			{
				cout<<"10"<<"\t";
			}
		}
		cout<<"\n";
	}
}
