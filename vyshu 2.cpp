#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j,num1=10,num2=99;
	cout<<"enter row nd col values";
	cin>>row;
	cin>>col;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(j%2==0)
			{
				cout<<num2<<" ";
				num2=num2-row;
			}
			else
			{
				cout<<num1<<" ";
				num1=num1+row;
			}
		}
		num1=num1-14;
		num2=num2+9;
		cout<<"\n";
	}
return 0;
}
