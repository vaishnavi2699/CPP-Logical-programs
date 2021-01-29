#include<iostream>
using namespace std;
int main()
{
	int row,col,i,j,num1=10,num2=99;
	cout<<"enter row and col values";
	cin>>row;
	cin>>col;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
		   	if(i%2==0)
			{
				cout<<num2<<" ";
				num2--;
			}
			else
			{
			cout<<num1<<" ";
	     	num1++;
	        }
		}
		cout<<"\n";
	}
return 0;
}
