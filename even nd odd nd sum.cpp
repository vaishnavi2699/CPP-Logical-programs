//WAP to find sum of even nd sum of odd,sum;
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,evensum=0,oddsum=0,sum=0;
	cout<<"enter n value: ";
	cin>>n;
	if(n<=10)
	{
		while(i<=n)
		{
			if(i%2==0)
			{
				evensum=evensum+i;
			}
		i++;
		}
	cout<<"evensum is: "<<evensum;
	}
	if(n<=20)
	{
		while(i<=n)
		{
			if(i%2!=0)
			{
				oddsum=oddsum+i;
			}
		i++;
		}
	cout<<"Oddsum is: "<<oddsum;
	}
	if(n<=30)
	{
		while(i<=n)
		{
			if(i%2==0)
			{
			evensum=evensum+i;
		    }
		    else
		    {
		    	oddsum=oddsum+i;
			}
		i++;
		}
	cout<<"evensum is: "<<evensum<<"\t";
	cout<<"oddsum is: "<<oddsum<<"\t";
	}
	if(n<=40)
	{
		while(i<=n)
		{
			sum=sum+i;
			i++;
		}
	}
	if(n<=50)
	{
		while(i<=n)
		{
			if(i%2==0)
			{
				evensum=evensum+i;
			}
			else
			{
				sum=sum+i;
			}
		i=i++;
	}
	cout<<"evensum is: "<<evensum<<"\t";
	cout<<"sum is: "<<sum<<"\t";
	}
return 0;
}

