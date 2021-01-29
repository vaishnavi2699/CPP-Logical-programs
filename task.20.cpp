// WAP to accept n values and print evenvalues?
#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n;
	cout<<"how many values do you want to enter";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<"\t";
		}
	}
return 0;
 } 
