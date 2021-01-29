//WAP to print even numbers between 1-n using while loop
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,evencount=0,evensum=0,oddcount=0,oddsum=0,sum=0;
	cout<<"enter n number: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		if(i%2==0)
		{
			evensum=evensum+i;
			evencount++;
		}
		else
		{
			oddsum=oddsum+i;
			oddcount++;
	    }
	}
	cout<<"sum is: "<<sum<<"\n";
	cout<<"evencount is: "<<evencount<<"\n";
	cout<<"evensum is: "<<evensum<<"\n";
	cout<<"oddcount is: "<<oddcount<<"\n";
	cout<<"oddsum is: "<<oddsum;
	return 0;
}
