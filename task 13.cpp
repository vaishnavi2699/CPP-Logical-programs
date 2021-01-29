// WAP to find sum of all natural numbers between 1-n
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0;
	cout<<"enter n number";
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<"sum is: "<<sum<<"\t";
	return 0;
}


