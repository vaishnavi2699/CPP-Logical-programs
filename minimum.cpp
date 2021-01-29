// WAP to accept n values and find min value.
#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n,min=0;
	cout<<"how many values do u want to enter: ";
	cin>>n;
	cin>>min;
	for(i=1;i<n;i++)
	{
		cin>>arr[i];
		if(min>arr[i])  //23,45,67,12,34.
		{
			min=arr[i];
		}
	}
	cout<<"min value is: "<<min;
return 0;
}
