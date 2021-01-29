//WAP to accept three arrays nd insert even numbers in one array nd odd numbers in array?
#include<iostream>
using namespace std;
int main()
{
	int i,n,arr[100],even[100],odd[100],x=0,y=0;
	cout<<"how many values do you want to enter";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	if(arr[i]%2==0)
	{
		even[x]=arr[i];
	}
	else
	{
		odd[y]=arr[i];
	}
    }
	cout<<"\n even array values are: \n";
	for(i=0;i<x;i++)
	{
		cout<<even[i]<<"\t";
	}
	cout<<"\n odd array values are: \n";
	for(i=0;i<y;i++)
	{
		cout<<odd[i]<<"\t";
	}
return 0;	
}
