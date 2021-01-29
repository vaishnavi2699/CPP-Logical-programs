// WAP to find sum of odd numbers between 1-d
#include<iostream>
using namespace std;
int main()
{
	int i=1,d=0,oddsum=0;
	cout<<"enter d value";
	cin>>d;
	while(i<=d)
	{
	    if(i%2!=0)
		{
		oddsum=oddsum+i;
		}
	i=i+1;	
	}
	cout<<"oddsum is: "<<oddsum;
	return 0;
}
