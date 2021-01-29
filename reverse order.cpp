// WAP to print reverse order of a given array.
#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n;
	cout<<"how many values do u want to enter: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<" \t";
	}
return 0;
}
