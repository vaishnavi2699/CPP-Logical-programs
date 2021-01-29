#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n,sum=0;
	cout<<"how many values do you want to enter";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<"sum is: "<<sum<<"\t";
return 0;	
}
