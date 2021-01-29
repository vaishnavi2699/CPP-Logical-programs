#include<iostream>
using namespace std;
int main()
{
	int arr[100],i=0,n;
	cout<<"how many values do you want to enter: ";
	cin>>n;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	if(n%2==0)
	{
		cout<<"mid values are: "<<arr[(n/2)-1]<<"and"<<arr[n/2];
	}
	else
	{
		cout<<"mid values are: "<<arr[n/2];
	}
	return 0;
}
