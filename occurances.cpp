#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n,search,count=0;
	cout<<"how many values do you want to enter";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter serch element";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
		count++;	
		}
	}
	if(count!=0)
	{
	  cout<<"number of occurances: "<<count;
	}
	else
	{
		cout<<"number of occurances: "<<count;
	}
return 0;
}
