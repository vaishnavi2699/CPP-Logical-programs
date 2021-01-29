//WAP to accept three arrays nd insert +ve numbers in one array nd -ve numbers in array?
#include<iostream>
using namespace std;
int main()
{
	int arr[100],pos[100],neg[100],i,n,x=0,y=0;
	cout<<"how many values do you want to enter";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>0)
		{
			pos[x]=arr[i];
			x++;
		}
		else
		{
			neg[y]=arr[i];
			y++;
		}
	}
	cout<<"\n posarray values are: \n";
	for(i=0;i<x;i++)
	{
		cout<<pos[i]<<"\t";
	}
	cout<<"\n neg array values are: \n";
	for(i=0;i<y;i++)
	{
		cout<<neg[i]<<"\t";
	}
	return 0;
}
