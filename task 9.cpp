//WAP to print odd numbers between 1-n using while loop
#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"enter n value";
	cin>>n;
	while(i<=n)
	{
		if(i%2!=0)
		{
			cout<<i<<"\t";
		}
      i=i+1;
	}
	return 0;
}

