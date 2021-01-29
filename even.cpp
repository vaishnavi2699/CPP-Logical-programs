#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0,evensum=0;
	cout<<"enter n number";
	cin>>n;
	while(i<=n)
	{
	if(i%3==0)
	{
	evensum=evensum+i;	
	}
	i++;
	}
	cout<<"evensum is: "<<evensum;	
	return 0;
}
