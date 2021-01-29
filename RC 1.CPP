#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j,num=10;
	cout<<"enter row nd col values";
	cin>>col>>row;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(i%2==0)
			{
				cout<<"vyshu weds dileep"<<"\t";
			}
			else
			{
				cout<<"love u bujji"<<"\t";
			}
		}
	  cout<<"\n";
	}
return 0;
}
