// WAP to check search element is avaialble ot or not
// [89,34,12,67,39]   search: 67   yes
// [89,34,12,67,39]   search: 64   NO
#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n,count=0,search;
	cout<<"how many values do you want to enter: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter search element";
	cin>>search;
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			count++;
			break;
		}
	}
	if(count!=0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
return 0;
}
