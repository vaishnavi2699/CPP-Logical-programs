// WAP to accept n values and print even values .
#include<iostream>
using namespace std;
int main()
{
	int arr[100],n,i;
	cout<<"How many values do you want to enter ?";
	cin>>n;
	
	for(i=0;i<n;i++)      // 56 34 23 78 55
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
