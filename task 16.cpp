//WAP to accept number to check even or odd or zero?
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,num=0;
	cout<<"enter number to check even or odd or zero ";
	cin>>n;
		if(n==0)
		{
			cout<<"zero";
		}
	     else if(n%2==0)
		{
			cout<<"even"<<"\t";
		}
	     else if(n%2!=0)
		{
			cout<<"odd"<<"\t";
		}
return 0;
}
