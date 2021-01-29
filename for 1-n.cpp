//WAP to accept number nd print 1-n values
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,evencount=0,oddcount=0;
	cout<<"enter number: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		   evencount++;
		}
		else
		{
		   oddcount++;	;
		}
	}
		cout<<"evencount is: "<<evencount;
		cout<<"oddcount is: "<<oddcount;
return 0;
}
