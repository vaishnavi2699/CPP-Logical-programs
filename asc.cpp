#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,j,n,temp;
	cout<<"how many values do you want to enter: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
return 0;
}
