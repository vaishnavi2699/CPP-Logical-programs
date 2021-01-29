// WAP to print n-1 numbers using while loop.
#include<iostream>
using namespace std;
int main()
{
	int i=1,n;
	cout<<"enter n number";
	cin>>n;
	while(i<=n)
	{
		cout<<n<<"\t";
		n--;
	}
	return 0;
}
